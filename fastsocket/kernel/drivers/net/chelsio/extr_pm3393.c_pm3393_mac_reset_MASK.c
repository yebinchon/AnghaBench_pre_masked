
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int A_ELMER0_GPO ;
 int CH_DBG (int *,int ,char*,int,int,int,int,int) ;
 int HW ;
 int OFFSET (int ) ;
 int SUNI1x10GEXP_BITMSK_TOP_EXPIRED ;
 int SUNI1x10GEXP_BITMSK_TOP_PL4_ID_DOOL ;
 int SUNI1x10GEXP_BITMSK_TOP_PL4_ID_ROOL ;
 int SUNI1x10GEXP_BITMSK_TOP_PL4_IS_ROOL ;
 int SUNI1x10GEXP_BITMSK_TOP_PL4_OUT_ROOL ;
 int SUNI1x10GEXP_BITMSK_TOP_SXRA_EXPIRED ;
 int SUNI1x10GEXP_REG_DEVICE_STATUS ;
 int msleep (int) ;
 int t1_tpi_read (int *,int ,int*) ;
 int t1_tpi_write (int *,int ,int) ;

__attribute__((used)) static int pm3393_mac_reset(adapter_t * adapter)
{
 u32 val;
 u32 x;
 u32 is_pl4_reset_finished;
 u32 is_pl4_outof_lock;
 u32 is_xaui_mabc_pll_locked;
 u32 successful_reset;
 int i;
 successful_reset = 0;
 for (i = 0; i < 3 && !successful_reset; i++) {

  t1_tpi_read(adapter, A_ELMER0_GPO, &val);
  val &= ~1;
  t1_tpi_write(adapter, A_ELMER0_GPO, val);


  msleep(1);


  msleep(1);


  msleep(2 );


  val |= 1;
  t1_tpi_write(adapter, A_ELMER0_GPO, val);


  msleep(15 );


  msleep(1);




  t1_tpi_read(adapter, OFFSET(SUNI1x10GEXP_REG_DEVICE_STATUS), &val);
  is_pl4_reset_finished = (val & SUNI1x10GEXP_BITMSK_TOP_EXPIRED);





  x = (SUNI1x10GEXP_BITMSK_TOP_PL4_ID_DOOL
                                                   |
       SUNI1x10GEXP_BITMSK_TOP_PL4_ID_ROOL |
       SUNI1x10GEXP_BITMSK_TOP_PL4_IS_ROOL |
       SUNI1x10GEXP_BITMSK_TOP_PL4_OUT_ROOL);
  is_pl4_outof_lock = (val & x);




  is_xaui_mabc_pll_locked =
      (val & SUNI1x10GEXP_BITMSK_TOP_SXRA_EXPIRED);

  successful_reset = (is_pl4_reset_finished && !is_pl4_outof_lock
        && is_xaui_mabc_pll_locked);

  CH_DBG(adapter, HW,
         "PM3393 HW reset %d: pl4_reset 0x%x, val 0x%x, "
         "is_pl4_outof_lock 0x%x, xaui_locked 0x%x\n",
         i, is_pl4_reset_finished, val, is_pl4_outof_lock,
         is_xaui_mabc_pll_locked);
 }
 return successful_reset ? 0 : 1;
}

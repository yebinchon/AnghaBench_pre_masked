
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int oddpar; } ;
union cvmx_stxx_spi4_calx {void* u64; TYPE_3__ s; } ;
union cvmx_stxx_int_msk {void* u64; } ;
struct TYPE_8__ {int oddpar; } ;
union cvmx_srxx_spi4_calx {void* u64; TYPE_2__ s; } ;
struct TYPE_11__ {int jitter; int clr_boot; int maxdist; int macro_en; int mux_en; scalar_t__ set_boot; scalar_t__ trntest; } ;
union cvmx_spxx_trn4_ctl {void* u64; TYPE_5__ s; } ;
union cvmx_spxx_int_msk {void* u64; } ;
union cvmx_spxx_dbg_deskew_ctl {void* u64; } ;
struct TYPE_10__ {int runbist; int clkdly; int statrcv; int srxdlck; scalar_t__ rcvtrn; scalar_t__ drptrn; scalar_t__ sndtrn; scalar_t__ statdrv; scalar_t__ seetrn; } ;
union cvmx_spxx_clk_ctl {void* u64; TYPE_4__ s; } ;
struct TYPE_7__ {scalar_t__ stat2; scalar_t__ stat1; scalar_t__ stat0; } ;
union cvmx_spxx_bist_stat {TYPE_1__ s; void* u64; } ;
typedef int uint64_t ;
typedef int cvmx_spi_mode_t ;
struct TYPE_12__ {int cpu_clock_hz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 void* FUNC_14 (int ) ;
 TYPE_6__* FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,void*) ;

int FUNC_18(int VAR_1, cvmx_spi_mode_t VAR_2)
{
 union cvmx_spxx_dbg_deskew_ctl VAR_3;
 union cvmx_spxx_clk_ctl VAR_4;
 union cvmx_spxx_bist_stat VAR_5;
 union cvmx_spxx_int_msk VAR_6;
 union cvmx_stxx_int_msk VAR_7;
 union cvmx_spxx_trn4_ctl VAR_8;
 int VAR_9;
 uint64_t VAR_10 = FUNC_15()->cpu_clock_hz / 1000;


 VAR_6.u64 = FUNC_14(FUNC_3(VAR_1));
 FUNC_17(FUNC_3(VAR_1), 0);
 VAR_7.u64 = FUNC_14(FUNC_9(VAR_1));
 FUNC_17(FUNC_9(VAR_1), 0);


 FUNC_17(FUNC_6(VAR_1), 0);
 FUNC_17(FUNC_8(VAR_1), 0);
 VAR_4.u64 = 0;
 VAR_4.s.runbist = 1;
 FUNC_17(FUNC_1(VAR_1), VAR_4.u64);
 FUNC_16(10 * VAR_10);
 VAR_5.u64 = FUNC_14(FUNC_0(VAR_1));
 if (VAR_5.s.stat0)
  FUNC_13
      ("ERROR SPI%d: BIST failed on receive datapath FIFO\n",
       VAR_1);
 if (VAR_5.s.stat1)
  FUNC_13("ERROR SPI%d: BIST failed on RX calendar table\n",
        VAR_1);
 if (VAR_5.s.stat2)
  FUNC_13("ERROR SPI%d: BIST failed on TX calendar table\n",
        VAR_1);


 for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
  union cvmx_srxx_spi4_calx VAR_11;
  union cvmx_stxx_spi4_calx VAR_12;

  VAR_11.u64 = 0;
  VAR_11.s.oddpar = 1;
  FUNC_17(FUNC_7(VAR_9, VAR_1),
          VAR_11.u64);

  VAR_12.u64 = 0;
  VAR_12.s.oddpar = 1;
  FUNC_17(FUNC_11(VAR_9, VAR_1),
          VAR_12.u64);
 }


 FUNC_17(FUNC_4(VAR_1),
         FUNC_14(FUNC_4(VAR_1)));
 FUNC_17(FUNC_3(VAR_1), VAR_6.u64);
 FUNC_17(FUNC_10(VAR_1),
         FUNC_14(FUNC_10(VAR_1)));
 FUNC_17(FUNC_9(VAR_1), VAR_7.u64);


 VAR_4.u64 = 0;
 VAR_4.s.seetrn = 0;
 VAR_4.s.clkdly = 0x10;
 VAR_4.s.runbist = 0;
 VAR_4.s.statdrv = 0;

 VAR_4.s.statrcv = 1;
 VAR_4.s.sndtrn = 0;
 VAR_4.s.drptrn = 0;
 VAR_4.s.rcvtrn = 0;
 VAR_4.s.srxdlck = 0;
 FUNC_17(FUNC_1(VAR_1), VAR_4.u64);
 FUNC_16(100 * VAR_10);


 VAR_4.s.srxdlck = 1;
 FUNC_17(FUNC_1(VAR_1), VAR_4.u64);


 FUNC_16(100 * VAR_10);


 VAR_8.s.trntest = 0;
 VAR_8.s.jitter = 1;
 VAR_8.s.clr_boot = 1;
 VAR_8.s.set_boot = 0;
 if (FUNC_12(VAR_0))
  VAR_8.s.maxdist = 3;
 else
  VAR_8.s.maxdist = 8;
 VAR_8.s.macro_en = 1;
 VAR_8.s.mux_en = 1;
 FUNC_17(FUNC_5(VAR_1), VAR_8.u64);

 VAR_3.u64 = 0;
 FUNC_17(FUNC_2(VAR_1),
         VAR_3.u64);

 return 0;
}

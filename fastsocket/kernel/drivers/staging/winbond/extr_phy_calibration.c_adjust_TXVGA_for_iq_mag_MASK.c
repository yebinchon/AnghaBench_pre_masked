
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hw_data {int txvga_setting_for_cal; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct hw_data*,int ,int*) ;
 int FUNC_4 (struct hw_data*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct hw_data*,int,int) ;
 int FUNC_7 (int) ;

unsigned char FUNC_8(struct hw_data *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;
 u32 VAR_8;
 s32 VAR_9;
 s32 VAR_10;
 u32 VAR_11;
 s32 VAR_12;
 u8 VAR_13;
 int VAR_14;


 VAR_13 = 0;
 for( VAR_6=0; VAR_6<10; VAR_6++)
 {
  VAR_14 = ( 0x24C40A|(VAR_6<<6) );
  FUNC_6(VAR_5, 5, ((5<<24)|VAR_14) );
  VAR_5->txvga_setting_for_cal = VAR_14;

  FUNC_5(30);

  if( !FUNC_3(VAR_5, VAR_4, &VAR_7) )
   return 0;

  FUNC_0(("[CAL]    MODE_CTRL (read) = 0x%08X\n", VAR_7));



  VAR_7 &= ~(VAR_2|VAR_1);
  VAR_7 &= ~VAR_1;
  VAR_7 |= (VAR_0|0x02);
  VAR_7 |= (VAR_0|0x02|2<<2);
  FUNC_4(VAR_5, VAR_4, VAR_7);
  FUNC_0(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_7));

  FUNC_7(1);

  FUNC_7(300);


  FUNC_3(VAR_5, VAR_3, &VAR_8);

  FUNC_0(("[CAL]    CALIB_READ1 = 0x%08X\n", VAR_8));
  FUNC_7(300);

  VAR_9 = FUNC_1(VAR_8 & 0x00001FFF);
  VAR_10 = FUNC_1((VAR_8 & 0x03FFE000) >> 13);
  FUNC_0(("[CAL]    ** iqcal_tone_i0=%d, iqcal_tone_q0=%d\n",
       VAR_9, VAR_10));

  VAR_11 = VAR_9*VAR_9 + VAR_10*VAR_10;
  VAR_12 = (s32) FUNC_2(VAR_11);
  FUNC_0(("[CAL]    ** auto_adjust_txvga_for_iq_mag_0_tx=%d\n", VAR_12));

  if( VAR_12>=700 && VAR_12<=1750 )
   break;
  else if(VAR_12 > 1750)
  {
   VAR_6=-2;
   continue;
  }
  else
   continue;

 }

 if( VAR_12>=700 && VAR_12<=1750 )
  return 1;
 else
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hw_data {int iq_rsdl_gain_tx_d2; int iq_rsdl_phase_tx_d2; int revision; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int*,int*) ;
 int FUNC_11 (struct hw_data*,int,int*) ;
 int FUNC_12 (struct hw_data*,int,int*) ;
 int FUNC_13 (struct hw_data*,int,int) ;
 int FUNC_14 (struct hw_data*,int,int) ;

u8 FUNC_15(struct hw_data *VAR_6, u16 VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 s32 VAR_10;
 s32 VAR_11;
 s32 VAR_12;
 s32 VAR_13;
 s32 VAR_14;
 s32 VAR_15;
 s32 VAR_16;
 s32 VAR_17;
 s32 VAR_18[4];
 s32 VAR_19[4];
 s32 VAR_20[4];
 s32 VAR_21, VAR_22;
 s32 VAR_23, VAR_24;
 s32 VAR_25, VAR_26;
 s32 VAR_27, VAR_28;
 u32 VAR_29;
 u16 VAR_30;

 u32 VAR_31;
 u32 VAR_32;
 u8 VAR_33;

 s32 VAR_34,VAR_35;
 s32 VAR_36,VAR_37;
 u16 VAR_38;

 FUNC_1(("[CAL] -> [5]_rx_iq_calibration_loop()\n"));
 FUNC_1(("[CAL] ** factor = %d\n", VAR_7));



 FUNC_11(VAR_6, 0x80, &VAR_29);
 VAR_29 |= FUNC_0(19);
 FUNC_13(VAR_6, 0x80, VAR_29);


 FUNC_11(VAR_6, 0xE4, &VAR_29);
 VAR_29 |= FUNC_0(0);
 FUNC_13(VAR_6, 0xE4, VAR_29);
 FUNC_1(("[CAL] ** RF_CTRL(0xE4) = 0x%08X", VAR_29));

 FUNC_14(VAR_6, 0x58, 0x44444444);



 FUNC_12(VAR_6, VAR_5, &VAR_9);
 FUNC_1(("[CAL]    MODE_CTRL (read) = 0x%08X\n", VAR_9));

 VAR_33 = 0;



 VAR_30 = VAR_0;
 while (VAR_30 > 0)
 {
  FUNC_1(("[CAL] [%d.] <_rx_iq_calibration_loop>\n", (VAR_0-VAR_30+1)));
  VAR_34=0;
  VAR_35=0;
  VAR_36=0;
  VAR_37=0;
  VAR_38=0;

  for(VAR_38=0; VAR_38<10; VAR_38++)
  {

  VAR_9 &= ~VAR_1;
  if( !FUNC_14(VAR_6, VAR_5, VAR_9) )
   return 0;
  FUNC_1(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_9));

  VAR_9 &= ~VAR_2;
  VAR_9 |= (VAR_1|0x1);
  FUNC_14(VAR_6, VAR_5, VAR_9);
  FUNC_1(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_9));


  FUNC_12(VAR_6, VAR_3, &VAR_29);
  FUNC_1(("[CAL]    CALIB_READ1 = 0x%08X\n", VAR_29));

  VAR_10 = FUNC_3(VAR_29 & 0x00001FFF);
  VAR_11 = FUNC_3((VAR_29 & 0x03FFE000) >> 13);
  FUNC_1(("[CAL]    ** iqcal_tone_i = %d, iqcal_tone_q = %d\n",
       VAR_10, VAR_11));

  FUNC_12(VAR_6, VAR_4, &VAR_29);
  FUNC_1(("[CAL]    CALIB_READ2 = 0x%08X\n", VAR_29));

  VAR_12 = FUNC_3(VAR_29 & 0x00001FFF);
  VAR_13 = FUNC_3((VAR_29 & 0x03FFE000) >> 13);
  FUNC_1(("[CAL]    ** iqcal_image_i = %d, iqcal_image_q = %d\n",
       VAR_12, VAR_13));
   if( VAR_38 == 0)
   {
    continue;
   }
   else
   {
    VAR_36=( VAR_36*(VAR_38-1) +VAR_12)/VAR_38;
    VAR_37=( VAR_37*(VAR_38-1) +VAR_13)/VAR_38;
    VAR_34=( VAR_34*(VAR_38-1) +VAR_10)/VAR_38;
    VAR_35=( VAR_35*(VAR_38-1) +VAR_11)/VAR_38;
   }
  }


  VAR_12 = VAR_36;
  VAR_13 = VAR_37;
  VAR_10 = VAR_34;
  VAR_11 = VAR_35;


  VAR_14 = (VAR_10 * VAR_10 +
      VAR_11 * VAR_11) / 1024;
  VAR_15 = (VAR_10 * VAR_11 * (-1) +
      VAR_11 * VAR_10) / 1024;
  VAR_16 = (VAR_12 * VAR_10 -
       VAR_13 * VAR_11) / 1024;
  VAR_17 = (VAR_12 * VAR_11 +
       VAR_13 * VAR_10) / 1024;

  FUNC_1(("[CAL]    ** rot_tone_i_b  = %d\n", VAR_14));
  FUNC_1(("[CAL]    ** rot_tone_q_b  = %d\n", VAR_15));
  FUNC_1(("[CAL]    ** rot_image_i_b = %d\n", VAR_16));
  FUNC_1(("[CAL]    ** rot_image_q_b = %d\n", VAR_17));


  if (VAR_14 == 0)
  {
   FUNC_1(("[CAL] ** <_rx_iq_calibration_loop> ERROR *******\n"));
   FUNC_1(("[CAL] ** rot_tone_i_b=0 to calculate EPS and THETA !!\n"));
   FUNC_1(("[CAL] ******************************************\n"));
   break;
  }

  VAR_21 = (VAR_16 * 32768) / VAR_14 -
   VAR_6->iq_rsdl_gain_tx_d2;
  VAR_22 = (VAR_17 * 32768) / VAR_14 -
   VAR_6->iq_rsdl_phase_tx_d2;

  FUNC_1(("[CAL]    ** iq_rsdl_gain_tx_d2 = %d\n", VAR_6->iq_rsdl_gain_tx_d2));
  FUNC_1(("[CAL]    ** iq_rsdl_phase_tx_d2= %d\n", VAR_6->iq_rsdl_phase_tx_d2));
  FUNC_1(("[CAL]    ***** EPSILON/2 = %d\n", VAR_21));
  FUNC_1(("[CAL]    ***** THETA/2   = %d\n", VAR_22));

  FUNC_10(VAR_22, &VAR_23, &VAR_25);
  FUNC_10(VAR_22*2, &VAR_24, &VAR_26);
  FUNC_1(("[CAL]    ** sin(b/2)=%d, cos(b/2)=%d\n", VAR_23, VAR_25));
  FUNC_1(("[CAL]    ** sin(b)=%d, cos(b)=%d\n", VAR_24, VAR_26));

  if (VAR_26 == 0)
  {
   FUNC_1(("[CAL] ** <_rx_iq_calibration_loop> ERROR *******\n"));
   FUNC_1(("[CAL] ** cos(b)=0 !!\n"));
   FUNC_1(("[CAL] ******************************************\n"));
   break;
  }


  VAR_27 = (41943040/VAR_26)*VAR_25;


  if (VAR_6->revision == 0x2002)
  {
   VAR_28 = (41943040/VAR_26)*VAR_23*(-1);
  }
  else
  {
   VAR_28 = (41943040*4/VAR_26)*VAR_23*(-1);
  }

  VAR_18[0] = FUNC_2(VAR_27/(32768+VAR_21));
  VAR_18[1] = FUNC_2(VAR_28/(32768-VAR_21));
  VAR_18[2] = FUNC_2(VAR_28/(32768+VAR_21));
  VAR_18[3] = FUNC_2(VAR_27/(32768-VAR_21));

  FUNC_1(("[CAL]    ** rx_cal_flt_b[0] = %d\n", VAR_18[0]));
  FUNC_1(("[CAL]       rx_cal_flt_b[1] = %d\n", VAR_18[1]));
  FUNC_1(("[CAL]       rx_cal_flt_b[2] = %d\n", VAR_18[2]));
  FUNC_1(("[CAL]       rx_cal_flt_b[3] = %d\n", VAR_18[3]));

  VAR_19[0] = VAR_18[0] - 128;
  VAR_19[1] = VAR_18[1];
  VAR_19[2] = VAR_18[2];
  VAR_19[3] = VAR_18[3] - 128;
  FUNC_1(("[CAL]    ** rx_cal[0] = %d\n", VAR_19[0]));
  FUNC_1(("[CAL]       rx_cal[1] = %d\n", VAR_19[1]));
  FUNC_1(("[CAL]       rx_cal[2] = %d\n", VAR_19[2]));
  FUNC_1(("[CAL]       rx_cal[3] = %d\n", VAR_19[3]));


  VAR_31 = (VAR_10*VAR_10 + VAR_11*VAR_11);
  VAR_32 = (VAR_12*VAR_12 + VAR_13*VAR_13)*VAR_7;

  FUNC_1(("[CAL]    ** pwr_tone  = %d\n", VAR_31));
  FUNC_1(("[CAL]    ** pwr_image  = %d\n", VAR_32));

  if (VAR_31 > VAR_32)
  {
   VAR_33++;

   FUNC_1(("[CAL] ** <_rx_iq_calibration_loop> *************\n"));
   FUNC_1(("[CAL] ** VERIFY OK # %d !!\n", VAR_33));
   FUNC_1(("[CAL] ******************************************\n"));

   if (VAR_33 > 2)
   {
    FUNC_1(("[CAL] ** <_rx_iq_calibration_loop> *********\n"));
    FUNC_1(("[CAL] ** RX_IQ_CALIBRATION OK !!\n"));
    FUNC_1(("[CAL] **************************************\n"));
    return 0;
   }

   continue;
  }

  FUNC_12(VAR_6, 0x54, &VAR_29);
  FUNC_1(("[CAL]    ** 0x54 = 0x%08X\n", VAR_29));

  if (VAR_6->revision == 0x2002)
  {
   VAR_20[0] = FUNC_7((VAR_29 & 0x0000F000) >> 12);
   VAR_20[1] = FUNC_7((VAR_29 & 0x00000F00) >> 8);
   VAR_20[2] = FUNC_7((VAR_29 & 0x000000F0) >> 4);
   VAR_20[3] = FUNC_7((VAR_29 & 0x0000000F));
  }
  else
  {
   VAR_20[0] = FUNC_8((VAR_29 & 0xF8000000) >> 27);
   VAR_20[1] = FUNC_9((VAR_29 & 0x07E00000) >> 21);
   VAR_20[2] = FUNC_9((VAR_29 & 0x001F8000) >> 15);
   VAR_20[3] = FUNC_8((VAR_29 & 0x00007C00) >> 10);
  }

  FUNC_1(("[CAL]    ** rx_cal_reg[0] = %d\n", VAR_20[0]));
  FUNC_1(("[CAL]       rx_cal_reg[1] = %d\n", VAR_20[1]));
  FUNC_1(("[CAL]       rx_cal_reg[2] = %d\n", VAR_20[2]));
  FUNC_1(("[CAL]       rx_cal_reg[3] = %d\n", VAR_20[3]));

  if (VAR_6->revision == 0x2002)
  {
   if (((VAR_20[0]==7) || (VAR_20[0]==(-8))) &&
    ((VAR_20[3]==7) || (VAR_20[3]==(-8))))
   {
    FUNC_1(("[CAL] ** <_rx_iq_calibration_loop> *********\n"));
    FUNC_1(("[CAL] ** RX_IQ_CALIBRATION SATUATION !!\n"));
    FUNC_1(("[CAL] **************************************\n"));
    break;
   }
  }
  else
  {
   if (((VAR_20[0]==31) || (VAR_20[0]==(-32))) &&
    ((VAR_20[3]==31) || (VAR_20[3]==(-32))))
   {
    FUNC_1(("[CAL] ** <_rx_iq_calibration_loop> *********\n"));
    FUNC_1(("[CAL] ** RX_IQ_CALIBRATION SATUATION !!\n"));
    FUNC_1(("[CAL] **************************************\n"));
    break;
   }
  }

  VAR_19[0] = VAR_19[0] + VAR_20[0];
  VAR_19[1] = VAR_19[1] + VAR_20[1];
  VAR_19[2] = VAR_19[2] + VAR_20[2];
  VAR_19[3] = VAR_19[3] + VAR_20[3];
  FUNC_1(("[CAL]    ** apply rx_cal[0] = %d\n", VAR_19[0]));
  FUNC_1(("[CAL]       apply rx_cal[1] = %d\n", VAR_19[1]));
  FUNC_1(("[CAL]       apply rx_cal[2] = %d\n", VAR_19[2]));
  FUNC_1(("[CAL]       apply rx_cal[3] = %d\n", VAR_19[3]));

  FUNC_12(VAR_6, 0x54, &VAR_29);
  if (VAR_6->revision == 0x2002)
  {
   VAR_29 &= 0x0000FFFF;
   VAR_29 |= ((FUNC_4(VAR_19[0]) << 12)|
     (FUNC_4(VAR_19[1]) << 8)|
     (FUNC_4(VAR_19[2]) << 4)|
     (FUNC_4(VAR_19[3])));
   FUNC_14(VAR_6, 0x54, VAR_29);
  }
  else
  {
   VAR_29 &= 0x000003FF;
   VAR_29 |= ((FUNC_5(VAR_19[0]) << 27)|
     (FUNC_6(VAR_19[1]) << 21)|
     (FUNC_6(VAR_19[2]) << 15)|
     (FUNC_5(VAR_19[3]) << 10));
   FUNC_14(VAR_6, 0x54, VAR_29);

   if( VAR_30 == 3 )
   return 0;
  }
  FUNC_1(("[CAL]    ** CALIB_DATA = 0x%08X\n", VAR_29));

  VAR_30--;
 }

 return 1;
}

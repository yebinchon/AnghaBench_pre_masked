
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct hw_data {int iq_rsdl_gain_tx_d2; int iq_rsdl_phase_tx_d2; int revision; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int*,int*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct hw_data*,int,int*) ;
 int FUNC_13 (struct hw_data*,int,int) ;

u8 FUNC_14(struct hw_data *VAR_6,
         s32 VAR_7,
         s32 VAR_8)
{
 u32 VAR_9;
 s32 VAR_10;
 s32 VAR_11;
 s32 VAR_12;
 s32 VAR_13;
 s32 VAR_14;
 u32 VAR_15;
 s32 VAR_16;
 s32 VAR_17;
 s32 VAR_18[4];
 s32 VAR_19[4];
 s32 VAR_20[4];
 s32 VAR_21, VAR_22;
 s32 VAR_23, VAR_24;
 s32 VAR_25, VAR_26;
 s32 VAR_27;
 s32 VAR_28, VAR_29;
 u32 VAR_30;
 u16 VAR_31;
 s32 VAR_32,VAR_33;
 u8 VAR_34;
 int VAR_35;

 FUNC_0(("[CAL] -> _tx_iq_calibration_loop()\n"));
 FUNC_0(("[CAL]    ** a_2_threshold = %d\n", VAR_7));
 FUNC_0(("[CAL]    ** b_2_threshold = %d\n", VAR_8));

 VAR_34 = 0;

 FUNC_12(VAR_6, VAR_5, &VAR_9);
 FUNC_0(("[CAL]    MODE_CTRL (read) = 0x%08X\n", VAR_9));

 VAR_31 = VAR_0;

 while (VAR_31 > 0)
 {
  FUNC_0(("[CAL] [%d.] <_tx_iq_calibration_loop>\n", (VAR_0-VAR_31+1)));

  VAR_32=0;
  VAR_33=0;
  if( !FUNC_13(VAR_6, 0x3C, 0x00) )
   return 0;
  for(VAR_35=0;VAR_35<10;VAR_35++)
  {


   VAR_9 &= ~(VAR_3|VAR_2);
   VAR_9 &= ~VAR_2;
   VAR_9 |= (VAR_1|0x02);
   VAR_9 |= (VAR_1|0x02|2<<2);
   FUNC_13(VAR_6, VAR_5, VAR_9);
   FUNC_0(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_9));


   FUNC_12(VAR_6, VAR_4, &VAR_30);
   FUNC_0(("[CAL]    CALIB_READ1 = 0x%08X\n", VAR_30));

   VAR_11 = FUNC_2(VAR_30 & 0x00001FFF);
   VAR_12 = FUNC_2((VAR_30 & 0x03FFE000) >> 13);
   FUNC_0(("[CAL]    ** iqcal_tone_i0=%d, iqcal_tone_q0=%d\n",
       VAR_11, VAR_12));

   VAR_15 = VAR_11*VAR_11 +
   VAR_12*VAR_12;
   VAR_10 = (s32) FUNC_10(VAR_15);
   FUNC_0(("[CAL]    ** iq_mag_0_tx=%d\n", VAR_10));


   VAR_9 &= ~VAR_1;
   FUNC_13(VAR_6, VAR_5, VAR_9);
   FUNC_0(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_9));




   FUNC_12(VAR_6, VAR_5, &VAR_9);
   VAR_9 &= ~VAR_2;
   VAR_9 |= (VAR_1|0x03);
   FUNC_13(VAR_6, VAR_5, VAR_9);
   FUNC_0(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_9));


   FUNC_12(VAR_6, VAR_4, &VAR_30);
   FUNC_0(("[CAL]    CALIB_READ1 = 0x%08X\n", VAR_30));

   VAR_13 = FUNC_2(VAR_30 & 0x00001FFF);
   VAR_14 = FUNC_2((VAR_30 & 0x03FFE000) >> 13);
   FUNC_0(("[CAL]    ** iqcal_tone_i = %d, iqcal_tone_q = %d\n",
   VAR_13, VAR_14));
   if( VAR_35 == 0)
   {
    continue;
   }
   else
   {
    VAR_32=( VAR_32*(VAR_35-1) +VAR_13)/VAR_35;
    VAR_33=( VAR_33*(VAR_35-1) +VAR_14)/VAR_35;
   }
  }

  VAR_13 = VAR_32;
  VAR_14 = VAR_33;


  VAR_16 = (VAR_13 * VAR_11 +
       VAR_14 * VAR_12) / 1024;
  VAR_17 = (VAR_13 * VAR_12 * (-1) +
       VAR_14 * VAR_11) / 1024;
  FUNC_0(("[CAL]    ** rot_i_b = %d, rot_q_b = %d\n",
       VAR_16, VAR_17));


  VAR_27 = ((VAR_10 * VAR_10 * 2)/1024 - VAR_16) * 2;

  if (VAR_27 == 0)
  {
   FUNC_0(("[CAL] ** <_tx_iq_calibration_loop> ERROR *******\n"));
   FUNC_0(("[CAL] ** divisor=0 to calculate EPS and THETA !!\n"));
   FUNC_0(("[CAL] ******************************************\n"));
   break;
  }

  VAR_21 = (VAR_16 * 32768) / VAR_27;
  VAR_22 = (VAR_17 * (-32768)) / VAR_27;
  FUNC_0(("[CAL]    ***** EPSILON/2 = %d\n", VAR_21));
  FUNC_0(("[CAL]    ***** THETA/2   = %d\n", VAR_22));

  VAR_6->iq_rsdl_gain_tx_d2 = VAR_21;
  VAR_6->iq_rsdl_phase_tx_d2 = VAR_22;



  if ((FUNC_11(VAR_21) < VAR_7) && (FUNC_11(VAR_22) < VAR_8))
  {
   VAR_34++;

   FUNC_0(("[CAL] ** <_tx_iq_calibration_loop> *************\n"));
   FUNC_0(("[CAL] ** VERIFY OK # %d !!\n", VAR_34));
   FUNC_0(("[CAL] ******************************************\n"));

   if (VAR_34 > 2)
   {
    FUNC_0(("[CAL] ** <_tx_iq_calibration_loop> *********\n"));
    FUNC_0(("[CAL] ** TX_IQ_CALIBRATION (EPS,THETA) OK !!\n"));
    FUNC_0(("[CAL] **************************************\n"));
    return 0;
   }

   continue;
  }
  else
  {
   VAR_34 = 0;
  }

  FUNC_9(VAR_22, &VAR_23, &VAR_25);
  FUNC_9(VAR_22*2, &VAR_24, &VAR_26);
  FUNC_0(("[CAL]    ** sin(b/2)=%d, cos(b/2)=%d\n", VAR_23, VAR_25));
  FUNC_0(("[CAL]    ** sin(b)=%d, cos(b)=%d\n", VAR_24, VAR_26));

  if (VAR_26 == 0)
  {
   FUNC_0(("[CAL] ** <_tx_iq_calibration_loop> ERROR *******\n"));
   FUNC_0(("[CAL] ** cos(b)=0 !!\n"));
   FUNC_0(("[CAL] ******************************************\n"));
   break;
  }


  VAR_28 = (41943040/VAR_26)*VAR_25;


  if (VAR_6->revision == 0x2002)
  {
   VAR_29 = (41943040/VAR_26)*VAR_23*(-1);
  }
  else
  {
   VAR_29 = (41943040*4/VAR_26)*VAR_23*(-1);
  }

  VAR_18[0] = FUNC_1(VAR_28/(32768+VAR_21));
  VAR_18[1] = FUNC_1(VAR_29/(32768+VAR_21));
  VAR_18[2] = FUNC_1(VAR_29/(32768-VAR_21));
  VAR_18[3] = FUNC_1(VAR_28/(32768-VAR_21));
  FUNC_0(("[CAL]    ** tx_cal_flt_b[0] = %d\n", VAR_18[0]));
  FUNC_0(("[CAL]       tx_cal_flt_b[1] = %d\n", VAR_18[1]));
  FUNC_0(("[CAL]       tx_cal_flt_b[2] = %d\n", VAR_18[2]));
  FUNC_0(("[CAL]       tx_cal_flt_b[3] = %d\n", VAR_18[3]));

  VAR_19[2] = VAR_18[2];
  VAR_19[2] = VAR_19[2] +3;
  VAR_19[1] = VAR_19[2];
  VAR_19[3] = VAR_18[3] - 128;
  VAR_19[0] = -VAR_19[3]+1;

  FUNC_0(("[CAL]       tx_cal[0] = %d\n", VAR_19[0]));
  FUNC_0(("[CAL]       tx_cal[1] = %d\n", VAR_19[1]));
  FUNC_0(("[CAL]       tx_cal[2] = %d\n", VAR_19[2]));
  FUNC_0(("[CAL]       tx_cal[3] = %d\n", VAR_19[3]));
  if (VAR_6->revision == 0x2002)
  {
   FUNC_12(VAR_6, 0x54, &VAR_30);
   FUNC_0(("[CAL]    ** 0x54 = 0x%08X\n", VAR_30));
   VAR_20[0] = FUNC_6((VAR_30 & 0xF0000000) >> 28);
   VAR_20[1] = FUNC_6((VAR_30 & 0x0F000000) >> 24);
   VAR_20[2] = FUNC_6((VAR_30 & 0x00F00000) >> 20);
   VAR_20[3] = FUNC_6((VAR_30 & 0x000F0000) >> 16);
  }
  else
  {
   FUNC_12(VAR_6, 0x3C, &VAR_30);
   FUNC_0(("[CAL]    ** 0x3C = 0x%08X\n", VAR_30));
   VAR_20[0] = FUNC_7((VAR_30 & 0xF8000000) >> 27);
   VAR_20[1] = FUNC_8((VAR_30 & 0x07E00000) >> 21);
   VAR_20[2] = FUNC_8((VAR_30 & 0x001F8000) >> 15);
   VAR_20[3] = FUNC_7((VAR_30 & 0x00007C00) >> 10);

  }

  FUNC_0(("[CAL]    ** tx_cal_reg[0] = %d\n", VAR_20[0]));
  FUNC_0(("[CAL]       tx_cal_reg[1] = %d\n", VAR_20[1]));
  FUNC_0(("[CAL]       tx_cal_reg[2] = %d\n", VAR_20[2]));
  FUNC_0(("[CAL]       tx_cal_reg[3] = %d\n", VAR_20[3]));

  if (VAR_6->revision == 0x2002)
  {
   if (((VAR_20[0]==7) || (VAR_20[0]==(-8))) &&
    ((VAR_20[3]==7) || (VAR_20[3]==(-8))))
   {
    FUNC_0(("[CAL] ** <_tx_iq_calibration_loop> *********\n"));
    FUNC_0(("[CAL] ** TX_IQ_CALIBRATION SATUATION !!\n"));
    FUNC_0(("[CAL] **************************************\n"));
    break;
   }
  }
  else
  {
   if (((VAR_20[0]==31) || (VAR_20[0]==(-32))) &&
    ((VAR_20[3]==31) || (VAR_20[3]==(-32))))
   {
    FUNC_0(("[CAL] ** <_tx_iq_calibration_loop> *********\n"));
    FUNC_0(("[CAL] ** TX_IQ_CALIBRATION SATUATION !!\n"));
    FUNC_0(("[CAL] **************************************\n"));
    break;
   }
  }

  VAR_19[0] = VAR_19[0] + VAR_20[0];
  VAR_19[1] = VAR_19[1] + VAR_20[1];
  VAR_19[2] = VAR_19[2] + VAR_20[2];
  VAR_19[3] = VAR_19[3] + VAR_20[3];
  FUNC_0(("[CAL]    ** apply tx_cal[0] = %d\n", VAR_19[0]));
  FUNC_0(("[CAL]       apply tx_cal[1] = %d\n", VAR_19[1]));
  FUNC_0(("[CAL]       apply tx_cal[2] = %d\n", VAR_19[2]));
  FUNC_0(("[CAL]       apply tx_cal[3] = %d\n", VAR_19[3]));

  if (VAR_6->revision == 0x2002)
  {
   VAR_30 &= 0x0000FFFF;
   VAR_30 |= ((FUNC_3(VAR_19[0]) << 28)|
     (FUNC_3(VAR_19[1]) << 24)|
     (FUNC_3(VAR_19[2]) << 20)|
     (FUNC_3(VAR_19[3]) << 16));
   FUNC_13(VAR_6, 0x54, VAR_30);
   FUNC_0(("[CAL]    ** CALIB_DATA = 0x%08X\n", VAR_30));
   return 0;
  }
  else
  {
   VAR_30 &= 0x000003FF;
   VAR_30 |= ((FUNC_4(VAR_19[0]) << 27)|
     (FUNC_5(VAR_19[1]) << 21)|
     (FUNC_5(VAR_19[2]) << 15)|
     (FUNC_4(VAR_19[3]) << 10));
   FUNC_13(VAR_6, 0x3C, VAR_30);
   FUNC_0(("[CAL]    ** TX_IQ_CALIBRATION = 0x%08X\n", VAR_30));
   return 0;
  }


  VAR_9 &= ~VAR_1;
  FUNC_13(VAR_6, VAR_5, VAR_9);
  FUNC_0(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_9));

  VAR_31--;
 }

 return 1;
}

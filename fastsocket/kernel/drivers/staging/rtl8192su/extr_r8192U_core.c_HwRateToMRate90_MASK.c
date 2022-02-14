
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ,char*,int,int) ;

u8 FUNC_1(bool VAR_29, u8 VAR_30)
{
 u8 VAR_31 = 0xff;

 if(!VAR_29) {
  switch(VAR_30) {
   case 153: VAR_31 = VAR_4; break;
   case 151: VAR_31 = VAR_6; break;
   case 147: VAR_31 = VAR_10; break;
   case 156: VAR_31 = VAR_1; break;
   case 146: VAR_31 = VAR_11; break;
   case 145: VAR_31 = VAR_12; break;
   case 155: VAR_31 = VAR_2; break;
   case 154: VAR_31 = VAR_3; break;
   case 152: VAR_31 = VAR_5; break;
   case 150: VAR_31 = VAR_7; break;
   case 149: VAR_31 = VAR_8; break;
   case 148: VAR_31 = VAR_9; break;

   default:
    VAR_31 = 0xff;
    FUNC_0(VAR_0, "HwRateToMRate90(): Non supported Rate [%x], bIsHT = %d!!!\n", VAR_30, VAR_29);
    break;
  }

 } else {
  switch(VAR_30) {
   case 144: VAR_31 = VAR_13; break;
   case 143: VAR_31 = VAR_14; break;
   case 136: VAR_31 = VAR_21; break;
   case 135: VAR_31 = VAR_22; break;
   case 133: VAR_31 = VAR_23; break;
   case 132: VAR_31 = VAR_24; break;
   case 131: VAR_31 = VAR_25; break;
   case 130: VAR_31 = VAR_26; break;
   case 129: VAR_31 = VAR_27; break;
   case 128: VAR_31 = VAR_28; break;
   case 142: VAR_31 = VAR_15; break;
   case 141: VAR_31 = VAR_16; break;
   case 140: VAR_31 = VAR_17; break;
   case 139: VAR_31 = VAR_18; break;
   case 138: VAR_31 = VAR_19; break;
   case 137: VAR_31 = VAR_20; break;
   case 134: VAR_31 = (0x80|0x20); break;

   default:
    VAR_31 = 0xff;
    FUNC_0(VAR_0, "HwRateToMRate90(): Non supported Rate [%x], bIsHT = %d!!!\n",VAR_30, VAR_29);
    break;
  }
 }

 return VAR_31;
}

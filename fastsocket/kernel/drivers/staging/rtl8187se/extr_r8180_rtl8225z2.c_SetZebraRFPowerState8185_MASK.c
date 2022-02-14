
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int SetRFPowerStateInProgress; int rf_chip; int RFProgType; int eRFPowerState; int txringcount; int TxPollingTimes; } ;
struct net_device {int dummy; } ;
typedef int RT_RF_POWER_STATE ;


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
 int FUNC_0 (struct net_device*,int,int) ;





 int FUNC_1 (struct net_device*,int) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,int,int) ;
 int FUNC_8 (struct net_device*,int ,int ) ;
 int FUNC_9 (struct net_device*,int,int) ;
 int FUNC_10 (struct net_device*,int,int) ;

bool FUNC_11(struct net_device *VAR_13,
         RT_RF_POWER_STATE VAR_14)
{
 struct r8180_priv *VAR_15 = FUNC_2(VAR_13);
 u8 VAR_16, VAR_17;
 bool VAR_18 = 1, VAR_19 = 1;
 u8 VAR_20;
 int VAR_21;
 bool VAR_22 = 1;
 u8 VAR_23;

 if (VAR_15->SetRFPowerStateInProgress == 1)
  return 0;

 VAR_15->SetRFPowerStateInProgress = 1;

 VAR_16 = FUNC_5(VAR_13, VAR_9);
 FUNC_7(VAR_13, VAR_9, (VAR_16 | 0xC0));

 VAR_17 = FUNC_5(VAR_13, VAR_6);
 FUNC_7(VAR_13, VAR_6, (VAR_17 | VAR_7));

 switch (VAR_15->rf_chip) {
 case 132:
  switch (VAR_14) {
  case 129:
   FUNC_0(VAR_13,0x4,0x9FF);

   FUNC_8(VAR_13, VAR_0, VAR_3);
   FUNC_8(VAR_13, VAR_1, VAR_2);

   FUNC_7(VAR_13, VAR_8, VAR_15->RFProgType);


   VAR_20 = FUNC_5(VAR_13, 0x24E);
   FUNC_7(VAR_13, 0x24E, (VAR_20 & (~(VAR_4 | VAR_5))));
   break;
  case 128:
   break;
  case 130:
   break;
  default:
   VAR_22 = 0;
   break;
  }
  break;
 case 131:
  switch (VAR_14) {
  case 129:
   FUNC_9(VAR_13, 0x37C, 0x00EC);


   FUNC_7(VAR_13, 0x54, 0x00);
   FUNC_7(VAR_13, 0x62, 0x00);


   FUNC_0(VAR_13, 0x0, 0x009f); FUNC_6(500);
   FUNC_0(VAR_13, 0x4, 0x0972); FUNC_6(500);


   FUNC_0(VAR_13, 0x0, 0x009f); FUNC_6(500);
   FUNC_0(VAR_13, 0x4, 0x0972); FUNC_6(500);


   FUNC_10(VAR_13,0x10,0x40);
   FUNC_10(VAR_13,0x12,0x40);


   FUNC_7(VAR_13, VAR_8, VAR_15->RFProgType);

   VAR_20 = FUNC_5(VAR_13, 0x24E);
   FUNC_7(VAR_13, 0x24E, (VAR_20 & (~(VAR_4 | VAR_5))));
   break;
  case 128:
   for (VAR_23 = 0, VAR_21 = 0; VAR_23 < 6;) {
    if (FUNC_1(VAR_13, VAR_23) == VAR_15->txringcount) {
     VAR_23++;
     continue;
    } else {
     VAR_15->TxPollingTimes ++;
     if (VAR_15->TxPollingTimes >= VAR_10) {
      VAR_18 = 0;
      break;
     } else
      FUNC_6(10);
    }
   }

   if (VAR_18) {

    FUNC_10(VAR_13, 0x10, 0x00);
    FUNC_10(VAR_13, 0x12, 0x00);


    FUNC_0(VAR_13, 0x4, 0x0000);
    FUNC_0(VAR_13, 0x0, 0x0000);


    FUNC_7(VAR_13, 0x62, 0xff);
    FUNC_7(VAR_13, 0x54, 0xec);

    FUNC_3(1);

    {
     int VAR_24 = 0;
     while (1) {
      u8 VAR_25 = FUNC_5(VAR_13, 0x24f);

      if ((VAR_25 == 0x01) || (VAR_25 == 0x09)) {
       VAR_19 = 1;
       break;
      } else {
       FUNC_6(10);
       VAR_24++;
       VAR_15->TxPollingTimes++;

       if (VAR_15->TxPollingTimes >= VAR_10) {
        VAR_19 = 0;
        break;
       } else
        FUNC_6(10);
      }
     }
    }

    if (VAR_19) {

     VAR_20 = FUNC_5(VAR_13, 0x24E);
     FUNC_7(VAR_13, 0x24E, (VAR_20 | VAR_4 | VAR_5));


     FUNC_7(VAR_13, 0x54, 0xFC);
     FUNC_9(VAR_13, 0x37C, 0x00FC);
    }
   }
   break;
  case 130:
   for (VAR_23 = 0, VAR_21 = 0; VAR_23 < 6;) {
    if (FUNC_1(VAR_13, VAR_23) == VAR_15->txringcount) {
     VAR_23++;
     continue;
    } else {
     FUNC_6(10);
     VAR_21++;
    }

    if (VAR_21 >= VAR_11)
     break;
   }


   FUNC_10(VAR_13, 0x10, 0x00);
   FUNC_10(VAR_13, 0x12, 0x00);


   FUNC_0(VAR_13, 0x4, 0x0000);
   FUNC_0(VAR_13, 0x0, 0x0000);


   FUNC_7(VAR_13, 0x62, 0xff);
   FUNC_7(VAR_13, 0x54, 0xec);

   FUNC_3(1);

   {
    int VAR_26 = 0;

    while (1)
    {
     u8 VAR_27 = FUNC_5(VAR_13, 0x24f);

     if ((VAR_27 == 0x01) || (VAR_27 == 0x09)) {
      VAR_19 = 1;
      break;
     } else {
      VAR_19 = 0;
      FUNC_6(10);
      VAR_26++;
     }

     if (VAR_26 > VAR_12)
      break;
    }
   }

   if (VAR_19) {

    VAR_20 = FUNC_5(VAR_13, 0x24E);
    FUNC_7(VAR_13, 0x24E, (VAR_20 | VAR_4 | VAR_5));


    FUNC_7(VAR_13, 0x54, 0xFC);
    FUNC_9(VAR_13, 0x37C, 0x00FC);
   }
   break;
  default:
   VAR_22 = 0;
   FUNC_4("SetZebraRFPowerState8185(): unknow state to set: 0x%X!!!\n", VAR_14);
   break;
  }
  break;
 }

 VAR_17 &= ~(VAR_7);
 FUNC_7(VAR_13, VAR_6, VAR_17);

 VAR_16 &= ~(0xC0);
 FUNC_7(VAR_13, VAR_9, VAR_16);

 if (VAR_22 && VAR_18)
  VAR_15->eRFPowerState = VAR_14;

 VAR_15->SetRFPowerStateInProgress = 0;

 return VAR_22 && VAR_18;
}

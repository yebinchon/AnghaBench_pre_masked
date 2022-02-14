
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {int SetRFPowerStateInProgress; int rf_chip; TYPE_1__* ieee80211; int bHwRfOffAction; int rf_type; int * txvopringhead; int * txvopringtail; int * txvipringhead; int * txvipringtail; int * txbepringhead; int * txbepringtail; int * txbkpringhead; int * txbkpringtail; int * txmapringhead; int * txmapringtail; } ;
struct net_device {int dummy; } ;
typedef int * ptx_ring ;
struct TYPE_10__ {int (* LedControlHandler ) (TYPE_4__*,int ) ;} ;
struct TYPE_12__ {TYPE_2__ HalFunc; } ;
struct TYPE_11__ {int bLeisurePs; } ;
struct TYPE_9__ {int eRFPowerState; int state; int RfOffReason; int PowerSaveControl; } ;
typedef int RT_RF_POWER_STATE ;
typedef TYPE_3__* PRT_POWER_SAVE_CONTROL ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
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
 int FUNC_0 (int ,char*,...) ;





 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ,int,int) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct net_device*,int ,int) ;

__attribute__((used)) static bool
FUNC_11(
 struct net_device* VAR_25,
 RT_RF_POWER_STATE VAR_26
 )
{
 struct r8192_priv *VAR_27 = FUNC_1(VAR_25);
 PRT_POWER_SAVE_CONTROL VAR_28 = (PRT_POWER_SAVE_CONTROL)(&(VAR_27->ieee80211->PowerSaveControl));
 bool VAR_29 = 1;

 u8 VAR_30 = 0, VAR_31 = 0;
 ptx_ring VAR_32=((void*)0),VAR_33=((void*)0);

 if(VAR_27->SetRFPowerStateInProgress == 1)
  return 0;
 FUNC_0(VAR_6, "===========> SetRFPowerState8190()!\n");
 VAR_27->SetRFPowerStateInProgress = 1;

 switch(VAR_27->rf_chip)
 {
  case 133:
  switch( VAR_26 )
  {
   case 129:
    FUNC_0(VAR_6, "SetRFPowerState8190() eRfOn !\n");
    FUNC_10(VAR_25, VAR_0, 0x37);
    FUNC_10(VAR_25, VAR_13, 0x17);
    FUNC_2(1);


    VAR_27->bHwRfOffAction = 0;



    FUNC_10(VAR_25, VAR_2, (FUNC_3(VAR_25, VAR_2)|VAR_3));



    FUNC_4(VAR_25, VAR_18, 0x20000000, 0x1);

     FUNC_4(VAR_25, VAR_17, 0x60, 0x3);

    FUNC_4(VAR_25, VAR_17, 0x98, 0x13);

    FUNC_4(VAR_25, VAR_19, 0xf03, 0xf03);







     FUNC_4(VAR_25, VAR_20, VAR_4, 0x1);
    FUNC_4(VAR_25, VAR_21, VAR_4, 0x1);

      break;





   case 128:
   case 130:
    FUNC_0(VAR_6, "SetRFPowerState8190() eRfOff/Sleep !\n");
    if (VAR_28->bLeisurePs)
    {
     for(VAR_31 = 0, VAR_30 = 0; VAR_31 < VAR_12; )
     {
      switch(VAR_31) {
       case 134:
        VAR_33=VAR_27->txmapringtail;
        VAR_32=VAR_27->txmapringhead;
        break;

       case 135:
        VAR_33=VAR_27->txbkpringtail;
        VAR_32=VAR_27->txbkpringhead;
        break;

       case 136:
        VAR_33=VAR_27->txbepringtail;
        VAR_32=VAR_27->txbepringhead;
        break;

       case 132:
        VAR_33=VAR_27->txvipringtail;
        VAR_32=VAR_27->txvipringhead;
        break;

       case 131:
        VAR_33=VAR_27->txvopringtail;
        VAR_32=VAR_27->txvopringhead;
        break;

       default:
        VAR_33=VAR_32=((void*)0);
        break;
      }
      if(VAR_33 == VAR_32)
      {

       VAR_31++;
       continue;
      }
      else
      {
       FUNC_0(VAR_6, "eRf Off/Sleep: %d times BusyQueue[%d] !=0 before doze!\n", (VAR_30+1), VAR_31);
       FUNC_9(10);
       VAR_30++;
      }

      if(VAR_30 >= VAR_11)
      {
       FUNC_0(VAR_6, "\n\n\n TimeOut!! SetRFPowerState8190(): eRfOff: %d times BusyQueue[%d] != 0 !!!\n\n\n", VAR_11, VAR_31);
       break;
      }
     }
    }
    FUNC_4(VAR_25, VAR_20, VAR_4, 0x0);
     FUNC_4(VAR_25, VAR_21, VAR_4, 0x0);



     FUNC_4(VAR_25, VAR_19, 0xf03, 0x0);


     FUNC_4(VAR_25, VAR_17, 0x98, 0x0);





     FUNC_4(VAR_25, VAR_17, 0x60, 0x0);

     FUNC_4(VAR_25, VAR_18, 0x20000000, 0x0);






     FUNC_10(VAR_25, VAR_2, (FUNC_3(VAR_25, VAR_2)|VAR_3));

     FUNC_10(VAR_25, VAR_13, 0x0);

     FUNC_10(VAR_25, VAR_0, 0x07);
    VAR_27->bHwRfOffAction = 0;


     break;

   default:
     VAR_29 = 0;
     FUNC_0(VAR_5, "SetRFPowerState8190(): unknow state to set: 0x%X!!!\n", VAR_26);
     break;
  }

  break;

  default:
   FUNC_0(VAR_5, "SetRFPowerState8190(): Unknown RF type\n");
   break;
 }

 if(VAR_29)
 {

  VAR_27->ieee80211->eRFPowerState = VAR_26;

  switch(VAR_27->rf_chip )
  {
   case 133:
   switch(VAR_27->ieee80211->eRFPowerState)
   {
    case 130:



     if(VAR_27->ieee80211->RfOffReason==VAR_16 )
     {



     }
     else
     {




     }
     break;

    case 129:


     if( VAR_27->ieee80211->state == VAR_7)
     {



     }
     else
     {




     }
     break;

    default:

     break;
   }

   break;

   default:
    FUNC_0(VAR_5, "SetRFPowerState8190(): Unknown RF type\n");
    break;
  }
 }

 VAR_27->SetRFPowerStateInProgress = 0;
 FUNC_0(VAR_6, "<=========== SetRFPowerState8190() bResult = %d!\n", VAR_29);
 return VAR_29;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {int CurrentFwCmdIO; int SetFwCmdInProgress; int rf_type; TYPE_2__* ieee80211; int up; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pHTInfo; } ;
struct TYPE_3__ {int IOTAction; int IOTRaFunc; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
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
 int FUNC_1 (int ,char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int ,int,int) ;
 int FUNC_5 (struct net_device*,int ,int) ;

void FUNC_6(struct net_device* VAR_28)
{

 u32 VAR_29;
 static u32 VAR_30;
 struct r8192_priv *VAR_31 = FUNC_2(VAR_28);
 if(!VAR_31->up)
 {
  FUNC_1(VAR_0, "SetFwCmdIOTimerCallback(): driver is going to unload\n");
  return;
 }

 FUNC_1(VAR_0, "--->SetFwCmdIOTimerCallback(): Cmd(%#x), SetFwCmdInProgress(%d)\n", VAR_31->CurrentFwCmdIO, VAR_31->SetFwCmdInProgress);

 switch(VAR_31->CurrentFwCmdIO)
 {
  case 137:
   if((VAR_31->ieee80211->pHTInfo->IOTAction & VAR_14)==0)
    FUNC_5(VAR_28, VAR_18, VAR_6);
   break;

  case 138:
   FUNC_5(VAR_28, VAR_18, VAR_5);
   break;

  case 139:
   FUNC_5(VAR_28, VAR_18, VAR_4);
   break;

  case 140:
   FUNC_5(VAR_28, VAR_18, VAR_3);
   break;






  case 130:
   FUNC_1(VAR_0, "[FW CMD] Set HIGHPWR enable and DIG resume!!\n");
   if((VAR_31->ieee80211->pHTInfo->IOTAction & VAR_14)==0)
   {
    FUNC_5(VAR_28, VAR_18, VAR_6);
    FUNC_0(VAR_28);
   }
   FUNC_5(VAR_28, VAR_18, VAR_4);
   break;

  case 135:
   FUNC_1(VAR_0, "[FW CMD] Set HIGHPWR disable and DIG halt!!\n");
   FUNC_5(VAR_28, VAR_18, VAR_5);
   FUNC_0(VAR_28);
   FUNC_5(VAR_28, VAR_18, VAR_3);
   break;






  case 142:
   FUNC_1(VAR_0, "[FW CMD] Set DIG disable!!\n");
   FUNC_5(VAR_28, VAR_18, VAR_1);
   break;

  case 141:
   FUNC_1(VAR_0, "[FW CMD] Set DIG enable!!\n");
   FUNC_5(VAR_28, VAR_18, VAR_2);
   break;

  case 131:
   FUNC_5(VAR_28, VAR_18, VAR_11);
   break;

  case 134:
   FUNC_5(VAR_28, VAR_18, VAR_8);
   break;

  case 132:
   FUNC_1(VAR_0, "[FW CMD] Set RA refresh!! N\n");
   if(VAR_31->ieee80211->pHTInfo->IOTRaFunc & VAR_15)
    VAR_29 = VAR_10;
   else
    VAR_29 = VAR_10 | (VAR_31->ieee80211->pHTInfo->IOTRaFunc << 8);
   FUNC_5(VAR_28, VAR_18, VAR_29);
   break;
  case 133:
   FUNC_1(VAR_0, "[FW CMD] Set RA refresh!! B/G\n");
   FUNC_5(VAR_28, VAR_18, VAR_10);
   FUNC_0(VAR_28);
   FUNC_5(VAR_28, VAR_18, VAR_9);
   break;

  case 136:
   FUNC_5(VAR_28, VAR_18, VAR_7);
   break;

  case 128:
   FUNC_5(VAR_28, VAR_18, VAR_13);
   break;

  case 129:
   FUNC_5(VAR_28, VAR_18, VAR_12);
   break;

  default:
   FUNC_1(VAR_0,"Unknown FW Cmd IO(%#x)\n", VAR_31->CurrentFwCmdIO);
   break;
 }

 FUNC_0(VAR_28);

 switch(VAR_31->CurrentFwCmdIO)
 {
  case 138:

   {

    FUNC_4(VAR_28, VAR_25, VAR_19, 0x17);
    FUNC_4(VAR_28, VAR_26, VAR_19, 0x17);

    FUNC_4(VAR_28, VAR_22, VAR_20, 0x40);

    FUNC_4(VAR_28, VAR_24, VAR_20, 0x1);
    VAR_30 = FUNC_3(VAR_28, VAR_23,VAR_21);
    FUNC_4(VAR_28, VAR_23, 0xf, 0xf);
    FUNC_4(VAR_28, VAR_27, 0xf, 0x0);
   }
   break;

  case 137:

   {
    FUNC_4(VAR_28, VAR_25, VAR_19, 0x36);
    FUNC_4(VAR_28, VAR_26, VAR_19, 0x36);


    FUNC_4(VAR_28, VAR_22, VAR_20, 0x83);

    FUNC_4(VAR_28, VAR_24, VAR_20, 0x0);


    if(VAR_30 != 0){
    FUNC_4(VAR_28, VAR_23, VAR_21, VAR_30);
    }

    if(VAR_31->rf_type == VAR_16 || VAR_31->rf_type == VAR_17)
     FUNC_4(VAR_28, VAR_27, 0xf, 0x3);
    else
     FUNC_4(VAR_28, VAR_27, 0xf, 0x1);
   }
   break;
 }

 VAR_31->SetFwCmdInProgress = 0;
 FUNC_1(VAR_0, "<---SetFwCmdIOWorkItemCallback()\n");

}

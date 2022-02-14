
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_3__ {size_t SlotNum; scalar_t__* RxFrameNum; int NumRxOkInPeriod; int NumTxOkInPeriod; int bBusyTraffic; int SlotIndex; } ;
struct r8180_priv {scalar_t__ eRFPowerState; scalar_t__ PowerProfile; int bLeisurePs; TYPE_2__* ieee80211; TYPE_1__ link_detect; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int actscanning; scalar_t__ iw_mode; scalar_t__ state; int beinretry; scalar_t__ NumRxDataInPeriod; scalar_t__ NumRxBcnInPeriod; int associate_procedure_wq; int wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct r8180_priv*) ;
 int FUNC_2 (struct r8180_priv*) ;
 int FUNC_3 (struct r8180_priv*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct r8180_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct net_device *VAR_8)
{
 struct r8180_priv *VAR_9 = FUNC_4(VAR_8);
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 u32 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 if(VAR_9->ieee80211->actscanning == 0){
  if((VAR_9->ieee80211->iw_mode != VAR_3) && (VAR_9->ieee80211->state == VAR_2) && (VAR_9->ieee80211->beinretry == 0) && (VAR_9->eRFPowerState == VAR_7)){
   FUNC_0(VAR_8);
  }
 }

 if((VAR_9->ieee80211->state == VAR_1) && (VAR_9->ieee80211->iw_mode == VAR_4)){
  VAR_13 = (VAR_9->link_detect.SlotIndex++) % VAR_9->link_detect.SlotNum;
  VAR_9->link_detect.RxFrameNum[VAR_13] = VAR_9->ieee80211->NumRxDataInPeriod + VAR_9->ieee80211->NumRxBcnInPeriod;
  for( VAR_14=0; VAR_14<VAR_9->link_detect.SlotNum; VAR_14++ )
   VAR_12+= VAR_9->link_detect.RxFrameNum[VAR_14];

  if(VAR_12 == 0){
   VAR_9->ieee80211->state = VAR_0;
   FUNC_5(VAR_9->ieee80211->wq, &VAR_9->ieee80211->associate_procedure_wq);
  }
 }


 FUNC_3(VAR_9);
 VAR_9->link_detect.bBusyTraffic = VAR_11;
 VAR_9->link_detect.NumRxOkInPeriod = 0;
 VAR_9->link_detect.NumTxOkInPeriod = 0;
 VAR_9->ieee80211->NumRxDataInPeriod = 0;
 VAR_9->ieee80211->NumRxBcnInPeriod = 0;
}

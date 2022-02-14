
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct ieee80211_device {TYPE_1__ current_network; int dev; int (* GetHalfNmodeSupportByAPsHandler ) (int ) ;TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {int bRegBW40MHz; int bSwBwInProgress; int bCurBW40MHz; scalar_t__ CurSTAExtChnlOffset; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;
typedef scalar_t__ HT_EXTCHNL_OFFSET ;
typedef scalar_t__ HT_CHANNEL_WIDTH ;


 int FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_device* VAR_4, HT_CHANNEL_WIDTH VAR_5, HT_EXTCHNL_OFFSET VAR_6)
{
 PRT_HIGH_THROUGHPUT VAR_7 = VAR_4->pHTInfo;


 if(VAR_7->bRegBW40MHz == 0)
  return;
 if(VAR_7->bSwBwInProgress) {

  return;
 }

 if(VAR_5==VAR_0 && (!VAR_4->GetHalfNmodeSupportByAPsHandler(VAR_4->dev)))
  {

  if(VAR_4->current_network.channel<2 && VAR_6==VAR_1)
   VAR_6 = VAR_2;
  if(VAR_6==VAR_3 || VAR_6==VAR_1) {
   VAR_7->bCurBW40MHz = 1;
   VAR_7->CurSTAExtChnlOffset = VAR_6;
  } else {
   VAR_7->bCurBW40MHz = 0;
   VAR_7->CurSTAExtChnlOffset = VAR_2;
  }
 } else {
  VAR_7->bCurBW40MHz = 0;
  VAR_7->CurSTAExtChnlOffset = VAR_2;
 }

 VAR_7->bSwBwInProgress = 1;





 FUNC_0(VAR_4);


}

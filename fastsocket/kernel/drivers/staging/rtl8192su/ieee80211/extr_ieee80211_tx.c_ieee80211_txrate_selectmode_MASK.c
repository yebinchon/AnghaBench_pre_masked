
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_device {scalar_t__ iw_mode; scalar_t__ bTxUseDriverAssingedRate; scalar_t__ bTxDisableRateFallBack; } ;
struct TYPE_5__ {int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; scalar_t__ RATRIndex; } ;
typedef TYPE_1__ cb_desc ;
struct TYPE_7__ {scalar_t__ ForcedDataRate; } ;
struct TYPE_6__ {int RATRIndex; void* bTxUseDriverAssingedRate; void* bTxDisableRateFallBack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_1(struct ieee80211_device* VAR_6, cb_desc* VAR_7)
{
 if(VAR_6->bTxDisableRateFallBack)
  VAR_7->bTxDisableRateFallBack = 1;

 if(VAR_6->bTxUseDriverAssingedRate)
  VAR_7->bTxUseDriverAssingedRate = 1;
 if(!VAR_7->bTxDisableRateFallBack || !VAR_7->bTxUseDriverAssingedRate)
 {
  if (VAR_6->iw_mode == VAR_1 || VAR_6->iw_mode == VAR_0)
   VAR_7->RATRIndex = 0;
 }
}

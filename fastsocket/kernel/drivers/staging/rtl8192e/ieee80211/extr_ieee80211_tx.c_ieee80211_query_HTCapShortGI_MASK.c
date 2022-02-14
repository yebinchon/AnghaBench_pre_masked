
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_device {TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {int bUseShortGI; } ;
typedef TYPE_1__ cb_desc ;
struct TYPE_5__ {int bCurBW40MHz; scalar_t__ bCurShortGI20MHz; scalar_t__ bCurShortGI40MHz; scalar_t__ bForcedShortGI; int bEnableHT; int bCurrentHTSupport; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;



extern void
FUNC_0(struct ieee80211_device *VAR_0, cb_desc *VAR_1)
{
 PRT_HIGH_THROUGHPUT VAR_2 = VAR_0->pHTInfo;

 VAR_1->bUseShortGI = 0;

 if(!VAR_2->bCurrentHTSupport||!VAR_2->bEnableHT)
  return;

 if(VAR_2->bForcedShortGI)
 {
  VAR_1->bUseShortGI = 1;
  return;
 }

 if((VAR_2->bCurBW40MHz==1) && VAR_2->bCurShortGI40MHz)
  VAR_1->bUseShortGI = 1;
 else if((VAR_2->bCurBW40MHz==0) && VAR_2->bCurShortGI20MHz)
  VAR_1->bUseShortGI = 1;
}

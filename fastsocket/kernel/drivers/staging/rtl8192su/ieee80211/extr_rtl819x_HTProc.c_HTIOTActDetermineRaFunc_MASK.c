
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_device {TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ IOTPeer; int IOTAction; int IOTRaFunc; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct ieee80211_device* VAR_5, bool VAR_6)
{
 PRT_HIGH_THROUGHPUT VAR_7 = VAR_5->pHTInfo;
 VAR_7->IOTRaFunc &= VAR_2;

 if(VAR_7->IOTPeer == VAR_1 && !VAR_6)
  VAR_7->IOTRaFunc |= VAR_3;

 if(VAR_7->IOTAction & VAR_0)
  VAR_7->IOTRaFunc |= VAR_4;

 FUNC_0("!!!!!!!!!!!!!!!!!!!!!!!!!!!IOTRaFunc = %8.8x\n", VAR_7->IOTRaFunc);
}

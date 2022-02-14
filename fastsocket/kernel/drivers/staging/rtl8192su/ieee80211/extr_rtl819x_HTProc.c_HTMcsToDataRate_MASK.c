
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ieee80211_device {TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ bCurShortGI20MHz; scalar_t__ bCurShortGI40MHz; scalar_t__ bCurBW40MHz; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;


 int *** VAR_0 ;

u16 FUNC_0( struct ieee80211_device* VAR_1, u8 VAR_2)
{
 PRT_HIGH_THROUGHPUT VAR_3 = VAR_1->pHTInfo;

 u8 VAR_4 = (VAR_3->bCurBW40MHz)?1:0;
 u8 VAR_5 = (VAR_3->bCurBW40MHz)?
      ((VAR_3->bCurShortGI40MHz)?1:0):
      ((VAR_3->bCurShortGI20MHz)?1:0);
 return VAR_0[VAR_4][VAR_5][(VAR_2&0x7f)];
}

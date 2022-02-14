
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bforced_tx20Mhz; } ;
struct ieee80211_device {TYPE_1__ bandwidth_auto_switch; TYPE_3__* pHTInfo; } ;
struct TYPE_6__ {int bPacketBW; int data_rate; scalar_t__ bBroadcast; scalar_t__ bMulticast; } ;
typedef TYPE_2__ cb_desc ;
struct TYPE_7__ {scalar_t__ bCurTxBW40MHz; scalar_t__ bCurBW40MHz; int bEnableHT; int bCurrentHTSupport; } ;
typedef TYPE_3__* PRT_HIGH_THROUGHPUT ;



void FUNC_0(struct ieee80211_device* VAR_0, cb_desc *VAR_1)
{
 PRT_HIGH_THROUGHPUT VAR_2 = VAR_0->pHTInfo;

 VAR_1->bPacketBW = 0;

 if(!VAR_2->bCurrentHTSupport||!VAR_2->bEnableHT)
  return;

 if(VAR_1->bMulticast || VAR_1->bBroadcast)
  return;

 if((VAR_1->data_rate & 0x80)==0)
  return;

 if(VAR_2->bCurBW40MHz && VAR_2->bCurTxBW40MHz && !VAR_0->bandwidth_auto_switch.bforced_tx20Mhz)
  VAR_1->bPacketBW = 1;
 return;
}

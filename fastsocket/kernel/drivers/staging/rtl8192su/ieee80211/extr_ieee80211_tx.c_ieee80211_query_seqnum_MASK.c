
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int priority; int data; } ;
struct ieee80211_device {int dummy; } ;
struct TYPE_2__ {int TxCurSeq; } ;
typedef TYPE_1__* PTX_TS_RECORD ;
typedef int PTS_COMMON_INFO ;


 int FUNC_0 (struct ieee80211_device*,int *,int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct ieee80211_device*VAR_1, struct sk_buff* VAR_2, u8* VAR_3)
{
 if (FUNC_3(VAR_3) || FUNC_2(VAR_3))
  return;
 if (FUNC_1(VAR_2->data))
 {
  PTX_TS_RECORD VAR_4 = ((void*)0);
  if (!FUNC_0(VAR_1, (PTS_COMMON_INFO*)(&VAR_4), VAR_3, VAR_2->priority, VAR_0, 1))
  {
   return;
  }
  VAR_4->TxCurSeq = (VAR_4->TxCurSeq+1)%4096;
 }
}

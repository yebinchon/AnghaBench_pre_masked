
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u8 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_18__ {int ucTSID; } ;
struct TYPE_19__ {TYPE_1__ field; } ;
struct TYPE_20__ {TYPE_2__ TSInfo; } ;
struct TYPE_21__ {TYPE_3__ f; } ;
struct TYPE_26__ {int Addr; TYPE_4__ TSpec; } ;
struct TYPE_24__ {int SeqNum; } ;
struct TYPE_25__ {TYPE_7__ field; } ;
struct TYPE_22__ {int BAPolicy; int BufferSize; int TID; scalar_t__ AMSDU_Support; } ;
struct TYPE_23__ {TYPE_5__ field; } ;
struct TYPE_17__ {int bValid; TYPE_8__ BaStartSeqCtrl; scalar_t__ BaTimeoutValue; TYPE_6__ BaParamSet; int DialogToken; } ;
struct TYPE_16__ {int TxCurSeq; TYPE_9__ TsCommonInfo; TYPE_11__ TxPendingBARecord; } ;
typedef TYPE_10__* PTX_TS_RECORD ;
typedef TYPE_11__* PBA_RECORD ;


 int FUNC_0 (struct ieee80211_device*,TYPE_11__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_device*,TYPE_11__*) ;
 int FUNC_2 (struct ieee80211_device*,int ,TYPE_11__*) ;

void
FUNC_3(
 struct ieee80211_device* VAR_1,
 PTX_TS_RECORD VAR_2,
 u8 VAR_3,
 u8 VAR_4
 )
{
 PBA_RECORD VAR_5 = &VAR_2->TxPendingBARecord;

 if(VAR_5->bValid==1 && VAR_4==0)
  return;


 FUNC_1(VAR_1, VAR_5);

 VAR_5->DialogToken++;
 VAR_5->BaParamSet.field.AMSDU_Support = 0;
 VAR_5->BaParamSet.field.BAPolicy = VAR_3;
 VAR_5->BaParamSet.field.TID = VAR_2->TsCommonInfo.TSpec.f.TSInfo.field.ucTSID;

 VAR_5->BaParamSet.field.BufferSize = 32;
 VAR_5->BaTimeoutValue = 0;
 VAR_5->BaStartSeqCtrl.field.SeqNum = (VAR_2->TxCurSeq + 3) % 4096;

 FUNC_0(VAR_1, VAR_5, VAR_0);

 FUNC_2(VAR_1, VAR_2->TsCommonInfo.Addr, VAR_5);
}

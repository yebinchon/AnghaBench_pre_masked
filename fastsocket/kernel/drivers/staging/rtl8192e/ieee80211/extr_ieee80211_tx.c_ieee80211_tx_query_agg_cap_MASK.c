
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct sk_buff {int priority; scalar_t__ data; } ;
struct ieee80211_hdr_1addr {int addr1; } ;
struct ieee80211_device {scalar_t__ pairwise_key_type; scalar_t__ iw_mode; scalar_t__ wpa_ie_len; int dev; int (* GetNmodeSupportBySecCfg ) (int ) ;TYPE_7__* pHTInfo; } ;
struct TYPE_17__ {int bAMPDUEnable; int ampdu_factor; int ampdu_density; } ;
typedef TYPE_5__ cb_desc ;
struct TYPE_21__ {int PacketLength; } ;
struct TYPE_13__ {int (* GetNmodeSupportBySecCfgHandler ) (TYPE_8__*) ;} ;
struct TYPE_20__ {TYPE_1__ HalFunc; } ;
struct TYPE_19__ {int ForcedAMPDUMode; int ForcedAMPDUFactor; int ForcedMPDUDensity; int CurrentMPDUDensity; int CurrentAMPDUFactor; scalar_t__ bCurrentAMPDUEnable; int bEnableHT; int bCurrentHTSupport; } ;
struct TYPE_14__ {int SeqNum; } ;
struct TYPE_15__ {TYPE_2__ field; } ;
struct TYPE_16__ {int bValid; TYPE_3__ BaStartSeqCtrl; } ;
struct TYPE_18__ {int bUsingBa; int TxCurSeq; TYPE_4__ TxAdmittedBARecord; } ;
typedef TYPE_6__* PTX_TS_RECORD ;
typedef int PTS_COMMON_INFO ;
typedef TYPE_7__* PRT_HIGH_THROUGHPUT ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (struct ieee80211_device*,int *,int ,int ,int ,int) ;



 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct ieee80211_device*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_9__* VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct ieee80211_device* VAR_5, struct sk_buff* VAR_6, cb_desc* VAR_7)
{
 PRT_HIGH_THROUGHPUT VAR_8 = VAR_5->pHTInfo;
 PTX_TS_RECORD VAR_9 = ((void*)0);
 struct ieee80211_hdr_1addr* VAR_10 = (struct ieee80211_hdr_1addr*)VAR_6->data;

 if (!VAR_8->bCurrentHTSupport||!VAR_8->bEnableHT)
  return;
 if (!FUNC_1(VAR_6->data))
  return;

 if (FUNC_5(VAR_10->addr1) || FUNC_4(VAR_10->addr1))
  return;
 if(!VAR_5->GetNmodeSupportBySecCfg(VAR_5->dev))
 {
  return;
 }

 if(VAR_8->bCurrentAMPDUEnable)
 {
  if (!FUNC_0(VAR_5, (PTS_COMMON_INFO*)(&VAR_9), VAR_10->addr1, VAR_6->priority, VAR_3, 1))
  {
   FUNC_6("===>can't get TS\n");
   return;
  }
  if (VAR_9->TxAdmittedBARecord.bValid == 0)
  {

   if (VAR_5->wpa_ie_len && (VAR_5->pairwise_key_type == VAR_2))
   ;
   else
   FUNC_3(VAR_5, VAR_9);
   goto FORCED_AGG_SETTING;
  }
  else if (VAR_9->bUsingBa == 0)
  {
   if (FUNC_2(VAR_9->TxAdmittedBARecord.BaStartSeqCtrl.field.SeqNum, (VAR_9->TxCurSeq+1)%4096))
    VAR_9->bUsingBa = 1;
   else
    goto FORCED_AGG_SETTING;
  }

  if (VAR_5->iw_mode == VAR_1)
  {
   VAR_7->bAMPDUEnable = 1;
   VAR_7->ampdu_factor = VAR_8->CurrentAMPDUFactor;
   VAR_7->ampdu_density = VAR_8->CurrentMPDUDensity;
  }
 }
FORCED_AGG_SETTING:
 switch(VAR_8->ForcedAMPDUMode )
 {
  case 130:
   break;

  case 128:
   VAR_7->bAMPDUEnable = 1;
   VAR_7->ampdu_density = VAR_8->ForcedMPDUDensity;
   VAR_7->ampdu_factor = VAR_8->ForcedAMPDUFactor;
   break;

  case 129:
   VAR_7->bAMPDUEnable = 0;
   VAR_7->ampdu_density = 0;
   VAR_7->ampdu_factor = 0;
   break;

 }
  return;
}

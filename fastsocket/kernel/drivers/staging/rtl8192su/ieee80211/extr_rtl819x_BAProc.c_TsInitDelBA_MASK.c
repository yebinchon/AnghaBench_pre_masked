
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ieee80211_device {int dummy; } ;
struct TYPE_11__ {scalar_t__ bValid; } ;
struct TYPE_10__ {TYPE_4__ RxAdmittedBARecord; } ;
struct TYPE_9__ {int Addr; } ;
struct TYPE_8__ {TYPE_4__ TxPendingBARecord; TYPE_4__ TxAdmittedBARecord; } ;
typedef scalar_t__ TR_SELECT ;
typedef TYPE_1__* PTX_TS_RECORD ;
typedef TYPE_2__* PTS_COMMON_INFO ;
typedef TYPE_3__* PRX_TS_RECORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_device*,TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_device*,TYPE_1__*) ;
 int FUNC_2 (struct ieee80211_device*,int ,TYPE_4__*,scalar_t__,int ) ;

void
FUNC_3( struct ieee80211_device* VAR_3, PTS_COMMON_INFO VAR_4, TR_SELECT VAR_5)
{

 if(VAR_5 == VAR_2)
 {
  PTX_TS_RECORD VAR_6 = (PTX_TS_RECORD)VAR_4;

  if(FUNC_1(VAR_3, VAR_6))
   FUNC_2(
    VAR_3,
    VAR_4->Addr,
    (VAR_6->TxAdmittedBARecord.bValid)?(&VAR_6->TxAdmittedBARecord):(&VAR_6->TxPendingBARecord),
    VAR_5,
    VAR_0);
 }
 else if(VAR_5 == VAR_1)
 {
  PRX_TS_RECORD VAR_7 = (PRX_TS_RECORD)VAR_4;
  if(FUNC_0(VAR_3, VAR_7))
   FUNC_2(
    VAR_3,
    VAR_4->Addr,
    &VAR_7->RxAdmittedBARecord,
    VAR_5,
    VAR_0 );
 }
}

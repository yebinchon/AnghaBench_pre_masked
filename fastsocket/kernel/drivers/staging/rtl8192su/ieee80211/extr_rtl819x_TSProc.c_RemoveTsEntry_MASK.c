
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ieee80211_rxb {int nr_subframes; int * subframes; } ;
struct ieee80211_device {int reorder_spinlock; int RxReorder_Unused_List; } ;
struct TYPE_12__ {int prev; } ;
struct TYPE_11__ {int List; struct ieee80211_rxb* prxb; } ;
struct TYPE_10__ {TYPE_5__ RxPendingPktList; int RxPktPendingTimer; } ;
struct TYPE_9__ {int InactTimer; int SetupTimer; } ;
struct TYPE_8__ {int TsAddBaTimer; } ;
typedef scalar_t__ TR_SELECT ;
typedef TYPE_1__* PTX_TS_RECORD ;
typedef TYPE_2__* PTS_COMMON_INFO ;
typedef TYPE_3__* PRX_TS_RECORD ;
typedef TYPE_4__* PRX_REORDER_ENTRY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_device*,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_rxb*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(
 struct ieee80211_device* VAR_3,
 PTS_COMMON_INFO VAR_4,
 TR_SELECT VAR_5
 )
{

 unsigned long VAR_6 = 0;
 FUNC_1(&VAR_4->SetupTimer);
 FUNC_1(&VAR_4->InactTimer);
 FUNC_0(VAR_3, VAR_4, VAR_5);

 if(VAR_5 == VAR_1)
 {

  PRX_REORDER_ENTRY VAR_7;
  PRX_TS_RECORD VAR_8 = (PRX_TS_RECORD)VAR_4;
  if(FUNC_10(&VAR_8->RxPktPendingTimer))
   FUNC_1(&VAR_8->RxPktPendingTimer);

                while(!FUNC_6(&VAR_8->RxPendingPktList))
                {

                        FUNC_8(&(VAR_3->reorder_spinlock), VAR_6);

   VAR_7 = (PRX_REORDER_ENTRY)FUNC_7(VAR_8->RxPendingPktList.prev,VAR_2,VAR_0);
                        FUNC_5(&VAR_7->List);
                        {
                                int VAR_9 = 0;
                                struct ieee80211_rxb * VAR_10 = VAR_7->prxb;
    if (FUNC_11(!VAR_10))
    {
     FUNC_9(&(VAR_3->reorder_spinlock), VAR_6);
     return;
    }
                                for(VAR_9 =0; VAR_9 < VAR_10->nr_subframes; VAR_9++) {
                                        FUNC_2(VAR_10->subframes[VAR_9]);
                                }
                                FUNC_3(VAR_10);
                                VAR_10 = ((void*)0);
                        }
                        FUNC_4(&VAR_7->List,&VAR_3->RxReorder_Unused_List);

                        FUNC_9(&(VAR_3->reorder_spinlock), VAR_6);
                }


 }
 else
 {
  PTX_TS_RECORD VAR_11 = (PTX_TS_RECORD)VAR_4;
  FUNC_1(&VAR_11->TsAddBaTimer);
 }
}

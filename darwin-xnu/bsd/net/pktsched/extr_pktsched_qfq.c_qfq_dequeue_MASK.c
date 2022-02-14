
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int64_t ;
typedef size_t u_int32_t ;
struct qfq_if {scalar_t__* qif_bitmaps; scalar_t__ qif_V; scalar_t__ qif_queued; int qif_emptygrp; struct ifclassq* qif_ifq; } ;
struct qfq_group {scalar_t__ qfg_full_slots; size_t qfg_front; scalar_t__ qfg_F; unsigned long long qfg_slot_shift; scalar_t__ qfg_S; int qfg_index; struct qfq_class** qfg_slots; } ;
struct qfq_class {int cl_S; int cl_F; int cl_handle; int cl_xmitcnt; int cl_period; int cl_q; } ;
struct ifclassq {int dummy; } ;
struct TYPE_5__ {int * pktsched_pkt; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef scalar_t__ pktsched_bitmap_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ifclassq*,size_t) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*,int,size_t) ;
 int VAR_1 ;
 int FUNC_5 (int *,int,size_t) ;
 int FUNC_6 (struct qfq_if*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__*) ;
 int FUNC_12 (int ,scalar_t__*) ;
 size_t FUNC_13 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_14 (int *) ;
 size_t FUNC_15 (struct qfq_if*,struct qfq_group*) ;
 int FUNC_16 (struct qfq_if*,char*) ;
 struct qfq_group* FUNC_17 (struct qfq_if*,scalar_t__) ;
 int FUNC_18 (struct qfq_class*,TYPE_1__*) ;
 scalar_t__ FUNC_19 (int ,unsigned long long) ;
 struct qfq_class* FUNC_20 (struct qfq_if*,struct qfq_group*) ;
 int FUNC_21 (struct qfq_if*) ;
 int FUNC_22 (struct qfq_if*,int ,scalar_t__) ;
 scalar_t__ FUNC_23 (struct qfq_if*,struct qfq_group*,struct qfq_class*) ;
 int FUNC_24 (struct qfq_if*,scalar_t__) ;

void
FUNC_25(struct qfq_if *VAR_4, pktsched_pkt_t *VAR_5)
{
 pktsched_bitmap_t VAR_6 = VAR_4->qif_bitmaps[VAR_0];
 struct ifclassq *VAR_7 = VAR_4->qif_ifq;
 struct qfq_group *VAR_8;
 struct qfq_class *VAR_9;
 u_int64_t VAR_10;
 u_int32_t VAR_11;

 FUNC_3(VAR_7);

 VAR_5->pktsched_pkt = ((void*)0);

 for (;;) {
  if (VAR_6 == 0) {





   return;
  }
  VAR_8 = FUNC_17(VAR_4, VAR_6);

  if (VAR_8->qfg_full_slots != 0)
   break;
  FUNC_11(VAR_8->qfg_index, &VAR_6);



 }
 FUNC_7(!FUNC_2(VAR_7));

 VAR_9 = VAR_8->qfg_slots[VAR_8->qfg_front];
 FUNC_7(VAR_9 != ((void*)0) && !FUNC_14(&VAR_9->cl_q));

 FUNC_18(VAR_9, VAR_5);
 FUNC_7(VAR_5->pktsched_pkt != ((void*)0));
 VAR_11 = FUNC_13(VAR_5);





 FUNC_1(VAR_7);
 FUNC_0(VAR_7, VAR_11);
 if (FUNC_14(&VAR_9->cl_q))
  VAR_9->cl_period++;
 FUNC_5(&VAR_9->cl_xmitcnt, 1, VAR_11);
 FUNC_4(VAR_7, 1, VAR_11);

 VAR_10 = VAR_4->qif_V;
 VAR_4->qif_V += (u_int64_t)VAR_11 * VAR_2;

 if (VAR_3 > 2) {
  FUNC_10(VAR_1, "%s: %s qid=%d dequeue pkt=0x%llx F=0x%llx "
      "V=0x%llx", FUNC_9(FUNC_6(VAR_4)), FUNC_21(VAR_4),
      VAR_9->cl_handle,
      (uint64_t)FUNC_8(VAR_5->pktsched_pkt), VAR_9->cl_F,
      VAR_4->qif_V);
 }

 if (FUNC_23(VAR_4, VAR_8, VAR_9)) {
  u_int64_t VAR_12 = VAR_8->qfg_F;

  VAR_9 = FUNC_20(VAR_4, VAR_8);
  if (!VAR_9) {
   FUNC_11(VAR_8->qfg_index, &VAR_4->qif_bitmaps[VAR_0]);
  } else {
   u_int32_t VAR_13;
   u_int64_t VAR_14 =
       FUNC_19(VAR_9->cl_S, VAR_8->qfg_slot_shift);

   if (VAR_8->qfg_S == VAR_14)
    goto skip_unblock;

   VAR_8->qfg_S = VAR_14;
   VAR_8->qfg_F = VAR_14 + (2ULL << VAR_8->qfg_slot_shift);


   FUNC_11(VAR_8->qfg_index, &VAR_4->qif_bitmaps[VAR_0]);
   VAR_13 = FUNC_15(VAR_4, VAR_8);
   FUNC_12(VAR_8->qfg_index, &VAR_4->qif_bitmaps[VAR_13]);
  }

  FUNC_22(VAR_4, VAR_8->qfg_index, VAR_12);
 }

skip_unblock:
 FUNC_24(VAR_4, VAR_10);





}

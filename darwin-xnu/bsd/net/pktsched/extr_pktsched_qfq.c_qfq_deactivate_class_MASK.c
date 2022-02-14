
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct qfq_if {unsigned long* qif_bitmaps; int qif_V; } ;
struct qfq_group {unsigned long qfg_index; scalar_t__ qfg_full_slots; size_t qfg_front; unsigned long long qfg_slot_shift; scalar_t__ qfg_S; scalar_t__ qfg_F; int * qfg_slots; } ;
struct qfq_class {int cl_S; int cl_F; int cl_handle; int cl_qif; struct qfq_group* cl_grp; } ;
typedef int pktsched_bitmap_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,unsigned long,scalar_t__,size_t,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long*) ;
 int FUNC_5 (unsigned long,unsigned long*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long*) ;
 int VAR_5 ;
 int FUNC_7 (struct qfq_if*,struct qfq_group*) ;
 int FUNC_8 (struct qfq_if*,char*) ;
 int FUNC_9 (struct qfq_if*,int,size_t,size_t) ;
 scalar_t__ FUNC_10 (int ,unsigned long long) ;
 int FUNC_11 (struct qfq_if*,struct qfq_group*,struct qfq_class*) ;
 struct qfq_class* FUNC_12 (struct qfq_if*,struct qfq_group*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct qfq_if*,int ) ;

__attribute__((used)) static void
FUNC_15(struct qfq_if *VAR_6, struct qfq_class *VAR_7)
{
 struct qfq_group *VAR_8 = VAR_7->cl_grp;
 pktsched_bitmap_t VAR_9;
 u_int64_t VAR_10;
 int VAR_11;

 if (VAR_5) {
  FUNC_3(VAR_4, "%s: %s deactivate qid=%d grp=%d "
      "full_slots=0x%x front=%d bitmaps={ER=0x%x,EB=0x%x,"
      "IR=0x%x,IB=0x%x}\n",
      FUNC_2(FUNC_0(VAR_7->cl_qif)), FUNC_13(VAR_7->cl_qif),
      VAR_7->cl_handle, VAR_8->qfg_index, VAR_8->qfg_full_slots,
      VAR_8->qfg_front, VAR_6->qif_bitmaps[VAR_1], VAR_6->qif_bitmaps[VAR_0],
      VAR_6->qif_bitmaps[VAR_3], VAR_6->qif_bitmaps[VAR_2]);




 }

 VAR_7->cl_F = VAR_7->cl_S;
 FUNC_11(VAR_6, VAR_8, VAR_7);

 if (VAR_8->qfg_full_slots == 0) {





  FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_3]);
  FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_0]);
  FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_2]);

  if (FUNC_6(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_1]) &&
      !(VAR_6->qif_bitmaps[VAR_1] & ~((1UL << VAR_8->qfg_index) - 1))) {
   VAR_9 = VAR_6->qif_bitmaps[VAR_1] &
       ((1UL << VAR_8->qfg_index) - 1);
   if (VAR_9)
    VAR_9 = ~((1UL << FUNC_1(VAR_9)) - 1);
   else
    VAR_9 = (pktsched_bitmap_t)~0UL;
   FUNC_9(VAR_6, VAR_9, VAR_0, VAR_1);
   FUNC_9(VAR_6, VAR_9, VAR_2, VAR_3);
  }
  FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_1]);
 } else if (!VAR_8->qfg_slots[VAR_8->qfg_front]) {
  VAR_7 = FUNC_12(VAR_6, VAR_8);
  VAR_10 = FUNC_10(VAR_7->cl_S, VAR_8->qfg_slot_shift);
  if (VAR_8->qfg_S != VAR_10) {
   FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_1]);
   FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_3]);
   FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_0]);
   FUNC_4(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_2]);
   VAR_8->qfg_S = VAR_10;
   VAR_8->qfg_F = VAR_10 + (2ULL << VAR_8->qfg_slot_shift);
   VAR_11 = FUNC_7(VAR_6, VAR_8);
   FUNC_5(VAR_8->qfg_index, &VAR_6->qif_bitmaps[VAR_11]);
  }
 }
 FUNC_14(VAR_6, VAR_6->qif_V);





}

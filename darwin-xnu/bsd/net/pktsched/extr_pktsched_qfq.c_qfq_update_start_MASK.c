
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct qfq_if {scalar_t__ qif_V; int * qif_bitmaps; } ;
struct qfq_group {scalar_t__ qfg_F; } ;
struct qfq_class {scalar_t__ cl_F; scalar_t__ cl_S; TYPE_1__* cl_grp; } ;
typedef scalar_t__ pktsched_bitmap_t ;
struct TYPE_2__ {int qfg_slot_shift; int qfg_index; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct qfq_group* FUNC_1 (struct qfq_if*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_4(struct qfq_if *VAR_1, struct qfq_class *VAR_2)
{
 pktsched_bitmap_t VAR_3;
 u_int64_t VAR_4, VAR_5;
 int VAR_6 = VAR_2->cl_grp->qfg_slot_shift;

 VAR_5 = FUNC_3(VAR_2->cl_F, VAR_6);
 VAR_4 = FUNC_3(VAR_1->qif_V, VAR_6) + (1UL << VAR_6);

 if (!FUNC_2(VAR_2->cl_F, VAR_1->qif_V) || FUNC_2(VAR_5, VAR_4)) {

  VAR_3 = FUNC_0(VAR_1->qif_bitmaps[VAR_0], VAR_2->cl_grp->qfg_index);
  if (VAR_3) {
   struct qfq_group *VAR_7 = FUNC_1(VAR_1, VAR_3);
   if (FUNC_2(VAR_5, VAR_7->qfg_F)) {
    VAR_2->cl_S = VAR_7->qfg_F;
    return;
   }
  }
  VAR_2->cl_S = VAR_1->qif_V;
 } else {
  VAR_2->cl_S = VAR_2->cl_F;
 }
}

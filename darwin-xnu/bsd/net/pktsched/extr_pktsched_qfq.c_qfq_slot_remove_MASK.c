
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int64_t ;
typedef size_t u_int32_t ;
struct qfq_if {size_t qif_maxslots; } ;
struct qfq_group {size_t qfg_slot_shift; size_t qfg_S; size_t qfg_front; int qfg_full_slots; struct qfq_class** qfg_slots; } ;
struct qfq_class {struct qfq_class* cl_next; int cl_S; } ;


 int FUNC_0 (size_t,int *) ;
 size_t FUNC_1 (int ,size_t) ;

__attribute__((used)) static inline void
FUNC_2(struct qfq_if *VAR_0, struct qfq_group *VAR_1,
    struct qfq_class *VAR_2)
{
#pragma unused(qif)
 struct qfq_class **VAR_3;
 u_int32_t VAR_4, VAR_5;
 u_int64_t VAR_6;

 VAR_6 = FUNC_1(VAR_2->cl_S, VAR_1->qfg_slot_shift);
 VAR_5 = (VAR_6 - VAR_1->qfg_S) >> VAR_1->qfg_slot_shift;
 VAR_4 = (VAR_1->qfg_front + VAR_5) % VAR_0->qif_maxslots;

 VAR_3 = &VAR_1->qfg_slots[VAR_4];
 while (*VAR_3 && *VAR_3 != VAR_2)
  VAR_3 = &(*VAR_3)->cl_next;

 *VAR_3 = VAR_2->cl_next;
 if (!VAR_1->qfg_slots[VAR_4])
  FUNC_0(VAR_5, &VAR_1->qfg_full_slots);
}

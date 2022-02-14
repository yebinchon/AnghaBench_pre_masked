
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct qfq_if {int qif_maxslots; } ;
struct qfq_group {int qfg_S; int qfg_slot_shift; int qfg_full_slots; int qfg_front; } ;



__attribute__((used)) static inline void
FUNC_0(struct qfq_if *VAR_0, struct qfq_group *VAR_1, u_int64_t VAR_2)
{
#pragma unused(qif)
 u_int32_t VAR_3 = (VAR_1->qfg_S - VAR_2) >> VAR_1->qfg_slot_shift;

 VAR_1->qfg_full_slots <<= VAR_3;
 VAR_1->qfg_front = (VAR_1->qfg_front - VAR_3) % VAR_0->qif_maxslots;
}

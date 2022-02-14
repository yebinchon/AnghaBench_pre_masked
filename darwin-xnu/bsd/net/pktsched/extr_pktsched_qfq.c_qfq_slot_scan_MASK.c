
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {int qif_maxslots; } ;
struct qfq_group {int qfg_full_slots; int qfg_front; struct qfq_class** qfg_slots; int qfg_index; } ;
struct qfq_class {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qfq_if*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct qfq_if*) ;

__attribute__((used)) static inline struct qfq_class *
FUNC_5(struct qfq_if *VAR_2, struct qfq_group *VAR_3)
{
 int VAR_4;

 if (VAR_1 > 2) {
  FUNC_2(VAR_0, "%s: %s grp=%d full_slots=0x%x\n",
      FUNC_1(FUNC_0(VAR_2)), FUNC_4(VAR_2), VAR_3->qfg_index,
      VAR_3->qfg_full_slots);
 }

 if (VAR_3->qfg_full_slots == 0)
  return (((void*)0));

 VAR_4 = FUNC_3(VAR_3->qfg_full_slots) - 1;
 if (VAR_4 > 0) {
  VAR_3->qfg_front = (VAR_3->qfg_front + VAR_4) % VAR_2->qif_maxslots;
  VAR_3->qfg_full_slots >>= VAR_4;
 }

 return (VAR_3->qfg_slots[VAR_3->qfg_front]);
}

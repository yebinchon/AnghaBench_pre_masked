
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qfq_if {int dummy; } ;
struct ifclassq {scalar_t__ ifcq_type; TYPE_1__* ifcq_disc_slots; struct qfq_if* ifcq_disc; } ;
struct TYPE_2__ {int * cl; scalar_t__ qid; } ;


 int FUNC_0 (struct ifclassq*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct qfq_if*) ;

int
FUNC_4(struct ifclassq *VAR_2)
{
 struct qfq_if *VAR_3 = VAR_2->ifcq_disc;
 int VAR_4;

 FUNC_0(VAR_2);
 FUNC_1(VAR_3 != ((void*)0) && VAR_2->ifcq_type == VAR_1);

 (void) FUNC_3(VAR_3);

 VAR_2->ifcq_disc = ((void*)0);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->ifcq_disc_slots[VAR_4].qid = 0;
  VAR_2->ifcq_disc_slots[VAR_4].cl = ((void*)0);
 }

 return (FUNC_2(VAR_2));
}

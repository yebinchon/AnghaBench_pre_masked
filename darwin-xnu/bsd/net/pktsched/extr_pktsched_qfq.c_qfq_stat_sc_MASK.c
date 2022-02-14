
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct qfq_if {struct ifclassq* qif_ifq; } ;
struct qfq_class {int cl_q; } ;
struct ifclassq {TYPE_1__* ifcq_disc_slots; } ;
struct TYPE_5__ {scalar_t__ sc; int bytes; int packets; } ;
typedef TYPE_2__ cqrq_stat_sc_t ;
struct TYPE_4__ {struct qfq_class* cl; } ;


 int FUNC_0 (struct ifclassq*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct qfq_if *VAR_2, cqrq_stat_sc_t *VAR_3)
{
 struct ifclassq *VAR_4 = VAR_2->qif_ifq;
 struct qfq_class *VAR_5;
 u_int32_t VAR_6;

 FUNC_0(VAR_4);

 FUNC_3(VAR_3->sc == VAR_1 || FUNC_2(VAR_3->sc));

 VAR_6 = FUNC_1(VAR_3->sc);
 FUNC_3(VAR_6 < VAR_0);

 VAR_5 = VAR_4->ifcq_disc_slots[VAR_6].cl;
 VAR_3->packets = FUNC_4(&VAR_5->cl_q);
 VAR_3->bytes = FUNC_5(&VAR_5->cl_q);

 return (0);
}

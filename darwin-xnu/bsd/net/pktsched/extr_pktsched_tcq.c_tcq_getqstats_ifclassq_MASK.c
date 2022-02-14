
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct tcq_if {int dummy; } ;
struct ifclassq {scalar_t__ ifcq_type; TYPE_1__* ifcq_disc_slots; struct tcq_if* ifcq_disc; } ;
struct if_ifclassq_stats {int ifqs_tcq_stats; } ;
struct TYPE_2__ {int qid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tcq_if*,int ,int *) ;

int
FUNC_3(struct ifclassq *VAR_3, u_int32_t VAR_4,
    struct if_ifclassq_stats *VAR_5)
{
 struct tcq_if *VAR_6 = VAR_3->ifcq_disc;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3->ifcq_type == VAR_2);

 if (VAR_4 >= VAR_1)
  return (VAR_0);

 return (FUNC_2(VAR_6, VAR_3->ifcq_disc_slots[VAR_4].qid,
     &VAR_5->ifqs_tcq_stats));
}

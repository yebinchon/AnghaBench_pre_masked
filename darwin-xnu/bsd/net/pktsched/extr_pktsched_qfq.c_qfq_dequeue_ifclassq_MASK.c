
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ifclassq {int ifcq_disc; } ;
struct TYPE_4__ {void* pktsched_pkt; int pktsched_ptype; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef int pkt ;
typedef int classq_pkt_type_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_2(struct ifclassq *VAR_0, classq_pkt_type_t *VAR_1)
{
 pktsched_pkt_t VAR_2;
 FUNC_0(&VAR_2, sizeof (VAR_2));
 FUNC_1(VAR_0->ifcq_disc, &VAR_2);
 *VAR_1 = VAR_2.pktsched_ptype;
 return (VAR_2.pktsched_pkt);
}

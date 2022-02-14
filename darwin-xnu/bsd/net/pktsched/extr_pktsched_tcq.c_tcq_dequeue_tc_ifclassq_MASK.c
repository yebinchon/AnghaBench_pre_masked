
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct ifclassq {TYPE_1__* ifcq_disc_slots; int ifcq_disc; } ;
struct TYPE_6__ {void* pktsched_pkt; int pktsched_ptype; } ;
typedef TYPE_2__ pktsched_pkt_t ;
typedef int pkt ;
typedef int mbuf_svc_class_t ;
typedef int classq_pkt_type_t ;
struct TYPE_5__ {int cl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static void *
FUNC_4(struct ifclassq *VAR_1, mbuf_svc_class_t VAR_2,
    classq_pkt_type_t *VAR_3)
{
 pktsched_pkt_t VAR_4;
 u_int32_t VAR_5 = FUNC_0(VAR_2);

 FUNC_1((u_int32_t)VAR_5 < VAR_0);

 FUNC_2(&VAR_4, sizeof (VAR_4));
 (FUNC_3(VAR_1->ifcq_disc, VAR_1->ifcq_disc_slots[VAR_5].cl, VAR_2, &VAR_4));
 *VAR_3 = VAR_4.pktsched_ptype;
 return (VAR_4.pktsched_pkt);
}

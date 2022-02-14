
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_4__ {TYPE_2__* fqs_classq; } ;
typedef TYPE_1__ fq_if_t ;
struct TYPE_5__ {scalar_t__ fcl_quantum; size_t fcl_pri; size_t fcl_drr_max; size_t fcl_service_class; int fcl_old_flows; int fcl_new_flows; } ;
typedef TYPE_2__ fq_if_classq_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

void
FUNC_2(fq_if_t *VAR_1, u_int32_t VAR_2, u_int32_t VAR_3,
    u_int32_t VAR_4, u_int32_t VAR_5)
{
 fq_if_classq_t *VAR_6;

 VAR_6 = &VAR_1->fqs_classq[VAR_2];

 FUNC_1(VAR_2 >= 0 && VAR_2 < VAR_0 &&
     VAR_6->fcl_quantum == 0);
 VAR_6->fcl_quantum = VAR_3;
 VAR_6->fcl_pri = VAR_2;
 VAR_6->fcl_drr_max = VAR_4;
 VAR_6->fcl_service_class = VAR_5;
 FUNC_0(&VAR_6->fcl_new_flows);
 FUNC_0(&VAR_6->fcl_old_flows);
}

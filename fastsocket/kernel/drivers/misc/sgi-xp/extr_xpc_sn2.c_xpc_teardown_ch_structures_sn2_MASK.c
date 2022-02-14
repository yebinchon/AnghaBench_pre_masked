
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xpc_partition_sn2 {int * local_chctl_amo_va; int * local_GPs; int local_GPs_base; int * remote_GPs; int remote_GPs_base; int * local_openclose_args; int local_openclose_args_base; int dropped_notify_IRQ_timer; } ;
struct TYPE_3__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {TYPE_1__ sn; } ;
struct TYPE_4__ {scalar_t__ magic; } ;


 int VAR_0 ;
 short FUNC_0 (struct xpc_partition*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct xpc_partition *VAR_2)
{
 struct xpc_partition_sn2 *VAR_3 = &VAR_2->sn.sn2;
 short VAR_4 = FUNC_0(VAR_2);





 VAR_1[VAR_4].magic = 0;


 FUNC_1(&VAR_3->dropped_notify_IRQ_timer);
 FUNC_2(VAR_0, (void *)(u64)VAR_4);

 FUNC_3(VAR_3->local_openclose_args_base);
 VAR_3->local_openclose_args = ((void*)0);
 FUNC_3(VAR_3->remote_GPs_base);
 VAR_3->remote_GPs = ((void*)0);
 FUNC_3(VAR_3->local_GPs_base);
 VAR_3->local_GPs = ((void*)0);
 VAR_3->local_chctl_amo_va = ((void*)0);
}

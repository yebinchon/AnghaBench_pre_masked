
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint64_t ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_10__ {void* val; } ;
struct TYPE_9__ {void* val; } ;
struct TYPE_12__ {TYPE_3__ data; TYPE_2__ addr; } ;
struct TYPE_11__ {TYPE_5__ ipi_data; } ;
struct exit_ctl_data {TYPE_4__ u; int exit_reason; } ;
struct TYPE_8__ {struct exit_ctl_data exit_data; } ;
struct TYPE_13__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2,
     uint64_t VAR_3, uint64_t VAR_4)
{
 struct exit_ctl_data *VAR_5 = &VAR_1->arch.exit_data;
 unsigned long VAR_6;

 FUNC_1(VAR_6);

 VAR_5->exit_reason = VAR_0;
 VAR_5->u.ipi_data.addr.val = VAR_3;
 VAR_5->u.ipi_data.data.val = VAR_4;
 FUNC_2(VAR_1);

 FUNC_0(VAR_6);

}

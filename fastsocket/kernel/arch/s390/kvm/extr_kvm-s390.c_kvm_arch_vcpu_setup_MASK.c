
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int version; } ;
struct TYPE_7__ {int function; } ;
struct TYPE_6__ {TYPE_4__ cpu_id; TYPE_3__ ckc_timer; int tasklet; TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; int requests; } ;
struct TYPE_5__ {int ecb; int eca; int fac; int cpuflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;

int FUNC_5(struct kvm_vcpu *VAR_7)
{
 FUNC_0(&VAR_7->arch.sie_block->cpuflags, VAR_1);
 FUNC_3(VAR_3, &VAR_7->requests);
 VAR_7->arch.sie_block->ecb = 2;
 VAR_7->arch.sie_block->eca = 0xC1002001U;
 VAR_7->arch.sie_block->fac = (int) (long) VAR_4;
 FUNC_2(&VAR_7->arch.ckc_timer, VAR_0, VAR_2);
 FUNC_4(&VAR_7->arch.tasklet, VAR_6,
       (unsigned long) VAR_7);
 VAR_7->arch.ckc_timer.function = VAR_5;
 FUNC_1(&VAR_7->arch.cpu_id);
 VAR_7->arch.cpu_id.version = 0xff;
 return 0;
}

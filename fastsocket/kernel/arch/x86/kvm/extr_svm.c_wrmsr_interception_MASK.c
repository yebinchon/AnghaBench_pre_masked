
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u32 ;
struct TYPE_6__ {unsigned int* regs; } ;
struct TYPE_7__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_2__ vcpu; scalar_t__ next_rip; } ;
struct msr_data {int data; unsigned int index; int host_initiated; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct msr_data*) ;
 int FUNC_4 (unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct vcpu_svm *VAR_3)
{
 struct msr_data VAR_4;
 u32 VAR_5 = VAR_3->vcpu.arch.regs[VAR_1];
 u64 VAR_6 = (VAR_3->vcpu.arch.regs[VAR_0] & -1u)
  | ((u64)(VAR_3->vcpu.arch.regs[VAR_2] & -1u) << 32);

 FUNC_4(VAR_5, VAR_6);

 VAR_4.data = VAR_6;
 VAR_4.index = VAR_5;
 VAR_4.host_initiated = 0;

 VAR_3->next_rip = FUNC_1(&VAR_3->vcpu) + 2;
 if (FUNC_3(&VAR_3->vcpu, &VAR_4))
  FUNC_0(&VAR_3->vcpu, 0);
 else
  FUNC_2(&VAR_3->vcpu);
 return 1;
}

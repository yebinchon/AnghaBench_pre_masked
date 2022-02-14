
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcb {int dummy; } ;
struct vcpu_svm {TYPE_2__* vmcb; int vcpu; scalar_t__ next_rip; } ;
struct TYPE_3__ {int rax; } ;
struct TYPE_4__ {TYPE_1__ save; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vcpu_svm*) ;
 struct vmcb* FUNC_2 (struct vcpu_svm*,int ,int ) ;
 int FUNC_3 (struct vmcb*,int ) ;
 int FUNC_4 (TYPE_2__*,struct vmcb*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct vcpu_svm *VAR_1)
{
 struct vmcb *VAR_2;

 if (FUNC_1(VAR_1))
  return 1;

 VAR_1->next_rip = FUNC_0(&VAR_1->vcpu) + 3;
 FUNC_5(&VAR_1->vcpu);

 VAR_2 = FUNC_2(VAR_1, VAR_1->vmcb->save.rax, VAR_0);
 if (!VAR_2)
  return 1;

 FUNC_4(VAR_1->vmcb, VAR_2);
 FUNC_3(VAR_2, VAR_0);

 return 1;
}

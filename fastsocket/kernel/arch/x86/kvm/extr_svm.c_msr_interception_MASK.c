
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct TYPE_3__ {scalar_t__ exit_info_1; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_0)
{
 if (VAR_0->vmcb->control.exit_info_1)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}

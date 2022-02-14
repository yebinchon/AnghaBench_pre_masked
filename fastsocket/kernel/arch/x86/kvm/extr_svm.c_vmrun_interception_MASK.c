
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; int vcpu; scalar_t__ next_rip; } ;
struct TYPE_3__ {scalar_t__ exit_info_2; scalar_t__ exit_info_1; scalar_t__ exit_code_hi; int exit_code; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (struct vcpu_svm*) ;
 int FUNC_3 (struct vcpu_svm*) ;
 int FUNC_4 (struct vcpu_svm*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct vcpu_svm *VAR_1)
{
 FUNC_5("VMrun\n");

 if (FUNC_1(VAR_1))
  return 1;

 VAR_1->next_rip = FUNC_0(&VAR_1->vcpu) + 3;
 FUNC_6(&VAR_1->vcpu);

 if (!FUNC_3(VAR_1))
  return 1;

 if (!FUNC_4(VAR_1))
  goto failed;

 return 1;

failed:

 VAR_1->vmcb->control.exit_code = VAR_0;
 VAR_1->vmcb->control.exit_code_hi = 0;
 VAR_1->vmcb->control.exit_info_1 = 0;
 VAR_1->vmcb->control.exit_info_2 = 0;

 FUNC_2(VAR_1);

 return 1;
}

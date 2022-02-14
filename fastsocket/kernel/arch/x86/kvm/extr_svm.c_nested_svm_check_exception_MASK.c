
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int cr2; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_2__ vcpu; TYPE_4__* vmcb; } ;
struct TYPE_7__ {unsigned int exit_code; int exit_info_2; int exit_info_1; scalar_t__ exit_code_hi; } ;
struct TYPE_8__ {TYPE_3__ control; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_1, unsigned VAR_2,
          bool VAR_3, u32 VAR_4)
{
 if (!FUNC_0(VAR_1))
  return 0;

 VAR_1->vmcb->control.exit_code = VAR_0 + VAR_2;
 VAR_1->vmcb->control.exit_code_hi = 0;
 VAR_1->vmcb->control.exit_info_1 = VAR_4;
 VAR_1->vmcb->control.exit_info_2 = VAR_1->vcpu.arch.cr2;

 return FUNC_1(VAR_1);
}

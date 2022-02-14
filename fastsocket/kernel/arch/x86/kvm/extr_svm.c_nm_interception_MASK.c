
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fpu_active; } ;
struct vcpu_svm {TYPE_3__* vmcb; TYPE_4__ vcpu; } ;
struct TYPE_6__ {int cr0; } ;
struct TYPE_5__ {int intercept_exceptions; } ;
struct TYPE_7__ {TYPE_2__ save; TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_4)
{
 VAR_4->vmcb->control.intercept_exceptions &= ~(1 << VAR_0);
 if (!FUNC_0(&VAR_4->vcpu, VAR_3))
  VAR_4->vmcb->save.cr0 &= ~VAR_3;
 else
  VAR_4->vmcb->save.cr0 |= VAR_3;
 VAR_4->vcpu.fpu_active = 1;
 FUNC_1(VAR_4->vmcb, VAR_2);
 FUNC_1(VAR_4->vmcb, VAR_1);

 return 1;
}

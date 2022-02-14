
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int shadow_efer; } ;
struct TYPE_10__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_3__* vmcb; } ;
struct TYPE_8__ {scalar_t__ cpl; } ;
struct TYPE_9__ {TYPE_2__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_2)
{
 if (!(VAR_2->vcpu.arch.shadow_efer & VAR_0)
     || !FUNC_0(&VAR_2->vcpu)) {
  FUNC_2(&VAR_2->vcpu, VAR_1);
  return 1;
 }

 if (VAR_2->vmcb->save.cpl) {
  FUNC_1(&VAR_2->vcpu, 0);
  return 1;
 }

       return 0;
}

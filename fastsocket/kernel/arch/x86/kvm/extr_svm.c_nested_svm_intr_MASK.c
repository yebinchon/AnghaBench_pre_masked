
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {unsigned long long intercept; int exit_required; } ;
struct TYPE_6__ {int hflags; } ;
struct TYPE_7__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_5__ nested; TYPE_4__* vmcb; TYPE_2__ vcpu; } ;
struct TYPE_8__ {int exit_code; } ;
struct TYPE_9__ {TYPE_3__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline int FUNC_2(struct vcpu_svm *VAR_3)
{
 if (!FUNC_0(VAR_3))
  return 0;

 if (!(VAR_3->vcpu.arch.hflags & VAR_1))
  return 0;

 if (!(VAR_3->vcpu.arch.hflags & VAR_0))
  return 0;

 VAR_3->vmcb->control.exit_code = VAR_2;

 if (VAR_3->nested.intercept & 1ULL) {






  VAR_3->nested.exit_required = 1;
  FUNC_1("VMexit -> INTR\n");
  return 1;
 }

 return 0;
}

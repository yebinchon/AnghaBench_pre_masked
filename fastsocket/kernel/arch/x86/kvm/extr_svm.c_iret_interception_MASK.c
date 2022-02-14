
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hflags; } ;
struct TYPE_6__ {int nmi_window_exits; } ;
struct TYPE_10__ {TYPE_3__ arch; TYPE_1__ stat; } ;
struct vcpu_svm {TYPE_5__ vcpu; int nmi_iret_rip; TYPE_4__* vmcb; } ;
struct TYPE_7__ {unsigned long intercept; } ;
struct TYPE_9__ {TYPE_2__ control; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_3)
{
 ++VAR_3->vcpu.stat.nmi_window_exits;
 VAR_3->vmcb->control.intercept &= ~(1UL << VAR_1);
 FUNC_1(VAR_3->vmcb, VAR_2);
 VAR_3->vcpu.arch.hflags |= VAR_0;
 VAR_3->nmi_iret_rip = FUNC_0(&VAR_3->vcpu);
 return 1;
}

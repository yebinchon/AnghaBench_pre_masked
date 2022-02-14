
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int hflags; int nmi_injected; } ;
struct TYPE_13__ {TYPE_1__ arch; } ;
struct vcpu_svm {scalar_t__ nmi_iret_rip; TYPE_4__ vcpu; TYPE_3__* vmcb; } ;
struct TYPE_11__ {int exit_int_info; int exit_int_info_err; } ;
struct TYPE_12__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct vcpu_svm *VAR_6)
{
 u8 VAR_7;
 int VAR_8;
 u32 VAR_9 = VAR_6->vmcb->control.exit_int_info;





 if ((VAR_6->vcpu.arch.hflags & VAR_0)
     && FUNC_7(&VAR_6->vcpu) != VAR_6->nmi_iret_rip)
  VAR_6->vcpu.arch.hflags &= ~(VAR_1 | VAR_0);

 VAR_6->vcpu.arch.nmi_injected = 0;
 FUNC_1(&VAR_6->vcpu);
 FUNC_2(&VAR_6->vcpu);

 if (!(VAR_9 & VAR_3))
  return;

 VAR_7 = VAR_9 & VAR_5;
 VAR_8 = VAR_9 & VAR_2;

 switch (VAR_8) {
 case 128:
  VAR_6->vcpu.arch.nmi_injected = 1;
  break;
 case 130:


  if (FUNC_0(VAR_6))
   break;
  if (FUNC_3(VAR_7))
   break;
  if (VAR_9 & VAR_4) {
   u32 VAR_10 = VAR_6->vmcb->control.exit_int_info_err;
   FUNC_5(&VAR_6->vcpu, VAR_7, VAR_10);

  } else
   FUNC_4(&VAR_6->vcpu, VAR_7);
  break;
 case 129:
  FUNC_6(&VAR_6->vcpu, VAR_7, 0);
  break;
 default:
  break;
 }
}

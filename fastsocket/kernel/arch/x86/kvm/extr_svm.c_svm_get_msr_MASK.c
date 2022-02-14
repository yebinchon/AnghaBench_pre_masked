
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_12__ {int hsave_msr; TYPE_2__* hsave; } ;
struct vcpu_svm {int sysenter_eip; int sysenter_esp; TYPE_6__ nested; TYPE_5__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_10__ {int star; int lstar; int cstar; int kernel_gs_base; int sfmask; int sysenter_cs; int dbgctl; int br_from; int br_to; int last_excp_from; int last_excp_to; } ;
struct TYPE_9__ {int tsc_offset; } ;
struct TYPE_11__ {TYPE_4__ save; TYPE_3__ control; } ;
struct TYPE_7__ {int tsc_offset; } ;
struct TYPE_8__ {TYPE_1__ control; } ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned int,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_0, unsigned VAR_1, u64 *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_4(VAR_0);

 switch (VAR_1) {
 case 135: {
  u64 VAR_4;

  if (FUNC_0(VAR_3))
   VAR_4 = VAR_3->nested.hsave->control.tsc_offset;
  else
   VAR_4 = VAR_3->vmcb->control.tsc_offset;

  *VAR_2 = VAR_4 + FUNC_3(VAR_0, FUNC_2());
  break;
 }
 case 133:
  *VAR_2 = VAR_3->vmcb->save.star;
  break;
 case 138:
  *VAR_2 = VAR_3->vmcb->save.sysenter_cs;
  break;
 case 137:
  *VAR_2 = VAR_3->sysenter_eip;
  break;
 case 136:
  *VAR_2 = VAR_3->sysenter_esp;
  break;



 case 143:
  *VAR_2 = VAR_3->vmcb->save.dbgctl;
  break;
 case 142:
  *VAR_2 = VAR_3->vmcb->save.br_from;
  break;
 case 141:
  *VAR_2 = VAR_3->vmcb->save.br_to;
  break;
 case 140:
  *VAR_2 = VAR_3->vmcb->save.last_excp_from;
  break;
 case 139:
  *VAR_2 = VAR_3->vmcb->save.last_excp_to;
  break;
 case 128:
  *VAR_2 = VAR_3->nested.hsave_msr;
  break;
 case 129:
  *VAR_2 = 0;
  break;
 case 134:
  *VAR_2 = 0x01000065;
  break;
 default:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 return 0;
}

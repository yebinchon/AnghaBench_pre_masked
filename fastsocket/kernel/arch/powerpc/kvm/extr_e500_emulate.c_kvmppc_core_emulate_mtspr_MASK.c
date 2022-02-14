
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int hid1; int hid0; int l1csr1; int mas7; int mas6; int mas4; int mas3; int mas2; int mas1; int mas0; int * pid; } ;
struct TYPE_2__ {int * gpr; int * ivor; int pid; int shadow_pid; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,int) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int ) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_5, int VAR_6, int VAR_7)
{
 struct kvmppc_vcpu_e500 *VAR_8 = FUNC_2(VAR_5);
 int VAR_9 = VAR_4;

 switch (VAR_6) {
 case 130:
  VAR_8->pid[0] = VAR_5->arch.shadow_pid =
   VAR_5->arch.pid = VAR_5->arch.gpr[VAR_7];
  break;
 case 129:
  VAR_8->pid[1] = VAR_5->arch.gpr[VAR_7]; break;
 case 128:
  VAR_8->pid[2] = VAR_5->arch.gpr[VAR_7]; break;
 case 138:
  VAR_8->mas0 = VAR_5->arch.gpr[VAR_7]; break;
 case 137:
  VAR_8->mas1 = VAR_5->arch.gpr[VAR_7]; break;
 case 136:
  VAR_8->mas2 = VAR_5->arch.gpr[VAR_7]; break;
 case 135:
  VAR_8->mas3 = VAR_5->arch.gpr[VAR_7]; break;
 case 134:
  VAR_8->mas4 = VAR_5->arch.gpr[VAR_7]; break;
 case 133:
  VAR_8->mas6 = VAR_5->arch.gpr[VAR_7]; break;
 case 132:
  VAR_8->mas7 = VAR_5->arch.gpr[VAR_7]; break;
 case 139:
  VAR_8->l1csr1 = VAR_5->arch.gpr[VAR_7]; break;
 case 145:
  VAR_8->hid0 = VAR_5->arch.gpr[VAR_7]; break;
 case 144:
  VAR_8->hid1 = VAR_5->arch.gpr[VAR_7]; break;

 case 131:
  VAR_9 = FUNC_1(VAR_8,
    VAR_5->arch.gpr[VAR_7]);
  break;


 case 143:
  VAR_5->arch.ivor[VAR_3] = VAR_5->arch.gpr[VAR_7];
  break;
 case 142:
  VAR_5->arch.ivor[VAR_1] = VAR_5->arch.gpr[VAR_7];
  break;
 case 141:
  VAR_5->arch.ivor[VAR_2] = VAR_5->arch.gpr[VAR_7];
  break;
 case 140:
  VAR_5->arch.ivor[VAR_0] = VAR_5->arch.gpr[VAR_7];
  break;

 default:
  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 }

 return VAR_9;
}

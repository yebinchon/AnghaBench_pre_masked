
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int* pid; int mas0; int mas1; int mas2; int mas3; int mas4; int mas6; int mas7; int* guest_tlb_size; int l1csr1; int hid0; int hid1; } ;
struct TYPE_2__ {int* gpr; int* ivor; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,int) ;
 void* FUNC_1 (int const) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_5, int VAR_6, int VAR_7)
{
 struct kvmppc_vcpu_e500 *VAR_8 = FUNC_2(VAR_5);
 int VAR_9 = VAR_4;

 switch (VAR_6) {
 case 132:
  VAR_5->arch.gpr[VAR_7] = VAR_8->pid[0]; break;
 case 131:
  VAR_5->arch.gpr[VAR_7] = VAR_8->pid[1]; break;
 case 130:
  VAR_5->arch.gpr[VAR_7] = VAR_8->pid[2]; break;
 case 141:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas0; break;
 case 140:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas1; break;
 case 139:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas2; break;
 case 138:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas3; break;
 case 137:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas4; break;
 case 136:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas6; break;
 case 135:
  VAR_5->arch.gpr[VAR_7] = VAR_8->mas7; break;

 case 129:
  VAR_5->arch.gpr[VAR_7] = FUNC_1(129);
  VAR_5->arch.gpr[VAR_7] &= ~0xfffUL;
  VAR_5->arch.gpr[VAR_7] |= VAR_8->guest_tlb_size[0];
  break;

 case 128:
  VAR_5->arch.gpr[VAR_7] = FUNC_1(128);
  VAR_5->arch.gpr[VAR_7] &= ~0xfffUL;
  VAR_5->arch.gpr[VAR_7] |= VAR_8->guest_tlb_size[1];
  break;

 case 142:
  VAR_5->arch.gpr[VAR_7] = VAR_8->l1csr1; break;
 case 148:
  VAR_5->arch.gpr[VAR_7] = VAR_8->hid0; break;
 case 147:
  VAR_5->arch.gpr[VAR_7] = VAR_8->hid1; break;

 case 133:
  VAR_5->arch.gpr[VAR_7] = 0; break;

 case 134:
  VAR_5->arch.gpr[VAR_7] = FUNC_1(134); break;


 case 146:
  VAR_5->arch.gpr[VAR_7] = VAR_5->arch.ivor[VAR_3];
  break;
 case 145:
  VAR_5->arch.gpr[VAR_7] = VAR_5->arch.ivor[VAR_1];
  break;
 case 144:
  VAR_5->arch.gpr[VAR_7] = VAR_5->arch.ivor[VAR_2];
  break;
 case 143:
  VAR_5->arch.gpr[VAR_7] = VAR_5->arch.ivor[VAR_0];
  break;
 default:
  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 }

 return VAR_9;
}

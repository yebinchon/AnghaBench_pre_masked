
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * gpr; int * ivor; int ivpr; int sprg7; int sprg6; int sprg5; int sprg4; int tcr; int tsr; int dbsr; int dbcr1; int dbcr0; int esr; int dear; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct kvm_vcpu*) ;

int FUNC_1(struct kvm_vcpu *VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21 = VAR_16;

 switch (VAR_19) {
 case 152:
  VAR_18->arch.dear = VAR_18->arch.gpr[VAR_20]; break;
 case 151:
  VAR_18->arch.esr = VAR_18->arch.gpr[VAR_20]; break;
 case 155:
  VAR_18->arch.dbcr0 = VAR_18->arch.gpr[VAR_20]; break;
 case 154:
  VAR_18->arch.dbcr1 = VAR_18->arch.gpr[VAR_20]; break;
 case 153:
  VAR_18->arch.dbsr &= ~VAR_18->arch.gpr[VAR_20]; break;
 case 128:
  VAR_18->arch.tsr &= ~VAR_18->arch.gpr[VAR_20]; break;
 case 129:
  VAR_18->arch.tcr = VAR_18->arch.gpr[VAR_20];
  FUNC_0(VAR_18);
  break;




 case 133:
  VAR_18->arch.sprg4 = VAR_18->arch.gpr[VAR_20]; break;
 case 132:
  VAR_18->arch.sprg5 = VAR_18->arch.gpr[VAR_20]; break;
 case 131:
  VAR_18->arch.sprg6 = VAR_18->arch.gpr[VAR_20]; break;
 case 130:
  VAR_18->arch.sprg7 = VAR_18->arch.gpr[VAR_20]; break;

 case 134:
  VAR_18->arch.ivpr = VAR_18->arch.gpr[VAR_20];
  break;
 case 150:
  VAR_18->arch.ivor[VAR_2] = VAR_18->arch.gpr[VAR_20];
  break;
 case 149:
  VAR_18->arch.ivor[VAR_12] = VAR_18->arch.gpr[VAR_20];
  break;
 case 142:
  VAR_18->arch.ivor[VAR_3] = VAR_18->arch.gpr[VAR_20];
  break;
 case 141:
  VAR_18->arch.ivor[VAR_10] = VAR_18->arch.gpr[VAR_20];
  break;
 case 140:
  VAR_18->arch.ivor[VAR_7] = VAR_18->arch.gpr[VAR_20];
  break;
 case 139:
  VAR_18->arch.ivor[VAR_0] = VAR_18->arch.gpr[VAR_20];
  break;
 case 138:
  VAR_18->arch.ivor[VAR_13] = VAR_18->arch.gpr[VAR_20];
  break;
 case 137:
  VAR_18->arch.ivor[VAR_9] = VAR_18->arch.gpr[VAR_20];
  break;
 case 136:
  VAR_18->arch.ivor[VAR_14] = VAR_18->arch.gpr[VAR_20];
  break;
 case 135:
  VAR_18->arch.ivor[VAR_1] = VAR_18->arch.gpr[VAR_20];
  break;
 case 148:
  VAR_18->arch.ivor[VAR_5] = VAR_18->arch.gpr[VAR_20];
  break;
 case 147:
  VAR_18->arch.ivor[VAR_8] = VAR_18->arch.gpr[VAR_20];
  break;
 case 146:
  VAR_18->arch.ivor[VAR_15] = VAR_18->arch.gpr[VAR_20];
  break;
 case 145:
  VAR_18->arch.ivor[VAR_6] = VAR_18->arch.gpr[VAR_20];
  break;
 case 144:
  VAR_18->arch.ivor[VAR_11] = VAR_18->arch.gpr[VAR_20];
  break;
 case 143:
  VAR_18->arch.ivor[VAR_4] = VAR_18->arch.gpr[VAR_20];
  break;

 default:
  VAR_21 = VAR_17;
 }

 return VAR_21;
}

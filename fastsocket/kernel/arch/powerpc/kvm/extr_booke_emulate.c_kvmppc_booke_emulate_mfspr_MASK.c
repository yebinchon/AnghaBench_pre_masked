
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ivor; int * gpr; int dbsr; int dbcr1; int dbcr0; int esr; int dear; int ivpr; } ;
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
int FUNC_0(struct kvm_vcpu *VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21 = VAR_16;

 switch (VAR_19) {
 case 128:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivpr; break;
 case 146:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.dear; break;
 case 145:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.esr; break;
 case 149:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.dbcr0; break;
 case 148:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.dbcr1; break;
 case 147:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.dbsr; break;

 case 144:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_2];
  break;
 case 143:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_12];
  break;
 case 136:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_3];
  break;
 case 135:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_10];
  break;
 case 134:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_7];
  break;
 case 133:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_0];
  break;
 case 132:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_13];
  break;
 case 131:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_9];
  break;
 case 130:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_14];
  break;
 case 129:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_1];
  break;
 case 142:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_5];
  break;
 case 141:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_8];
  break;
 case 140:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_15];
  break;
 case 139:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_6];
  break;
 case 138:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_11];
  break;
 case 137:
  VAR_18->arch.gpr[VAR_20] = VAR_18->arch.ivor[VAR_4];
  break;

 default:
  VAR_21 = VAR_17;
 }

 return VAR_21;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int msr; int srr0; int pc; int srr1; int ivpr; int* ivor; int pending_exceptions; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4,
                                        unsigned int VAR_5)
{
 int VAR_6 = 0;
 ulong VAR_7;

 switch (VAR_5) {
 case 133:
 case 140:
 case 135:
 case 129:
 case 143:
 case 136:
 case 137:
 case 130:
 case 132:
 case 131:
 case 145:
 case 146:
  VAR_6 = 1;
  VAR_7 = VAR_0|VAR_3|VAR_1;
  break;
 case 144:
 case 128:
  VAR_6 = VAR_4->arch.msr & VAR_0;
  VAR_7 = VAR_3;
  break;
 case 134:
  VAR_6 = VAR_4->arch.msr & VAR_3;
  VAR_7 = 0;
  break;
 case 139:
 case 141:
 case 138:
  VAR_6 = VAR_4->arch.msr & VAR_2;
  VAR_7 = VAR_0|VAR_3|VAR_1;
  break;
 case 142:
  VAR_6 = VAR_4->arch.msr & VAR_1;
  VAR_7 = VAR_3;
  break;
 }

 if (VAR_6) {
  VAR_4->arch.srr0 = VAR_4->arch.pc;
  VAR_4->arch.srr1 = VAR_4->arch.msr;
  VAR_4->arch.pc = VAR_4->arch.ivpr | VAR_4->arch.ivor[VAR_5];
  FUNC_1(VAR_4, VAR_4->arch.msr & VAR_7);

  FUNC_0(VAR_5, &VAR_4->arch.pending_exceptions);
 }

 return VAR_6;
}

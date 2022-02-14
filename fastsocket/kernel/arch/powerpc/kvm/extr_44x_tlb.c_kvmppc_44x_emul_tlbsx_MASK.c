
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int* gpr; int cr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct kvm_vcpu*) ;
 unsigned int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int,unsigned int,unsigned int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;

int FUNC_4(struct kvm_vcpu *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 unsigned int VAR_9 = FUNC_1(VAR_2);
 unsigned int VAR_10 = FUNC_0(VAR_2);

 VAR_7 = VAR_2->arch.gpr[VAR_5];
 if (VAR_4)
  VAR_7 += VAR_2->arch.gpr[VAR_4];

 VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_10, VAR_9);
 if (VAR_6) {
  if (VAR_8 < 0)
   VAR_2->arch.cr &= ~0x20000000;
  else
   VAR_2->arch.cr |= 0x20000000;
 }
 VAR_2->arch.gpr[VAR_3] = VAR_8;

 FUNC_3(VAR_2, VAR_0);
 return VAR_1;
}

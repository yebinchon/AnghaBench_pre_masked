
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cr0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_5(unsigned long *VAR_5,
     unsigned long VAR_6,
     struct kvm_vcpu *VAR_7)
{
 if (!(VAR_6 & VAR_3)) {

  FUNC_3(VAR_2,
        FUNC_2(VAR_2) |
        (VAR_0 |
         VAR_1));
  VAR_7->arch.cr0 = VAR_6;
  FUNC_4(VAR_7, FUNC_1(VAR_7));
 } else if (!FUNC_0(VAR_7)) {

  FUNC_3(VAR_2,
        FUNC_2(VAR_2) &
        ~(VAR_0 |
          VAR_1));
  VAR_7->arch.cr0 = VAR_6;
  FUNC_4(VAR_7, FUNC_1(VAR_7));
 }

 if (!(VAR_6 & VAR_4))
  *VAR_5 &= ~VAR_4;
}

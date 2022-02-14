
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int xcr0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_6, u32 VAR_7, u64 VAR_8)
{
 u64 VAR_9;


 if (VAR_7 != VAR_0)
  return 1;
 VAR_9 = VAR_8;
 if (VAR_5->get_cpl(VAR_6) != 0)
  return 1;
 if (!(VAR_9 & VAR_1))
  return 1;
 if ((VAR_9 & VAR_3) && !(VAR_9 & VAR_2))
  return 1;
 if (VAR_9 & ~VAR_4)
  return 1;
 FUNC_0(VAR_6);
 VAR_6->arch.xcr0 = VAR_9;
 return 0;
}

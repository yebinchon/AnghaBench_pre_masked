
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_rflags ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_4, int VAR_5)
{
 return (VAR_5 != VAR_0) &&
  (VAR_5 != VAR_1) &&
  (VAR_3->get_rflags(VAR_4) & VAR_2);
}

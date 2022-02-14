
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct ia64_pal_retval {int dummy; } ;
struct TYPE_3__ {scalar_t__ is_sn2; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (struct ia64_pal_retval,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ia64_pal_retval*) ;

__attribute__((used)) static struct ia64_pal_retval FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct ia64_pal_retval VAR_2;

 FUNC_0(VAR_2, VAR_0, 0, 0, 0);

 if (VAR_1->kvm->arch.is_sn2)
  FUNC_1(&VAR_2);

 return VAR_2;
}

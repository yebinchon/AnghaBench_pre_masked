
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* apic; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef int gpa_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,void*) ;
 int FUNC_1 (int *,int ,int,void*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1, gpa_t VAR_2, int VAR_3, void *VAR_4)
{
 if (VAR_1->arch.apic &&
     !FUNC_1(&VAR_1->arch.apic->dev, VAR_2, VAR_3, VAR_4))
  return 0;

 return FUNC_0(VAR_1->kvm, VAR_0, VAR_2, VAR_3, VAR_4);
}

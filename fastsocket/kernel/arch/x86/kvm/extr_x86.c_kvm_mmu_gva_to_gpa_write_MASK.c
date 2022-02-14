
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* gva_to_gpa ) (struct kvm_vcpu*,int ,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_6__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,int *) ;

gpa_t FUNC_2(struct kvm_vcpu *VAR_3, gva_t VAR_4, u32 *VAR_5)
{
 u32 VAR_6 = (VAR_2->get_cpl(VAR_3) == 3) ? VAR_0 : 0;
 VAR_6 |= VAR_1;
 return VAR_3->arch.mmu.gva_to_gpa(VAR_3, VAR_4, VAR_6, VAR_5);
}

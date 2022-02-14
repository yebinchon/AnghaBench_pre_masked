
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu_page {int dummy; } ;


 int FUNC_0 (struct kvm_mmu_page*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu_page*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1,
     struct kvm_mmu_page *VAR_2)
{
 FUNC_1(VAR_1, VAR_2, VAR_0);
 FUNC_0(VAR_2);
}

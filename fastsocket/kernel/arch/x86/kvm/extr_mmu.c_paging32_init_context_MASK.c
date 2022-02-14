
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu {int root_hpa; int shadow_root_level; int root_level; int invlpg; int sync_page; int prefetch_page; int free; int gva_to_gpa; int page_fault; int new_cr3; } ;
struct TYPE_2__ {struct kvm_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_10)
{
 struct kvm_mmu *VAR_11 = &VAR_10->arch.mmu;

 FUNC_0(VAR_10, VAR_2);
 VAR_11->new_cr3 = VAR_9;
 VAR_11->page_fault = VAR_5;
 VAR_11->gva_to_gpa = VAR_3;
 VAR_11->free = VAR_8;
 VAR_11->prefetch_page = VAR_6;
 VAR_11->sync_page = VAR_7;
 VAR_11->invlpg = VAR_4;
 VAR_11->root_level = VAR_2;
 VAR_11->shadow_root_level = VAR_1;
 VAR_11->root_hpa = VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu {int root_level; int shadow_root_level; int root_hpa; int free; int invlpg; int sync_page; int prefetch_page; int gva_to_gpa; int page_fault; int new_cr3; } ;
struct TYPE_2__ {struct kvm_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_8, int VAR_9)
{
 struct kvm_mmu *VAR_10 = &VAR_8->arch.mmu;

 FUNC_0(FUNC_1(VAR_8));
 VAR_10->new_cr3 = VAR_7;
 VAR_10->page_fault = VAR_3;
 VAR_10->gva_to_gpa = VAR_1;
 VAR_10->prefetch_page = VAR_4;
 VAR_10->sync_page = VAR_5;
 VAR_10->invlpg = VAR_2;
 VAR_10->free = VAR_6;
 VAR_10->root_level = VAR_9;
 VAR_10->shadow_root_level = VAR_9;
 VAR_10->root_hpa = VAR_0;
 return 0;
}

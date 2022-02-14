
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_mmu {void* root_level; void* gva_to_gpa; int root_hpa; int shadow_root_level; int invlpg; int sync_page; int prefetch_page; int free; int page_fault; int new_cr3; } ;
struct TYPE_3__ {struct kvm_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* get_tdp_level ) () ;} ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_3 (struct kvm_vcpu*,void*) ;
 int FUNC_4 () ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_14)
{
 struct kvm_mmu *VAR_15 = &VAR_14->arch.mmu;

 VAR_15->new_cr3 = VAR_8;
 VAR_15->page_fault = VAR_13;
 VAR_15->free = VAR_5;
 VAR_15->prefetch_page = VAR_9;
 VAR_15->sync_page = VAR_10;
 VAR_15->invlpg = VAR_7;
 VAR_15->shadow_root_level = VAR_4->get_tdp_level();
 VAR_15->root_hpa = VAR_0;

 if (!FUNC_2(VAR_14)) {
  VAR_15->gva_to_gpa = VAR_6;
  VAR_15->root_level = 0;
 } else if (FUNC_0(VAR_14)) {
  FUNC_3(VAR_14, VAR_3);
  VAR_15->gva_to_gpa = VAR_12;
  VAR_15->root_level = VAR_3;
 } else if (FUNC_1(VAR_14)) {
  FUNC_3(VAR_14, VAR_1);
  VAR_15->gva_to_gpa = VAR_12;
  VAR_15->root_level = VAR_1;
 } else {
  FUNC_3(VAR_14, VAR_2);
  VAR_15->gva_to_gpa = VAR_11;
  VAR_15->root_level = VAR_2;
 }

 return 0;
}

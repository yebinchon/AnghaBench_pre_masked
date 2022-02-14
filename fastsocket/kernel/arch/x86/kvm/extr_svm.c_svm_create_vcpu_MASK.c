
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int apic_base; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {void* msrpm; void* hsave; } ;
struct vcpu_svm {int vmcb_pa; struct kvm_vcpu vcpu; scalar_t__ asid_generation; void* vmcb; TYPE_1__ nested; void* msrpm; int tsc_ratio; } ;
struct page {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;
 struct page* FUNC_3 (int ) ;
 struct page* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct vcpu_svm*) ;
 int FUNC_8 (int ,struct vcpu_svm*) ;
 struct vcpu_svm* FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 void* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (void*) ;

__attribute__((used)) static struct kvm_vcpu *FUNC_16(struct kvm *VAR_8, unsigned int VAR_9)
{
 struct vcpu_svm *VAR_10;
 struct page *VAR_11;
 struct page *VAR_12;
 struct page *VAR_13;
 struct page *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_9(VAR_7, VAR_1);
 if (!VAR_10) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_10->tsc_ratio = VAR_6;

 VAR_15 = FUNC_10(&VAR_10->vcpu, VAR_8, VAR_9);
 if (VAR_15)
  goto free_svm;

 VAR_15 = -VAR_0;
 VAR_11 = FUNC_3(VAR_1);
 if (!VAR_11)
  goto uninit;

 VAR_12 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_12)
  goto free_page1;

 VAR_14 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_14)
  goto free_page2;

 VAR_13 = FUNC_3(VAR_1);
 if (!VAR_13)
  goto free_page3;

 VAR_10->nested.hsave = FUNC_13(VAR_13);

 VAR_10->msrpm = FUNC_13(VAR_12);
 FUNC_15(VAR_10->msrpm);

 VAR_10->nested.msrpm = FUNC_13(VAR_14);

 VAR_10->vmcb = FUNC_13(VAR_11);
 FUNC_5(VAR_10->vmcb);
 VAR_10->vmcb_pa = FUNC_14(VAR_11) << VAR_5;
 VAR_10->asid_generation = 0;
 FUNC_7(VAR_10);

 FUNC_6(&VAR_10->vcpu);
 VAR_10->vcpu.arch.apic_base = 0xfee00000 | VAR_4;
 if (FUNC_11(&VAR_10->vcpu))
  VAR_10->vcpu.arch.apic_base |= VAR_3;

 return &VAR_10->vcpu;

free_page3:
 FUNC_2(VAR_14, VAR_2);
free_page2:
 FUNC_2(VAR_12, VAR_2);
free_page1:
 FUNC_1(VAR_11);
uninit:
 FUNC_12(&VAR_10->vcpu);
free_svm:
 FUNC_8(VAR_7, VAR_10);
out:
 return FUNC_0(VAR_15);
}

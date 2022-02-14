
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct TYPE_3__ {int root_hpa; } ;
struct TYPE_4__ {int mcg_cap; int pv_time_enabled; scalar_t__ pio_data; int mce_banks; int mp_state; TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct kvm*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (int,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (struct page*) ;

int FUNC_13(struct kvm_vcpu *VAR_8)
{
 struct page *VAR_9;
 struct kvm *VAR_10;
 int VAR_11;

 FUNC_0(VAR_8->kvm == ((void*)0));
 VAR_10 = VAR_8->kvm;

 VAR_8->arch.mmu.root_hpa = VAR_2;
 if (!FUNC_3(VAR_10) || FUNC_10(VAR_8))
  VAR_8->arch.mp_state = VAR_4;
 else
  VAR_8->arch.mp_state = VAR_5;

 VAR_9 = FUNC_1(VAR_1 | VAR_6);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto fail;
 }
 VAR_8->arch.pio_data = FUNC_12(VAR_9);

 FUNC_6(VAR_8, VAR_7);

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11 < 0)
  goto fail_free_pio_data;

 if (FUNC_3(VAR_10)) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 < 0)
   goto fail_mmu_destroy;
 }

 VAR_8->arch.mce_banks = FUNC_11(VAR_3 * sizeof(u64) * 4,
           VAR_1);
 if (!VAR_8->arch.mce_banks) {
  VAR_11 = -VAR_0;
  goto fail_free_lapic;
 }
 VAR_8->arch.mcg_cap = VAR_3;

 VAR_8->arch.pv_time_enabled = 0;
 FUNC_9(VAR_8);

 return 0;
fail_free_lapic:
 FUNC_5(VAR_8);
fail_mmu_destroy:
 FUNC_8(VAR_8);
fail_free_pio_data:
 FUNC_2((unsigned long)VAR_8->arch.pio_data);
fail:
 return VAR_11;
}

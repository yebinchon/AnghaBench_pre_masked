
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct vcpu_vmx {void* msr_guest_kernel_gs_base; } ;
struct shared_msr_entry {void* data; } ;
struct msr_data {int index; void* data; } ;
struct TYPE_3__ {void* pat; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int vmentry_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct shared_msr_entry* FUNC_0 (struct vcpu_vmx*,int) ;
 int FUNC_1 (struct kvm_vcpu*,struct msr_data*) ;
 int FUNC_2 (struct kvm_vcpu*,struct msr_data*) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (struct vcpu_vmx*) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_8, struct msr_data *VAR_9)
{
 struct vcpu_vmx *VAR_10 = FUNC_3(VAR_8);
 struct shared_msr_entry *VAR_11;
 int VAR_12 = 0;
 u32 VAR_13 = VAR_9->index;
 u64 VAR_14 = VAR_9->data;

 switch (VAR_13) {
 case 136:
  FUNC_7(VAR_10);
  VAR_12 = FUNC_1(VAR_8, VAR_9);
  break;
 case 132:
  FUNC_4(VAR_3, VAR_14);
  break;
 case 131:
  FUNC_6(VAR_4, VAR_14);
  break;
 case 130:
  FUNC_6(VAR_5, VAR_14);
  break;
 case 129:
  FUNC_2(VAR_8, VAR_9);
  break;
 case 133:
  if (VAR_7.vmentry_ctrl & VAR_6) {
   FUNC_5(VAR_2, VAR_14);
   VAR_8->arch.pat = VAR_14;
   break;
  }

 default:
  VAR_11 = FUNC_0(VAR_10, VAR_13);
  if (VAR_11) {
   FUNC_7(VAR_10);
   VAR_11->data = VAR_14;
   break;
  }
  VAR_12 = FUNC_1(VAR_8, VAR_9);
 }

 return VAR_12;
}

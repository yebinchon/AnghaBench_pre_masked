
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_2__ {int hv_hypercall; int hv_guest_os_id; } ;
struct kvm {TYPE_1__ arch; } ;




 int FUNC_0 (struct kvm_vcpu*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, u32 VAR_1, u64 *VAR_2)
{
        u64 VAR_3 = 0;
        struct kvm *VAR_4 = VAR_0->kvm;

        switch (VAR_1) {
        case 129:
                VAR_3 = VAR_4->arch.hv_guest_os_id;
                break;
        case 128:
                VAR_3 = VAR_4->arch.hv_hypercall;
                break;
        default:
                FUNC_0(VAR_0, "Hyper-V unhandled rdmsr: 0x%x\n", VAR_1);
                return 1;
        }

        *VAR_2 = VAR_3;
        return 0;
}

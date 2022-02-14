
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvm_lapic {TYPE_3__* vcpu; } ;
struct TYPE_6__ {TYPE_2__* kvm; int vcpu_id; } ;
struct TYPE_4__ {int vapics_in_nmi_mode; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_lapic *VAR_1, u32 VAR_2)
{
 int VAR_3 = FUNC_2(FUNC_1(VAR_1, VAR_0));

 if (FUNC_2(VAR_2)) {
  if (!VAR_3) {
   FUNC_0("Receive NMI setting on APIC_LVT0 "
       "for cpu %d\n", VAR_1->vcpu->vcpu_id);
   VAR_1->vcpu->kvm->arch.vapics_in_nmi_mode++;
  }
 } else if (VAR_3)
  VAR_1->vcpu->kvm->arch.vapics_in_nmi_mode--;
}

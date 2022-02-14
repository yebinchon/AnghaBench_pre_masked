
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm* aliases; scalar_t__ ept_identity_pagetable; scalar_t__ apic_access_page; struct kvm* vioapic; struct kvm* vpic; } ;
struct kvm {TYPE_1__ arch; int srcu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct kvm *VAR_0)
{
 FUNC_4(VAR_0);
 FUNC_1(VAR_0->arch.vpic);
 FUNC_1(VAR_0->arch.vioapic);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 if (VAR_0->arch.apic_access_page)
  FUNC_5(VAR_0->arch.apic_access_page);
 if (VAR_0->arch.ept_identity_pagetable)
  FUNC_5(VAR_0->arch.ept_identity_pagetable);
 FUNC_0(&VAR_0->srcu);
 FUNC_1(VAR_0->arch.aliases);
 FUNC_1(VAR_0);
}

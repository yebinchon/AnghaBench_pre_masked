
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct descriptor_table {unsigned long member_1; int member_0; } ;
struct TYPE_2__ {int (* set_gdt ) (struct kvm_vcpu*,struct descriptor_table*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct descriptor_table*) ;

void FUNC_1(struct kvm_vcpu *VAR_1, u16 VAR_2, unsigned long VAR_3)
{
 struct descriptor_table VAR_4 = { VAR_2, VAR_3 };

 VAR_0->set_gdt(VAR_1, &VAR_4);
}

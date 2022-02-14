
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int base; int limit; scalar_t__ unusable; } ;
struct descriptor_table {int base; int limit; } ;
struct TYPE_2__ {int (* get_gdt ) (struct kvm_vcpu*,struct descriptor_table*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*,struct descriptor_table*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2,
       u16 VAR_3,
       struct descriptor_table *VAR_4)
{
 if (VAR_3 & 1 << 2) {
  struct kvm_segment VAR_5;

  FUNC_0(VAR_2, &VAR_5, VAR_0);

  if (VAR_5.unusable)
   VAR_4->limit = 0;
  else
   VAR_4->limit = VAR_5.limit;
  VAR_4->base = VAR_5.base;
 }
 else
  VAR_1->get_gdt(VAR_2, VAR_4);
}

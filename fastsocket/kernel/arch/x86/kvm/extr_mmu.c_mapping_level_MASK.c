
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
struct kvm_memory_slot {scalar_t__ dirty_bitmap; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_memory_slot* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2, gfn_t VAR_3)
{
 struct kvm_memory_slot *VAR_4;
 int VAR_5;
 int VAR_6 = VAR_1;

 VAR_4 = FUNC_0(VAR_2->kvm, VAR_3);
 if (VAR_4 && VAR_4->dirty_bitmap)
  return VAR_1;

 VAR_5 = FUNC_2(VAR_2->kvm, VAR_3);

 if (VAR_5 == VAR_1)
  return VAR_5;

 for (VAR_6 = VAR_0; VAR_6 <= VAR_5; ++VAR_6)
  if (FUNC_1(VAR_2->kvm, VAR_3, VAR_6))
   break;

 return VAR_6 - 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
typedef enum tlb_miss_type { ____Placeholder_tlb_miss_type } tlb_miss_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3, u64 VAR_4,
      enum tlb_miss_type VAR_5)
{

 if (VAR_5 == VAR_0 || VAR_5 == VAR_2) {

  FUNC_1(VAR_3, VAR_4, 1, 0, 0);
 }

 FUNC_0(VAR_3, VAR_1);
}

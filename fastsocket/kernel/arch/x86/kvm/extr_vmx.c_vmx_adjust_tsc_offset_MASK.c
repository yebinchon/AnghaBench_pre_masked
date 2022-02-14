
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_vcpu {int vcpu_id; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1, s64 VAR_2, bool VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_4 + VAR_2);

 FUNC_0(VAR_1->vcpu_id, VAR_4,
       VAR_4 + VAR_2);
}

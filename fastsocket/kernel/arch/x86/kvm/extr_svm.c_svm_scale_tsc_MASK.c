
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcpu_svm {scalar_t__ tsc_ratio; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_1(VAR_1);
 u64 VAR_4 = VAR_2;

 if (VAR_3->tsc_ratio != VAR_0)
  VAR_4 = FUNC_0(VAR_3->tsc_ratio, VAR_2);

 return VAR_4;
}

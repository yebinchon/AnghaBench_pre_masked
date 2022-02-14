
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline u64 FUNC_2(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_2 * FUNC_1(VAR_1);
 FUNC_0(VAR_3, VAR_0);
 return VAR_3;
}

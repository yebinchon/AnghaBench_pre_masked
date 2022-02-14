
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_pta {scalar_t__ vf; int val; } ;
typedef int u64 ;
struct thash_data {int key; int p; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 struct thash_data* FUNC_1 (struct kvm_vcpu*,int,int ) ;

u64 FUNC_2(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 struct thash_data *VAR_3;
 union ia64_pta VAR_4;
 u64 VAR_5;

 VAR_4.val = FUNC_0(VAR_1);
 if (VAR_4.vf == 0) {
  VAR_5 = 1;
  return VAR_5;
 }
 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (!VAR_3 || !VAR_3->p)
  VAR_5 = 1;
 else
  VAR_5 = VAR_3->key;

 return VAR_5;
}

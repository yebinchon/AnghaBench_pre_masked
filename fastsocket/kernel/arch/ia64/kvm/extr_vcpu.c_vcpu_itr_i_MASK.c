
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct thash_data {int dummy; } ;
struct TYPE_2__ {int * itrs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 size_t FUNC_2 (size_t) ;
 int VAR_2 ;
 size_t FUNC_3 (struct kvm_vcpu*,size_t) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct thash_data*,size_t,size_t,size_t,size_t) ;

void FUNC_6(struct kvm_vcpu *VAR_3, u64 VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10;
 struct thash_data *VAR_11;

 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_0(VAR_7, VAR_8);
 VAR_5 &= ~VAR_0;
 VAR_10 = FUNC_3(VAR_3, VAR_7);
 VAR_10 = VAR_10 & VAR_1;
 VAR_11 = (struct thash_data *)&VAR_3->arch.itrs[VAR_4];
 FUNC_5(VAR_11, VAR_5, VAR_6, VAR_9, VAR_10);
 FUNC_4(FUNC_1(VAR_3, VAR_2), VAR_9);
}

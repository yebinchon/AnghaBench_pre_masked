
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thash_data {int dummy; } ;
struct TYPE_2__ {int * dtrs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct kvm_vcpu*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct thash_data*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_8(struct kvm_vcpu *VAR_7, u64 VAR_8, u64 VAR_9, u64 VAR_10, u64 VAR_11)
{
 u64 VAR_12;
 u64 VAR_13, VAR_14, VAR_15;
 struct thash_data *VAR_16;

 VAR_13 = FUNC_3(VAR_10);
 VAR_14 = FUNC_0(VAR_11, VAR_13);
 VAR_9 &= ~VAR_0;

 if (VAR_13 != VAR_5)
  FUNC_4(VAR_7, VAR_14, VAR_13);
 VAR_12 = (VAR_9 & VAR_4) >> VAR_1;
 if (FUNC_2(VAR_12))
  VAR_9 |= VAR_3;
 VAR_15 = FUNC_5(VAR_7, VAR_14);
 VAR_15 = VAR_15 & VAR_2;
 VAR_16 = (struct thash_data *)&VAR_7->arch.dtrs[VAR_8];
 FUNC_7((struct thash_data *)&VAR_7->arch.dtrs[VAR_8],
       VAR_9, VAR_10, VAR_14, VAR_15);
 FUNC_6(FUNC_1(VAR_7, VAR_6), VAR_14);
}

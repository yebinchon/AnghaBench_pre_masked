
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thash_data {int dummy; } ;
struct TYPE_2__ {int itrs; int itr_regions; int dtrs; int dtr_regions; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct thash_data*,int,int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

struct thash_data *FUNC_3(struct kvm_vcpu *VAR_4, u64 VAR_5, int VAR_6)
{

 struct thash_data *VAR_7;
 int VAR_8;
 u64 VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_5);
 VAR_9 = VAR_9 & VAR_3;
 if (VAR_6 == VAR_0) {
  if (FUNC_2(VAR_4->arch.dtr_regions, VAR_5)) {
   for (VAR_7 = (struct thash_data *)&VAR_4->arch.dtrs, VAR_8 = 0;
      VAR_8 < VAR_1; VAR_8++, VAR_7++) {
    if (FUNC_0(VAR_7, VAR_9, VAR_5))
     return VAR_7;
   }
  }
 } else {
  if (FUNC_2(VAR_4->arch.itr_regions, VAR_5)) {
   for (VAR_7 = (struct thash_data *)&VAR_4->arch.itrs, VAR_8 = 0;
     VAR_8 < VAR_2; VAR_8++, VAR_7++) {
    if (FUNC_0(VAR_7, VAR_9, VAR_5))
     return VAR_7;
   }
  }
 }

 return ((void*)0);
}

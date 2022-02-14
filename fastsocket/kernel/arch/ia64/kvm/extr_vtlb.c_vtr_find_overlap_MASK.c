
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
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct thash_data*,int,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

int FUNC_4(struct kvm_vcpu *VAR_4, u64 VAR_5, u64 VAR_6, int VAR_7)
{
 struct thash_data *VAR_8;
 int VAR_9;
 u64 VAR_10, VAR_11;

 VAR_11 = FUNC_2(VAR_4, VAR_5);
 VAR_11 = VAR_11 & VAR_3;
 VAR_10 = VAR_5 + FUNC_0(VAR_6);
 if (VAR_7 == VAR_0) {
  if (FUNC_3(VAR_4->arch.dtr_regions, VAR_5)) {
   for (VAR_8 = (struct thash_data *)&VAR_4->arch.dtrs, VAR_9 = 0;
     VAR_9 < VAR_1; VAR_9++, VAR_8++) {
    if (FUNC_1(VAR_8, VAR_11, VAR_5, VAR_10))
     return VAR_9;
   }
  }
 } else {
  if (FUNC_3(VAR_4->arch.itr_regions, VAR_5)) {
   for (VAR_8 = (struct thash_data *)&VAR_4->arch.itrs, VAR_9 = 0;
     VAR_9 < VAR_2; VAR_9++, VAR_8++) {
    if (FUNC_1(VAR_8, VAR_11, VAR_5, VAR_10))
     return VAR_9;
   }
  }
 }
 return -1;
}

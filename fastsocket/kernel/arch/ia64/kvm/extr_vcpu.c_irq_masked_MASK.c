
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_tpr {int mmi; scalar_t__ mic; int val; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_5 ;

int FUNC_3(struct kvm_vcpu *VAR_6, int VAR_7, int VAR_8)
{
 union ia64_tpr VAR_9;

 VAR_9.val = FUNC_0(VAR_6, VAR_5);

 if (VAR_8 == VAR_4)
  return VAR_1;

 if (VAR_7 == VAR_4) {

  return VAR_3;
 }

 if (VAR_8 == VAR_0)
  return VAR_1;

 if (VAR_7 == VAR_0) {
  if (VAR_9.mmi) {

   return VAR_2;
  } else
   return VAR_3;
 }

 if (FUNC_2(VAR_7, VAR_8)) {
  if (FUNC_1(VAR_7, VAR_9.mic + (VAR_9.mmi << 4)))
   return VAR_3;
  else
   return VAR_2;
 } else {
  return VAR_1;
 }
}

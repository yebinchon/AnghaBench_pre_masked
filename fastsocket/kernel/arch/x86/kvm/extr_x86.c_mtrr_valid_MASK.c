
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_4, u32 VAR_5, u64 VAR_6)
{
 int VAR_7;

 if (!FUNC_0(VAR_5))
  return 0;

 if (VAR_5 == VAR_0) {
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
   if (!FUNC_2((VAR_6 >> (VAR_7 * 8)) & 0xff))
    return 0;
  return 1;
 } else if (VAR_5 == VAR_1) {
  if (VAR_6 & ~0xcff)
   return 0;
  return FUNC_1(VAR_6 & 0xff);
 } else if (VAR_5 >= VAR_3 && VAR_5 <= VAR_2) {
  for (VAR_7 = 0; VAR_7 < 8 ; VAR_7++)
   if (!FUNC_1((VAR_6 >> (VAR_7 * 8)) & 0xff))
    return 0;
  return 1;
 }


 return FUNC_1(VAR_6 & 0xff);
}

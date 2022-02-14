
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {unsigned long ps; int val; } ;
typedef unsigned long u64 ;
struct thash_data {unsigned long etag; } ;
struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct thash_data *VAR_4;
 u64 VAR_5, VAR_6, VAR_7, VAR_8;
 union ia64_rr VAR_9;

 VAR_5 = VAR_2 & ~((1UL << VAR_3) - 1);
 VAR_9.val = FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_9.ps);
 VAR_8 = 1UL << ((VAR_3 < VAR_9.ps) ? 0 : (VAR_3 - VAR_9.ps));
 while (VAR_8) {
  VAR_4 = (struct thash_data *)FUNC_2(VAR_5);
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_4->etag == VAR_7)
   VAR_4->etag = VAR_0;
  VAR_5 += VAR_6;
  VAR_8--;
 }
 FUNC_4(VAR_2, VAR_3);
}

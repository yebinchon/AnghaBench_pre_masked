
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct intel_uncore_box {int dummy; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (unsigned int,unsigned long long) ;
 unsigned int FUNC_1 (struct intel_uncore_box*) ;
 scalar_t__ FUNC_2 (struct intel_uncore_box*) ;
 unsigned long long FUNC_3 (struct intel_uncore_box*) ;
 int FUNC_4 (unsigned int,unsigned long long) ;

__attribute__((used)) static void FUNC_5(struct intel_uncore_box *VAR_1)
{
 unsigned VAR_2 = FUNC_1(VAR_1);
 u64 VAR_3;

 if (VAR_2) {
  FUNC_0(VAR_2, VAR_3);
  VAR_3 &= ~((1ULL << FUNC_3(VAR_1)) - 1);

  if (FUNC_2(VAR_1))
   VAR_3 &= ~VAR_0;
  FUNC_4(VAR_2, VAR_3);
 }
}

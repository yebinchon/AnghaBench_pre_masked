
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long) ;
 unsigned long long FUNC_3 () ;
 int FUNC_4 (unsigned long long) ;
 unsigned long long FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(uint64_t VAR_1, uint64_t VAR_2)
{
 uint32_t VAR_3 = FUNC_3(), VAR_4 = FUNC_5();
 boolean_t VAR_5;

 VAR_5 = FUNC_6(VAR_0);

 for (uint32_t VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  if (((1ULL << VAR_6) & VAR_1) == 0)
   continue;
  FUNC_0(FUNC_4(VAR_4 + VAR_6));

  if ((1ULL << VAR_6) & VAR_2) {
   FUNC_2(VAR_4 + VAR_6);
  } else {
   FUNC_1(VAR_4 + VAR_6);
  }
 }

 FUNC_6(VAR_5);
}

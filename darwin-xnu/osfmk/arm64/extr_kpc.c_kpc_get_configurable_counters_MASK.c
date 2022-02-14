
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;


 unsigned long long FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_2 (unsigned long long*) ;
 unsigned long long FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long long FUNC_5 () ;
 unsigned long long FUNC_6 (unsigned long long) ;

int
FUNC_7(uint64_t *VAR_2, uint64_t VAR_3)
{
 uint32_t VAR_4 = FUNC_3(), VAR_5 = FUNC_5();
 uint64_t VAR_6 = 0ULL;

 FUNC_2(VAR_2);

 for (uint32_t VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
  if (((1ULL << VAR_7) & VAR_3) == 0)
   continue;
  VAR_6 = FUNC_6(VAR_7 + VAR_5);

  if (VAR_6 & VAR_1) {
   VAR_6 = FUNC_1(VAR_7) +
    (FUNC_4() - FUNC_0(VAR_7) + 1 ) +
    (VAR_6 & VAR_0);
  } else {
   VAR_6 = FUNC_1(VAR_7) +
    (VAR_6 - FUNC_0(VAR_7));
  }

  *VAR_2++ = VAR_6;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int uint32_t ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long long*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 unsigned long long FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(uint32_t VAR_4, uint64_t *VAR_5)
{
 uint32_t VAR_6 = 0 ;
 uint64_t VAR_7 = 0ULL;

 FUNC_2(VAR_5);

 FUNC_8(&VAR_3);

 if (VAR_4 & VAR_1) {

  VAR_6 = FUNC_7(VAR_1);
  for (uint32_t VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
   *VAR_5++ = FUNC_5() - FUNC_1(VAR_8);
 }

 if (VAR_4 & VAR_0) {
  VAR_7 = FUNC_6(VAR_0);


  VAR_6 = FUNC_3();
  for (uint32_t VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
   if ((1ULL << VAR_9) & VAR_7)
    *VAR_5++ = FUNC_4() - FUNC_0(VAR_9);
 }

 if (VAR_4 & VAR_2) {
  VAR_7 = FUNC_6(VAR_2);


  VAR_6 = FUNC_3();
  for (uint32_t VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10)
   if ((1ULL << VAR_10) & VAR_7)
    *VAR_5++ = FUNC_4() - FUNC_0(VAR_10);
 }

 FUNC_9(&VAR_3);

 return 0;
}

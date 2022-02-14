
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

boolean_t
FUNC_4(uint32_t VAR_5)
{
 uint64_t VAR_6 = 0ULL;

 FUNC_0(VAR_5 < (FUNC_3() + FUNC_1()));

 if (VAR_5 < FUNC_3())
  return FUNC_2();







 VAR_6 = (1ULL << (VAR_5 - FUNC_3()));
 if ((VAR_6 & VAR_4) && VAR_3 && !VAR_2)
  return VAR_0;

 return VAR_1;
}

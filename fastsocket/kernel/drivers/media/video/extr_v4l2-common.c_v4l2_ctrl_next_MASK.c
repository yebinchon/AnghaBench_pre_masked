
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ VAR_1 ;

u32 FUNC_1(const u32 * const * VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3);
 const u32 *VAR_5;

 if (VAR_2 == ((void*)0))
  return 0;


 if ((VAR_3 & VAR_0) == 0) {

  while (*VAR_2 && FUNC_0(**VAR_2) != VAR_4)
   VAR_2++;
  if (*VAR_2 == ((void*)0))
   return 0;
  VAR_5 = *VAR_2;

  while (*VAR_5 && *VAR_5 != VAR_3) VAR_5++;
  return *VAR_5 ? VAR_3 : 0;
 }
 VAR_3 &= VAR_1;
 VAR_3++;


 while (*VAR_2 && FUNC_0(**VAR_2) < VAR_4)
  VAR_2++;

 if (*VAR_2 == ((void*)0))
  return 0;
 VAR_5 = *VAR_2;

 while (*VAR_5 && *VAR_5 < VAR_3) VAR_5++;
 if (*VAR_5)
  return *VAR_5;


 VAR_2++;
 if (*VAR_2 == ((void*)0))
  return 0;
 return **VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Rune ;



Rune*
FUNC_0(const Rune *VAR_0, Rune VAR_1)
{
 Rune VAR_2 = VAR_1;
 Rune VAR_3;

 if(VAR_1 == 0) {
  while(*VAR_0++)
   ;
  return (Rune*)VAR_0-1;
 }

 while((VAR_3 = *VAR_0++))
  if(VAR_3 == VAR_2)
   return (Rune*)VAR_0-1;
 return 0;
}

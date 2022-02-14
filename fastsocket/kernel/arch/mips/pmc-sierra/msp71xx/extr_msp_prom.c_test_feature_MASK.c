
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char* FUNC_0 () ;

__attribute__((used)) static char FUNC_1(char VAR_1)
{
 char *VAR_2 = FUNC_0();

 while (*VAR_2) {
  if (*VAR_2++ == VAR_1)
   return *VAR_2;
  VAR_2++;
 }

 return VAR_0;
}

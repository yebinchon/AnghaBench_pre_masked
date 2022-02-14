
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char* FUNC_0 () ;

__attribute__((used)) static char FUNC_1(char VAR_1, unsigned long VAR_2)
{
 char *VAR_3 = FUNC_0();

 while (*VAR_3) {
  if (*VAR_3++ == VAR_1 && VAR_2-- == 0)
   return *VAR_3;
  VAR_3++;
 }

 return VAR_0;
}

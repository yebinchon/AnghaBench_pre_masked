
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 char FUNC_2 (char const) ;

unsigned long FUNC_3(const char *VAR_0,char **VAR_1,unsigned int VAR_2)
{
 unsigned long VAR_3 = 0,VAR_4;

 if (!VAR_2) {
  VAR_2 = 10;
  if (*VAR_0 == '0') {
   VAR_2 = 8;
   VAR_0++;
   if ((*VAR_0 == 'x') && FUNC_1(VAR_0[1])) {
    VAR_0++;
    VAR_2 = 16;
   }
  }
 }
 while (FUNC_1(*VAR_0) &&
        (VAR_4 = FUNC_0(*VAR_0) ? *VAR_0-'0' : FUNC_2(*VAR_0)-'A'+10) < VAR_2) {
  VAR_3 = VAR_3*VAR_2 + VAR_4;
  VAR_0++;
 }
 if (VAR_1)
  *VAR_1 = (char *)VAR_0;
 return VAR_3;
}

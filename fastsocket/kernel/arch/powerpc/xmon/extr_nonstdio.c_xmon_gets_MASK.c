
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

char *FUNC_1(char *VAR_0, int VAR_1)
{
 char *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_0; VAR_2 < VAR_0 + VAR_1 - 1; ) {
  VAR_3 = FUNC_0();
  if (VAR_3 == -1) {
   if (VAR_2 == VAR_0)
    return ((void*)0);
   break;
  }
  *VAR_2++ = VAR_3;
  if (VAR_3 == '\n')
   break;
 }
 *VAR_2 = 0;
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;

char* FUNC_2(char* VAR_0)
{
 char* VAR_1;
 for (;;)
 {
  if (VAR_0[0] == 0 || !FUNC_0(VAR_0[0]))
   break;
  VAR_0++;
 }

 if (FUNC_1(VAR_0) == 0)
  return VAR_0;

 VAR_1 = VAR_0+FUNC_1(VAR_0)-1;
 for (;;)
 {
  if (VAR_1 <= VAR_0 || !FUNC_0(VAR_1[0]))
  {
   VAR_1[1] = '\0';
   break;
  }
  VAR_1--;
 }

 return VAR_0;
}

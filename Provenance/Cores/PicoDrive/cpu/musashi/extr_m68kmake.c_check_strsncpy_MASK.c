
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(char* VAR_0, char* VAR_1, int VAR_2)
{
 char* VAR_3 = VAR_0;
 while(*VAR_1 && *VAR_1 != ' ')
 {
  *VAR_3++ = *VAR_1++;
  if(VAR_3 - VAR_0 > VAR_2)
   FUNC_0("Field too long");
 }
 *VAR_3 = 0;
 return VAR_3 - VAR_0;
}

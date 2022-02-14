
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(char* VAR_0, char* VAR_1, char VAR_2, int VAR_3)
{
 char* VAR_4 = VAR_0;
 while(*VAR_1 && *VAR_1 != VAR_2)
 {
  *VAR_4++ = *VAR_1++;
  if(VAR_4 - VAR_0 > VAR_3)
   FUNC_0("Field too long");
 }
 *VAR_4 = 0;
 return VAR_4 - VAR_0;
}

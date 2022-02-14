
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;

BOOLEAN FUNC_1(char *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_2, *VAR_5 = VAR_3;

 if (FUNC_0(VAR_2) != FUNC_0(VAR_3))
  return VAR_0;

 while(*VAR_4 != '\0')
 {
  if((*VAR_4 != *VAR_5) && ((*VAR_4 ^ *VAR_5) != 0x20))
   return VAR_0;
  VAR_4++;
  VAR_5++;
 }

 return VAR_1;
}

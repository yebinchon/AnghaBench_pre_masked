
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(const char *VAR_3, const char *VAR_4)
{
 unsigned int VAR_5;
 const char *VAR_6 = VAR_3;
 const char *VAR_7 = VAR_4;





 for (VAR_5 = 1; VAR_5 <= VAR_1; VAR_6++, VAR_7++, VAR_5++) {







  if (*VAR_6 != *VAR_7 && !(*VAR_6 == ' ' && *VAR_7 == '.'))
   break;





  if (*VAR_6 == '\0')
   return VAR_2;
 }

 return VAR_0;
}

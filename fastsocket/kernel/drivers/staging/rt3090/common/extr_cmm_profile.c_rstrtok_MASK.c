
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PSTRING ;


 char* VAR_0 ;
 char* FUNC_0 (char*,char* const) ;
 int FUNC_1 (char*,char* const) ;

PSTRING FUNC_2(PSTRING VAR_1,const PSTRING VAR_2)
{
 PSTRING VAR_3, VAR_4;

 VAR_3 = VAR_1 ? VAR_1 : VAR_0;
 if (!VAR_3)
 {
  return ((void*)0);
 }

 VAR_3 += FUNC_1(VAR_3,VAR_2);
 if (*VAR_3 == '\0')
 {
  VAR_0 = ((void*)0);
  return( ((void*)0) );
 }

 VAR_4 = FUNC_0( VAR_3, VAR_2);
 if (VAR_4 && *VAR_4 != '\0')
  *VAR_4++ = '\0';

 VAR_0 = VAR_4;

 return (VAR_3);
}

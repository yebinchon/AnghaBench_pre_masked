
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;

char * FUNC_2(char * VAR_1,const char * VAR_2)
{
 char *VAR_3, *VAR_4;

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

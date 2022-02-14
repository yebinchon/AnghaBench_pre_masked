
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

char *
FUNC_1(FILE *VAR_1)
{
 static char VAR_2[80];
 int VAR_3;
 char *VAR_4;

 VAR_4 = VAR_2;
 while ((VAR_3 = FUNC_0(VAR_1)) != VAR_0) {
  if (VAR_3 == '\n')
   break;
  *VAR_4++ = VAR_3;
 }
 *VAR_4 = 0;
 if (VAR_3 == VAR_0)
  return ((char *)VAR_0);
 return (VAR_2);
}

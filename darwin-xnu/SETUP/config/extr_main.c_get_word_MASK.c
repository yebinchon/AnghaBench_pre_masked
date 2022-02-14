
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;

const char *
FUNC_3(FILE *VAR_1)
{
 static char VAR_2[80];
 int VAR_3;
 char *VAR_4;

 while ((VAR_3 = FUNC_0(VAR_1)) != VAR_0)
  if (VAR_3 != ' ' && VAR_3 != '\t')
   break;
 if (VAR_3 == VAR_0)
  return ((char *)VAR_0);
 if (VAR_3 == '\n')
  return (((void*)0));
 if (VAR_3 == '|')
  return( "|");
 VAR_4 = VAR_2;
 *VAR_4++ = VAR_3;
 while ((VAR_3 = FUNC_0(VAR_1)) != VAR_0) {
  if (FUNC_1(VAR_3))
   break;
  *VAR_4++ = VAR_3;
 }
 *VAR_4 = 0;
 if (VAR_3 == VAR_0)
  return ((char *)VAR_0);
 (void) FUNC_2(VAR_3, VAR_1);
 return (VAR_2);
}

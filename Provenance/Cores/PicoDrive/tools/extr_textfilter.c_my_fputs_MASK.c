
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, FILE *VAR_1)
{
 char *VAR_2;

 for (VAR_2 = VAR_0 + FUNC_3(VAR_0) - 1; VAR_2 >= VAR_0; VAR_2--)
  if (!FUNC_1(*VAR_2))
   break;
 VAR_2++;


 FUNC_2(VAR_2, "\r\n", 3);

 return FUNC_0(VAR_0, VAR_1);
}

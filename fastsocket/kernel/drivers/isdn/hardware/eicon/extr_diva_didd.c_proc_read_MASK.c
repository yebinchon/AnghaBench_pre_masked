
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_0 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*,char*,char*,...) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_6, char **VAR_7, off_t VAR_8, int VAR_9, int *VAR_10,
   void *VAR_11)
{
 int VAR_12 = 0;
 char VAR_13[32];

 FUNC_2(VAR_13, VAR_5);
 VAR_12 += FUNC_1(VAR_6 + VAR_12, "%s\n", VAR_2);
 VAR_12 += FUNC_1(VAR_6 + VAR_12, "name     : %s\n", VAR_1);
 VAR_12 += FUNC_1(VAR_6 + VAR_12, "release  : %s\n", VAR_3);
 VAR_12 += FUNC_1(VAR_6 + VAR_12, "build    : %s(%s)\n",
         VAR_4, VAR_0);
 VAR_12 += FUNC_1(VAR_6 + VAR_12, "revision : %s\n", FUNC_0(VAR_13));

 if (VAR_8 + VAR_9 >= VAR_12)
  *VAR_10 = 1;
 if (VAR_12 < VAR_8)
  return 0;
 *VAR_7 = VAR_6 + VAR_8;
 return ((VAR_9 < VAR_12 - VAR_8) ? VAR_9 : VAR_12 - VAR_8);
}

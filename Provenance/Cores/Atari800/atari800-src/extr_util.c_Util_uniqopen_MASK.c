
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,char const*) ;
 int * FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,char*,int) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;

FILE *FUNC_8(char *VAR_1, const char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 1000000; VAR_3++) {
  FUNC_5(VAR_1, VAR_0, "a8%06d", VAR_3);
  if (!FUNC_0(VAR_1))
   return FUNC_2(VAR_1, VAR_2);
 }
 return ((void*)0);

}

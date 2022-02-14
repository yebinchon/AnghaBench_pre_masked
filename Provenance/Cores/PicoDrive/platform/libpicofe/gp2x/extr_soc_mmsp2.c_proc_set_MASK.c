
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1)
{
 FILE *VAR_2;
 char VAR_3[16];

 VAR_2 = FUNC_2(VAR_0, "w");
 if (VAR_2 == ((void*)0)) {
  FUNC_4("failed to open: %s\n", VAR_0);
  return;
 }

 FUNC_3(VAR_2, "0\n");
 FUNC_0(VAR_2);

 FUNC_4("\"%s\" is set to: ", VAR_0);
 VAR_2 = FUNC_2(VAR_0, "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_4("(open failed)\n");
  return;
 }

 FUNC_1(VAR_3, sizeof(VAR_3), VAR_2);
 FUNC_4("%s", VAR_3);
 FUNC_0(VAR_2);
}

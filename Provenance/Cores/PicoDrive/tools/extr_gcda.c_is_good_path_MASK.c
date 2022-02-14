
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0);

 VAR_0[VAR_1-2] = 'n';
 VAR_0[VAR_1-1] = 'o';

 FILE *VAR_2 = FUNC_1(VAR_0, "rb");

 VAR_0[VAR_1-2] = 'd';
 VAR_0[VAR_1-1] = 'a';

 if (VAR_2) {
  FUNC_0(VAR_2);
  return 1;
 }
 FUNC_2("not good path: %s\n", VAR_0);
 return 0;
}

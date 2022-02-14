
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,int*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
 int VAR_1 = -1;
 FILE *VAR_2;

 VAR_2 = FUNC_1(VAR_0, "r");
 if (VAR_2) {
  FUNC_2(VAR_2, "%d", &VAR_1);
  FUNC_0(VAR_2);
 }
 return VAR_1;
}

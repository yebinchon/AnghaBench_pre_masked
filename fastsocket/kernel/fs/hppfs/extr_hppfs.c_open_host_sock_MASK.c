
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_0[FUNC_2(VAR_0)];
 FUNC_1(VAR_2, "/rw");
 *VAR_1 = 1;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 > 0)
  return VAR_3;

 FUNC_1(VAR_2, "/r");
 *VAR_1 = 0;
 VAR_3 = FUNC_0(VAR_0);
 return VAR_3;
}

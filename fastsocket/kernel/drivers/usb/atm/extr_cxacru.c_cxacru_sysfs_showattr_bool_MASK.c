
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(u32 VAR_1, char *VAR_2)
{
 static char *VAR_3[] = { "no", "yes" };
 if (FUNC_2(VAR_1 >= FUNC_0(VAR_3)))
  return FUNC_1(VAR_2, VAR_0, "%u\n", VAR_1);
 return FUNC_1(VAR_2, VAR_0, "%s\n", VAR_3[VAR_1]);
}

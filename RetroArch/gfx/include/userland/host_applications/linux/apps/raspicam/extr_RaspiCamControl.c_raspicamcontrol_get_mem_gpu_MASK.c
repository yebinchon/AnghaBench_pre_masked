
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_2(void)
{
   char VAR_0[80] = "";
   int VAR_1 = 0;
   if (FUNC_0(VAR_0, sizeof VAR_0, "get_mem gpu") == 0)
      FUNC_1(VAR_0, "gpu", &VAR_1);
   return VAR_1;
}

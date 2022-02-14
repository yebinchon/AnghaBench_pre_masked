
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char*,int*) ;

__attribute__((used)) static void FUNC_2(int *VAR_0, int *VAR_1)
{
   char VAR_2[80] = "";
   if (FUNC_0(VAR_2, sizeof VAR_2, "get_camera") == 0)
   {
      if (VAR_0)
         FUNC_1(VAR_2, "supported", VAR_0);
      if (VAR_1)
         FUNC_1(VAR_2, "detected", VAR_1);
   }
}

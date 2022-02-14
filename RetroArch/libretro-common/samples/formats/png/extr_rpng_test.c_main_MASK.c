
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(int VAR_1, char *VAR_2[])
{
   const char *VAR_3 = "/tmp/test.png";

   if (VAR_1 > 2)
   {
      FUNC_0(VAR_0, "Usage: %s <png file>\n", VAR_2[0]);
      return 1;
   }

   if (VAR_1 == 2)
      VAR_3 = VAR_2[1];

   FUNC_0(VAR_0, "Doing tests...\n");

   if (FUNC_1(VAR_3) != 0)
   {
      FUNC_0(VAR_0, "Test failed.\n");
      return -1;
   }

   return 0;
}

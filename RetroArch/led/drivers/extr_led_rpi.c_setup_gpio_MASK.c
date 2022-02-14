
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_5(int VAR_0)
{
   FILE *VAR_1;
   char VAR_2[256];
   FUNC_4(VAR_2, sizeof(VAR_2), "/sys/class/gpio/gpio%d/direction", VAR_0);
   VAR_1 = FUNC_2(VAR_2, "w");

   if(!VAR_1)
   {
      FUNC_4(VAR_2, sizeof(VAR_2), "/sys/class/gpio/export");
      VAR_1 = FUNC_2(VAR_2, "w");

      if(!VAR_1)
      {
         FUNC_0("[LED]: failed to export GPIO %d\n", VAR_0);
         return -1;
      }

      FUNC_3(VAR_1,"%d\n", VAR_0);
      FUNC_1(VAR_1);

      FUNC_4(VAR_2, sizeof(VAR_2), "/sys/class/gpio/gpio%d/direction", VAR_0);
      VAR_1 = FUNC_2(VAR_2, "w");
   }

   if(!VAR_1)
   {
      FUNC_0("[LED]: failed to set direction GPIO %d\n",
            VAR_0);
      return -1;
   }

   FUNC_3(VAR_1, "out\n");
   FUNC_1(VAR_1);
   return 1;
}

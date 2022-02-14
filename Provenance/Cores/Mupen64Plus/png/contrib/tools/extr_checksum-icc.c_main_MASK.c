
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,char*) ;
 int VAR_0 ;
 int * VAR_1 ;

int FUNC_6(int VAR_2, char **VAR_3)
{
   int VAR_4 = 0;

   FUNC_4("/* adler32, crc32, MD5[16], intent, date, length, file-name */\n");

   if (VAR_2 > 1)
   {
      int VAR_5;

      for (VAR_5=1; VAR_5<VAR_2; ++VAR_5)
      {
         FILE *VAR_6 = FUNC_1(VAR_3[VAR_5], "rb");

         if (VAR_6 == ((void*)0) || !FUNC_5(VAR_6, VAR_3[VAR_5]))
         {
            VAR_4 = 1;
            FUNC_3(VAR_3[VAR_5]);
            FUNC_2(VAR_0, "%s: read error\n", VAR_3[VAR_5]);
            FUNC_4("/* ERROR: %s */\n", VAR_3[VAR_5]);
         }

         (void)FUNC_0(VAR_6);
      }
   }

   else
   {
      if (!FUNC_5(VAR_1, "-"))
      {
         VAR_4 = 1;
         FUNC_3("stdin");
         FUNC_2(VAR_0, "stdin: read error\n");
         FUNC_4("/* ERROR: stdin */\n");
      }
   }

   return VAR_4;
}

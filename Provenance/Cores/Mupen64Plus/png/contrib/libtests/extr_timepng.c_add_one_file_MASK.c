
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fpos_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(FILE *VAR_1, char *VAR_2)
{
   FILE *VAR_3 = FUNC_4(VAR_2, "rb");

   if (VAR_3 != ((void*)0))
   {



      int VAR_4 = 0;
      fpos_t VAR_5;

      if (FUNC_3(VAR_1, &VAR_5))
      {

         FUNC_7("temporary file");
         FUNC_5(VAR_0, "temporary file fgetpos error\n");
         FUNC_0(1);
      }

      if (FUNC_8(VAR_3, -1 , VAR_1 ))
      {
         if (FUNC_2(VAR_3))
         {
            FUNC_7(VAR_2);
            FUNC_5(VAR_0, "%s: read error\n", VAR_2);
         }

         else
            VAR_4 = 1;
      }

      else
         FUNC_5(VAR_0, "%s: file not added\n", VAR_2);

      (void)FUNC_1(VAR_3);


      if (FUNC_2(VAR_1))
      {
         FUNC_7("temporary file");
         FUNC_5(VAR_0, "temporary file write error\n");
         FUNC_0(1);
      }

      if (VAR_4)
         return 1;





      if (FUNC_6(VAR_1, &VAR_5))
      {
         FUNC_7("temporary file");
         FUNC_5(VAR_0, "temporary file fsetpos error\n");
         FUNC_0(1);
      }
   }

   else
   {

      FUNC_7(VAR_2);
      FUNC_5(VAR_0, "%s: open failed\n", VAR_2);
   }

   return 0;
}

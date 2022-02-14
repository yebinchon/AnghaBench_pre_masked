
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (char*,char const*,char*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;

char *FUNC_14(const char *VAR_3)
{
   char *VAR_4 = ((void*)0);
   RFILE *VAR_5 = ((void*)0);
   char *VAR_6 = ((void*)0);

   if (FUNC_10(VAR_3))
     goto end;
   if (!FUNC_9(VAR_3))
     goto end;

   VAR_5 = FUNC_3(VAR_3, VAR_2, VAR_1);

   if (!VAR_5)
     goto end;

   VAR_6 = FUNC_2(VAR_5);
   FUNC_1(VAR_5);

   if (VAR_6 && !FUNC_13("#reference", VAR_6, FUNC_0("#reference")))
   {
      char *VAR_7 = VAR_6 + FUNC_0("#reference");


      if (!FUNC_6(*VAR_7))
         goto end;
      VAR_7++;

      while (FUNC_6(*VAR_7))
         VAR_7++;

      if (*VAR_7 == '\"')
      {

         char *VAR_8;
         VAR_7++;

         VAR_8 = VAR_7;
         while (*VAR_8 != '\0' && *VAR_8 != '\"')
            VAR_8++;

         if (*VAR_8 == '\"')
         {
            *VAR_8 = '\0';
         }
         else
         {

            VAR_8--;
            while (FUNC_6(*VAR_8))
               *VAR_8-- = '\0';
         }
      }
      else
      {

         char *VAR_9 = VAR_7 + FUNC_12(VAR_7) - 1;
         while (FUNC_6(*VAR_9))
            *VAR_9-- = '\0';
      }

      if (FUNC_10(VAR_7))
         goto end;

      VAR_4 = (char *)FUNC_7(VAR_0);

      if (!VAR_4)
         goto end;


      if (!FUNC_8(VAR_7))
      {
         FUNC_4(VAR_4,
               VAR_3, VAR_7, VAR_0);
      }
      else
         FUNC_11(VAR_4, VAR_7, VAR_0);
   }

end:
   if (VAR_6)
      FUNC_5(VAR_6);

   return VAR_4;
}

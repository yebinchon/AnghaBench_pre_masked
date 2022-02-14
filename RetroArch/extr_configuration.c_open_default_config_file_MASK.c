
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_file_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,int) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,size_t) ;
 int FUNC_10 (char*,size_t) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (char*,size_t) ;
 int FUNC_13 (char*,char*,char*,size_t) ;
 int FUNC_14 (char*,char*,char*,size_t) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (char*,char*,size_t) ;
 int FUNC_21 (char*,char*,size_t) ;

__attribute__((used)) static config_file_t *FUNC_22(void)
{
   bool VAR_4 = 0;
   size_t VAR_5 = VAR_2 * sizeof(char);
   char *VAR_6 = (char*)FUNC_17(VAR_2 * sizeof(char));
   char *VAR_7 = (char*)FUNC_17(VAR_2 * sizeof(char));
   char *VAR_8 = (char*)FUNC_17(VAR_2 * sizeof(char));
   config_file_t *VAR_9 = ((void*)0);

   (void)VAR_4;
   (void)VAR_5;

   VAR_6[0] = VAR_7[0] = VAR_8[0] = '\0';
   VAR_4 =
      FUNC_9(VAR_6,
            VAR_5);

   if (VAR_4)
   {
      FUNC_13(VAR_7, VAR_6,
            FUNC_8(VAR_0), VAR_5);
      FUNC_1("Looking for config in: \"%s\".\n", VAR_7);
      VAR_9 = FUNC_5(VAR_7);
   }


   if (!VAR_9 && FUNC_16("HOME"))
   {
      FUNC_13(VAR_7, FUNC_16("HOME"),
            ".retroarch.cfg", VAR_5);
      FUNC_1("Looking for config in: \"%s\".\n", VAR_7);
      VAR_9 = FUNC_5(VAR_7);
   }

   if (!VAR_9 && VAR_4)
   {
      bool VAR_10 = 0;
      char *VAR_11 = (char*)FUNC_17(VAR_2 * sizeof(char));

      VAR_11[0] = '\0';



      FUNC_21(VAR_7, VAR_6, VAR_5);

      FUNC_11(VAR_11, VAR_7, VAR_5);

      FUNC_13(VAR_7, VAR_7,
            FUNC_8(VAR_0), VAR_5);

      VAR_10 = FUNC_18(VAR_11);
      FUNC_15(VAR_11);

      if (VAR_10)
      {
         char *VAR_12 = (char*)FUNC_17(VAR_2 * sizeof(char));
         bool VAR_13 = 0;

         VAR_12[0] = '\0';



         FUNC_13(VAR_12, VAR_1,
            FUNC_8(VAR_0), VAR_5);

         VAR_9 = FUNC_5(VAR_12);
         if (VAR_9)
            FUNC_2("Config: using skeleton config \"%s\" as base for a new config file.\n", VAR_12);
         else
            VAR_9 = FUNC_4();

         FUNC_15(VAR_12);

         if (VAR_9)
         {


            FUNC_7(VAR_9, "config_save_on_exit", 1);
            VAR_13 = FUNC_6(VAR_9, VAR_7, 1);
         }

         if (!VAR_13)
         {

            FUNC_0("Failed to create new config file in: \"%s\".\n", VAR_7);
            goto error;
         }

         FUNC_2("Config: Created new config file in: \"%s\".\n", VAR_7);
      }
   }


   (void)VAR_6;
   (void)VAR_7;
   (void)VAR_8;

   if (!VAR_9)
      goto error;

   FUNC_19(VAR_3, VAR_7);
   FUNC_15(VAR_6);
   FUNC_15(VAR_7);
   FUNC_15(VAR_8);

   return VAR_9;

error:
   if (VAR_9)
      FUNC_3(VAR_9);
   FUNC_15(VAR_6);
   FUNC_15(VAR_7);
   FUNC_15(VAR_8);
   return ((void*)0);
}

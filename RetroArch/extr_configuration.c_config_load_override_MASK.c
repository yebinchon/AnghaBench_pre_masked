
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* library_name; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ rarch_system_info_t ;
typedef int content_dir_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,size_t,int ) ;
 int FUNC_5 (char*,char*,char const*,char const*,char*,size_t) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *) ;
 TYPE_2__* FUNC_17 () ;
 int FUNC_18 (int ,int,int,int,int *,int ,int ) ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (char*,char*,size_t) ;
 int FUNC_21 (char*,char*,size_t) ;

bool FUNC_22(void)
{
   size_t VAR_11 = VAR_4 * sizeof(char);
   char *VAR_12 = ((void*)0);
   char *VAR_13 = ((void*)0);
   char *VAR_14 = ((void*)0);
   char *VAR_15 = ((void*)0);
   char *VAR_16 = ((void*)0);
   bool VAR_17 = 0;
   rarch_system_info_t *VAR_18 = FUNC_17();
   const char *VAR_19 = VAR_18 ?
      VAR_18->info.library_name : ((void*)0);
   const char *VAR_20 = FUNC_13(VAR_7);
   const char *VAR_21 = FUNC_11(VAR_20);
   char VAR_22[VAR_4];

   if (!FUNC_19(VAR_20))
      FUNC_6(VAR_22,
            VAR_20, sizeof(VAR_22));

   if (FUNC_19(VAR_19) || FUNC_19(VAR_21))
      return 0;

   VAR_14 = (char*)
      FUNC_9(VAR_4 * sizeof(char));
   VAR_13 = (char*)
      FUNC_9(VAR_4 * sizeof(char));
   VAR_15 = (char*)
      FUNC_9(VAR_4 * sizeof(char));
   VAR_12 = (char*)
      FUNC_9(VAR_4 * sizeof(char));
   VAR_16 = (char*)
      FUNC_9(VAR_4 * sizeof(char));
   VAR_16[0] = VAR_13[0] = VAR_14[0] = '\0';

   FUNC_4(VAR_16, VAR_11,
         VAR_0);


   FUNC_5(VAR_14,
         VAR_16, VAR_19,
         VAR_21,
         ".cfg",
         VAR_11);

   FUNC_5(VAR_15,
      VAR_16, VAR_19,
      VAR_22,
      ".cfg",
      VAR_11);

   FUNC_5(VAR_13,
         VAR_16, VAR_19,
         VAR_19,
         ".cfg",
         VAR_11);

   FUNC_7(VAR_16);



   if (FUNC_1(VAR_13))
   {
      FUNC_0("[Overrides] core-specific overrides found at %s.\n",
            VAR_13);

      FUNC_14(VAR_9, VAR_13);

      VAR_17 = 1;
   }
   else
      FUNC_0("[Overrides] no core-specific overrides found at %s.\n",
            VAR_13);



   if (FUNC_1(VAR_15))
   {
      char *VAR_23 = (char*)FUNC_9(VAR_4 * sizeof(char));

      VAR_23[0] = '\0';

      FUNC_0("[Overrides] content-dir-specific overrides found at %s.\n",
            VAR_14);

      if (VAR_17)
      {
         FUNC_0("[Overrides] content-dir-specific overrides stacking on top of previous overrides.\n");
         FUNC_21(VAR_23, FUNC_13(VAR_9), VAR_11);
         FUNC_20(VAR_23, "|", VAR_11);
         FUNC_20(VAR_23, VAR_15, VAR_11);
      }
      else
         FUNC_21(VAR_23, VAR_15, VAR_11);

      FUNC_14(VAR_9, VAR_23);

      FUNC_7(VAR_23);

      VAR_17 = 1;
   }
   else
      FUNC_0("[Overrides] no content-dir-specific overrides found at %s.\n",
         VAR_15);



   if (FUNC_1(VAR_14))
   {
      char *VAR_24 = (char*)FUNC_9(VAR_4 * sizeof(char));

      VAR_24[0] = '\0';

      FUNC_0("[Overrides] game-specific overrides found at %s.\n",
            VAR_14);

      if (VAR_17)
      {
         FUNC_0("[Overrides] game-specific overrides stacking on top of previous overrides\n");
         FUNC_21(VAR_24, FUNC_13(VAR_9), VAR_11);
         FUNC_20(VAR_24, "|", VAR_11);
         FUNC_20(VAR_24, VAR_14, VAR_11);
      }
      else
         FUNC_21(VAR_24, VAR_14, VAR_11);

      FUNC_14(VAR_9, VAR_24);

      FUNC_7(VAR_24);

      VAR_17 = 1;
   }
   else
      FUNC_0("[Overrides] no game-specific overrides found at %s.\n",
            VAR_14);

   if (!VAR_17)
      goto error;



   VAR_12[0] = '\0';



   FUNC_21(VAR_12, FUNC_13(VAR_10), VAR_11);


   FUNC_16(VAR_6, ((void*)0));
   FUNC_16(VAR_5, ((void*)0));

   if (!FUNC_3(FUNC_8(),
            FUNC_13(VAR_8), FUNC_2()))
      goto error;



   FUNC_14(VAR_10, VAR_12);
   FUNC_18(FUNC_10(VAR_3),
         1, 100, 1,
         ((void*)0), VAR_2, VAR_1);


   FUNC_15(VAR_6, ((void*)0));
   FUNC_15(VAR_5, ((void*)0));

   FUNC_12(VAR_9);

   FUNC_7(VAR_12);
   FUNC_7(VAR_13);
   FUNC_7(VAR_15);
   FUNC_7(VAR_14);
   return 1;

error:
   FUNC_7(VAR_12);
   FUNC_7(VAR_13);
   FUNC_7(VAR_15);
   FUNC_7(VAR_14);
   return 0;
}

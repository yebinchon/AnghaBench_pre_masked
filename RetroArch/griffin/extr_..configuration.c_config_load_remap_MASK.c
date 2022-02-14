
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
typedef int config_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 int VAR_7 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char const*,char const*,char*,size_t) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (char const*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 TYPE_2__* FUNC_12 () ;
 int FUNC_13 (int ,int,int,int,int *,int ,int ) ;
 scalar_t__ FUNC_14 (char const*) ;
 int FUNC_15 (char*,char const*,size_t) ;

bool FUNC_16(const char *VAR_8)
{
   size_t VAR_9 = VAR_3 * sizeof(char);
   config_file_t *VAR_10 = ((void*)0);
   char *VAR_11 = ((void*)0);
   char *VAR_12 = ((void*)0);
   char *VAR_13 = ((void*)0);
   char *VAR_14 = ((void*)0);
   rarch_system_info_t *VAR_15 = FUNC_12();
   const char *VAR_16 = VAR_15 ? VAR_15->info.library_name : ((void*)0);
   const char *VAR_17 = FUNC_10(VAR_7);
   const char *VAR_18 = FUNC_9(VAR_17);
   char VAR_19[VAR_3];

   if (FUNC_14(VAR_16) || FUNC_14(VAR_18))
      return 0;



   if (FUNC_14(VAR_8))
      return 0;

   if (!FUNC_14(VAR_17))
      FUNC_3(VAR_19,
            VAR_17, sizeof(VAR_19));


   VAR_11 = (char*)
      FUNC_7(VAR_3 * sizeof(char));

   VAR_12 = (char*)
      FUNC_7(VAR_3 * sizeof(char));

   VAR_13 = (char*)
      FUNC_7(VAR_3 * sizeof(char));

   VAR_14 = (char*)
      FUNC_7(VAR_3 * sizeof(char));
   VAR_11[0] = VAR_12[0] = VAR_13[0] = '\0';

   FUNC_15(VAR_11, VAR_8, VAR_9);
   FUNC_0("[Remaps]: remap directory: %s\n", VAR_11);


   FUNC_2(VAR_12,
         VAR_11, VAR_16,
         VAR_16,
         ".rmp",
         VAR_9);

   FUNC_2(VAR_14,
         VAR_11, VAR_16,
         VAR_19,
         ".rmp",
         VAR_9);

   FUNC_2(VAR_13,
         VAR_11, VAR_16,
         VAR_18,
         ".rmp",
         VAR_9);

   FUNC_6(0);


   if ((VAR_10 = FUNC_1(VAR_13)))
   {
      FUNC_0("[Remaps]: game-specific remap found at %s.\n", VAR_13);
      if (FUNC_5(VAR_10, VAR_13))
      {
         FUNC_11(VAR_6, ((void*)0));
         goto success;
      }
   }


   if ((VAR_10 = FUNC_1(VAR_14)))
   {
      FUNC_0("[Remaps]: content-dir-specific remap found at %s.\n", VAR_14);
      if (FUNC_5(VAR_10, VAR_14))
      {
         FUNC_11(VAR_4, ((void*)0));
         goto success;
      }
   }


   if ((VAR_10 = FUNC_1(VAR_12)))
   {
      FUNC_0("[Remaps]: core-specific remap found at %s.\n", VAR_12);
      if (FUNC_5(VAR_10, VAR_12))
      {
         FUNC_11(VAR_5, ((void*)0));
         goto success;
      }
   }

   VAR_10 = ((void*)0);

   FUNC_4(VAR_14);
   FUNC_4(VAR_11);
   FUNC_4(VAR_12);
   FUNC_4(VAR_13);
   return 0;

success:
   FUNC_13(FUNC_8(
            VAR_2), 1, 100, 1,
         ((void*)0), VAR_1, VAR_0);
   FUNC_4(VAR_14);
   FUNC_4(VAR_11);
   FUNC_4(VAR_12);
   FUNC_4(VAR_13);
   return 1;
}

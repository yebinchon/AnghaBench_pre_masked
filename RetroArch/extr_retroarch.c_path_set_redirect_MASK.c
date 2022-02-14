
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct retro_system_info {char* library_name; } ;
struct TYPE_8__ {scalar_t__ savestates_in_content_dir; scalar_t__ savefiles_in_content_dir; scalar_t__ sort_savestates_enable; scalar_t__ sort_savefiles_enable; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_9__ {char* savefile; char* savestate; char* cheatfile; } ;
struct TYPE_11__ {TYPE_2__ name; } ;
typedef TYPE_4__ global_t ;
struct TYPE_12__ {struct retro_system_info info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ,char const*) ;
 TYPE_3__* VAR_11 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,char*,int) ;
 int FUNC_4 (char*,char const*,char*,size_t) ;
 int FUNC_5 (char*) ;
 TYPE_4__ VAR_12 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 char* VAR_13 ;
 int FUNC_10 (char*) ;
 TYPE_5__ VAR_14 ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_14(void)
{
   size_t VAR_15 = VAR_6 * sizeof(char);
   char *VAR_16 = (char*)FUNC_6(VAR_6 * sizeof(char));
   char *VAR_17 = (char*)FUNC_6(VAR_6 * sizeof(char));
   global_t *VAR_18 = &VAR_12;
   const char *VAR_19 = FUNC_1(VAR_9);
   const char *VAR_20 = FUNC_1(VAR_10);
   struct retro_system_info *VAR_21 = &VAR_14.info;
   settings_t *VAR_22 = VAR_11;

   VAR_16[0] = VAR_17[0] = '\0';



   FUNC_13(VAR_16, VAR_19, VAR_15);
   FUNC_13(VAR_17, VAR_20, VAR_15);

   if (VAR_21 && !FUNC_11(VAR_21->library_name))
   {




      {

         if (VAR_22->bools.sort_savefiles_enable
               && !FUNC_11(VAR_19))
         {
            FUNC_4(
                  VAR_16,
                  VAR_19,
                  VAR_21->library_name,
                  VAR_15);



            if (!FUNC_9(VAR_16))
               if (!FUNC_10(VAR_16))
               {
                  FUNC_0("%s %s\n",
                        FUNC_7(VAR_4),
                        VAR_19);

                  FUNC_13(VAR_16, VAR_19, VAR_15);
               }
         }


         if (VAR_22->bools.sort_savestates_enable
               && !FUNC_11(VAR_20))
         {
            FUNC_4(
                  VAR_17,
                  VAR_20,
                  VAR_21->library_name,
                  VAR_15);



            if (!FUNC_9(VAR_17))
               if (!FUNC_10(VAR_17))
               {
                  FUNC_0("%s %s\n",
                        FUNC_7(VAR_5),
                        VAR_20);
                  FUNC_13(VAR_17,
                        VAR_20,
                        VAR_15);
               }
         }
      }
   }


   if (FUNC_11(VAR_16) || VAR_22->bools.savefiles_in_content_dir)
   {
      FUNC_13(VAR_16, VAR_13,
            VAR_15);
      FUNC_8(VAR_16);
   }


   if (FUNC_11(VAR_17) || VAR_22->bools.savestates_in_content_dir)
   {
      FUNC_13(VAR_17, VAR_13,
            VAR_15);
      FUNC_8(VAR_17);
   }

   if (VAR_18)
   {
      if (FUNC_9(VAR_16))
         FUNC_13(VAR_18->name.savefile, VAR_16,
               sizeof(VAR_18->name.savefile));

      if (FUNC_9(VAR_17))
         FUNC_13(VAR_18->name.savestate, VAR_17,
               sizeof(VAR_18->name.savestate));

      if (FUNC_9(VAR_18->name.savefile))
      {
         FUNC_3(VAR_18->name.savefile,
               !FUNC_11(VAR_13) ? VAR_13 :
                  VAR_21 && !FUNC_11(VAR_21->library_name) ? VAR_21->library_name : "",
               ".srm",
               sizeof(VAR_18->name.savefile));
         FUNC_0("%s \"%s\".\n",
               FUNC_7(VAR_2),
               VAR_18->name.savefile);
      }

      if (FUNC_9(VAR_18->name.savestate))
      {
         FUNC_3(VAR_18->name.savestate,
               !FUNC_11(VAR_13) ? VAR_13 :
                  VAR_21 && !FUNC_11(VAR_21->library_name) ? VAR_21->library_name : "",
               ".state",
               sizeof(VAR_18->name.savestate));
         FUNC_0("%s \"%s\".\n",
               FUNC_7(VAR_3),
               VAR_18->name.savestate);
      }

      if (FUNC_9(VAR_18->name.cheatfile))
      {

         FUNC_3(VAR_18->name.cheatfile,
               !FUNC_11(VAR_13) ? VAR_13 : "",
               ".state",
               sizeof(VAR_18->name.cheatfile));
         FUNC_0("%s \"%s\".\n",
               FUNC_7(VAR_1),
               VAR_18->name.cheatfile);
      }
   }

   FUNC_2(VAR_7, VAR_16);
   FUNC_2(VAR_8, VAR_17);
   FUNC_5(VAR_16);
   FUNC_5(VAR_17);
}

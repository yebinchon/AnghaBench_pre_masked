
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_shader {int passes; } ;
struct TYPE_4__ {char* directory_video_shader; char* directory_menu_config; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int fullname ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
typedef int config_directory ;
typedef int buffer ;


 size_t FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char const*,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct video_shader const*) ;
 int FUNC_8 (int *,int,char*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (char const*,char*) ;
 char const* FUNC_16 (int) ;
 int FUNC_17 (char*,struct video_shader const*,int) ;

__attribute__((used)) static bool FUNC_18(
      const struct video_shader *VAR_4, const char *VAR_5,
      bool VAR_6, bool VAR_7)
{
   bool VAR_8 = 0;
   enum rarch_shader_type VAR_9 = VAR_2;
   char *VAR_10 = ((void*)0);
   size_t VAR_11 = 0;
   char VAR_12[VAR_0];
   char VAR_13[VAR_0];

   VAR_12[0] = VAR_13[0] = '\0';

   if (!VAR_4 || !VAR_4->passes)
      return 0;

   VAR_9 = FUNC_7(VAR_4);

   if (VAR_9 == VAR_2)
      return 0;

   if (VAR_3)
      VAR_7 = 0;

   if (!FUNC_12(VAR_5))
   {
      FUNC_14(VAR_12, VAR_5, sizeof(VAR_12));


      if ( !FUNC_15(VAR_5, ".cgp")
            && !FUNC_15(VAR_5, ".glslp")
            && !FUNC_15(VAR_5, ".slangp"))
      {
         const char *VAR_14 = FUNC_16(VAR_9);
         FUNC_13(VAR_12, VAR_14, sizeof(VAR_12));
      }
   }
   else
   {
      FUNC_14(VAR_12, "retroarch", sizeof(VAR_12));
      FUNC_13(VAR_12,
            FUNC_16(VAR_9), sizeof(VAR_12));
   }

   if (FUNC_10(VAR_12))
   {
      VAR_10 = VAR_12;

      VAR_8 = FUNC_17(VAR_10, VAR_4, VAR_7);

      if (VAR_8)
         FUNC_2("Saved shader preset to %s.\n", VAR_10);
      else
         FUNC_1("Failed writing shader preset to %s.\n", VAR_10);
   }
   else
   {
      const char *VAR_15[3] = {0};
      settings_t *VAR_16 = FUNC_4();
      char VAR_17[VAR_0];

      VAR_17[0] = '\0';

      if (!FUNC_11(VAR_1))
         FUNC_5(
               VAR_17,
               FUNC_9(VAR_1),
               sizeof(VAR_17));

      VAR_15[0] = VAR_16->paths.directory_video_shader;
      VAR_15[1] = VAR_16->paths.directory_menu_config;
      VAR_15[2] = VAR_17;

      for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_15); VAR_11++)
      {
         if (FUNC_12(VAR_15[VAR_11]))
            continue;

         FUNC_6(VAR_13, VAR_15[VAR_11],
               VAR_12, sizeof(VAR_13));

         VAR_10 = VAR_13;

         VAR_8 = FUNC_17(VAR_10, VAR_4, VAR_7);

         if (VAR_8)
         {
            FUNC_2("Saved shader preset to %s.\n", VAR_10);
            break;
         }
         else
            FUNC_3("Failed writing shader preset to %s.\n", VAR_10);
      }

      if (!VAR_8)
         FUNC_1("Failed to write shader preset. Make sure shader directory"
               " and/or config directory are writable.\n");
   }

   if (VAR_8 && VAR_6)
      FUNC_8(((void*)0), VAR_9, VAR_10, 1);

   return VAR_8;
}

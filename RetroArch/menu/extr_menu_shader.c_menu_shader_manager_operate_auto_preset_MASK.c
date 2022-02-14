
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct video_shader {int dummy; } ;
struct retro_system_info {char* library_name; } ;
struct TYPE_4__ {char* directory_video_shader; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int file ;
typedef enum auto_shader_type { ____Placeholder_auto_shader_type } auto_shader_type ;
typedef enum auto_shader_operation { ____Placeholder_auto_shader_operation } auto_shader_operation ;
typedef int directory ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char const*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct video_shader const*,char*,int,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 struct retro_system_info* FUNC_11 () ;
 int * VAR_5 ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static bool FUNC_17(enum auto_shader_operation VAR_6,
      const struct video_shader *VAR_7, enum auto_shader_type VAR_8, bool VAR_9)
{
   char VAR_10[VAR_3];
   char VAR_11[VAR_3];
   char VAR_12[VAR_3];
   settings_t *VAR_13 = FUNC_1();
   struct retro_system_info *VAR_14 = FUNC_11();
   const char *VAR_15 = VAR_14 ? VAR_14->library_name : ((void*)0);

   VAR_10[0] = VAR_11[0] = VAR_12[0] = '\0';

   if (VAR_8 == 129)
   {
      FUNC_3(
            VAR_11,
            VAR_13->paths.directory_video_shader,
            "presets",
            sizeof(VAR_11));
   }
   else if (FUNC_12(VAR_15))
      return 0;
   else
   {
      FUNC_3(
            VAR_10,
            VAR_13->paths.directory_video_shader,
            "presets",
            sizeof(VAR_10));
      FUNC_3(
            VAR_11,
            VAR_10,
            VAR_15,
            sizeof(VAR_11));
   }

   switch (VAR_8)
   {
      case 129:
         FUNC_3(VAR_12, VAR_11, "global", sizeof(VAR_12));
         break;
      case 131:
         FUNC_3(VAR_12, VAR_11, VAR_15, sizeof(VAR_12));
         break;
      case 128:
         FUNC_4(VAR_10,
               FUNC_7(VAR_4), sizeof(VAR_10));
         FUNC_3(VAR_12, VAR_11, VAR_10, sizeof(VAR_12));
         break;
      case 130:
         {
            const char *VAR_16 =
               FUNC_6(FUNC_7(VAR_4));
            if (FUNC_12(VAR_16))
               return 0;
            FUNC_3(VAR_12, VAR_11, VAR_16, sizeof(VAR_12));
            break;
         }
      default:
         return 0;
   }

   if (VAR_6 == VAR_2)
   {
      if (!FUNC_8(VAR_11))
         FUNC_10(VAR_11);

      return FUNC_5(
            VAR_7, VAR_12, VAR_9, 1);
   }
   else if (VAR_6 == VAR_1)
   {

      char *VAR_17 = VAR_12 + FUNC_14(VAR_12);
      size_t VAR_18;
      bool VAR_19 = 0;

      for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_5); VAR_18++)
      {
         const char *VAR_20;

         if (!FUNC_16(VAR_5[VAR_18]))
            continue;

         VAR_20 = FUNC_15(VAR_5[VAR_18]);
         FUNC_13(VAR_17, VAR_20, sizeof(VAR_12) - (VAR_17-VAR_12));

         if (!FUNC_2(VAR_12))
            VAR_19 = 1;
      }
      return VAR_19;
   }
   else if (VAR_6 == VAR_0)
   {

      char *VAR_21 = VAR_12 + FUNC_14(VAR_12);
      size_t VAR_22;

      for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_5); VAR_22++)
      {
         const char *VAR_23;

         if (!FUNC_16(VAR_5[VAR_22]))
            continue;

         VAR_23 = FUNC_15(VAR_5[VAR_22]);
         FUNC_13(VAR_21, VAR_23, sizeof(VAR_12) - (VAR_21-VAR_12));

         if (FUNC_9(VAR_12))
            return 1;
      }
   }

   return 0;
}

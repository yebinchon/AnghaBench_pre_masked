
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {char* path; } ;
struct video_shader_pass {TYPE_3__ source; } ;
struct video_shader {struct video_shader_pass* pass; } ;
struct TYPE_14__ {char* path_menu_wallpaper; char const* directory_libretro; char* path_stream_config; char* path_record_config; char* path_rgui_theme_preset; } ;
struct TYPE_11__ {int config_save_on_exit; scalar_t__ audio_enable_menu_ok; scalar_t__ audio_enable_menu; } ;
struct TYPE_15__ {TYPE_4__ paths; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
typedef int message ;
struct TYPE_12__ {size_t unsigned_var; } ;
struct TYPE_16__ {char const* filebrowser_label; TYPE_2__ scratchpad; } ;
typedef TYPE_6__ menu_handle_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef int destination_path ;
struct TYPE_17__ {int * environ_get; int * args; int * argv; int argc; } ;
typedef TYPE_7__ content_ctx_info_t ;
typedef int config_file_t ;
typedef int action_path ;
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
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (char*) ;
 TYPE_5__* FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char const*,char const*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 () ;
 int VAR_18 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int*) ;
 TYPE_6__* FUNC_17 () ;
 int FUNC_18 (char const*,unsigned int) ;
 int FUNC_19 (char const**,char const**,int *,int*,int *) ;
 struct video_shader* FUNC_20 () ;
 int FUNC_21 (struct video_shader*,int ,char*,int) ;
 int FUNC_22 (int) ;
 char* FUNC_23 (int) ;
 char const* FUNC_24 (char*) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_27 (char const*,char*) ;
 int FUNC_28 (char const*) ;
 int FUNC_29 (char*,char const*,int) ;
 int FUNC_30 (char*,int ,int ,int ,int *) ;
 int FUNC_31 (char*,int *,TYPE_7__*,int ,int *,int *) ;
 int FUNC_32 () ;
 int FUNC_33 (char*) ;
 int FUNC_34 (int *,struct video_shader*) ;

__attribute__((used)) static int FUNC_35(const char *VAR_19,
      const char *VAR_20, unsigned VAR_21, size_t VAR_22, size_t VAR_23,
      unsigned VAR_24, enum msg_hash_enums VAR_25)
{
   char VAR_26[VAR_17];
   unsigned VAR_27 = 0;
   int VAR_28 = 0;
   enum msg_hash_enums VAR_29 = VAR_16;
   const char *VAR_30 = ((void*)0);
   const char *VAR_31 = ((void*)0);
   const char *VAR_32 = ((void*)0);
   menu_handle_t *VAR_33 = FUNC_17();







   if (!VAR_33)
      goto error;

   FUNC_19(&VAR_30,
         &VAR_31, ((void*)0), &VAR_29, ((void*)0));

   VAR_26[0] = '\0';

   if (!FUNC_28(VAR_19))
      FUNC_11(VAR_26,
            VAR_30, VAR_19, sizeof(VAR_26));
   else
      FUNC_29(VAR_26, VAR_30, sizeof(VAR_26));

   switch (VAR_24)
   {
      case 136:
         VAR_32 = FUNC_23(VAR_6);
         if (FUNC_10(VAR_26))
         {
            settings_t *VAR_34 = FUNC_6();

            FUNC_29(VAR_34->paths.path_menu_wallpaper,
                  VAR_26, sizeof(VAR_34->paths.path_menu_wallpaper));

            FUNC_30(VAR_26,
                  FUNC_32(), 0,
                  VAR_18, ((void*)0));
         }
         break;
      case 143:
         {
            content_ctx_info_t VAR_35;

            VAR_35.argc = 0;
            VAR_35.argv = ((void*)0);
            VAR_35.args = ((void*)0);
            VAR_35.environ_get = ((void*)0);

            VAR_27 = VAR_13;

            if (!FUNC_31(
                     VAR_26, ((void*)0),
                     &VAR_35,
                     VAR_3,
                     ((void*)0), ((void*)0)))
            {

               VAR_28 = -1;

            }
         }
         break;
      case 129:
         {
            settings_t *VAR_36 = FUNC_6();
            char VAR_37[VAR_17];
            char VAR_38[VAR_17];

            FUNC_11(VAR_37, VAR_36->paths.directory_libretro, FUNC_24(VAR_26), sizeof(VAR_37));

            if (!FUNC_9(
                     VAR_26, VAR_37, VAR_38, sizeof(VAR_38)))
            {
               FUNC_26(FUNC_23(
                  VAR_10), 1, 100, 1, ((void*)0), VAR_15, VAR_14);
               FUNC_0("[sideload] %s: %s\n", FUNC_23(
                  VAR_10), VAR_38);
               FUNC_0(FUNC_23(VAR_10));
            }
            else
            {
               FUNC_26(FUNC_23(
                  VAR_11), 1, 100, 1, ((void*)0), VAR_15, VAR_14);
               FUNC_0("[sideload] %s\n", FUNC_23(VAR_11));
            }
         }
         break;
      case 144:
         {
            settings_t *VAR_39 = FUNC_6();
            VAR_27 = VAR_13;

            FUNC_15(1);

            if (FUNC_7(VAR_39->bools.config_save_on_exit, VAR_26))
            {
               bool VAR_40 = 0;
               FUNC_16(VAR_12, &VAR_40);
               VAR_28 = -1;
            }
         }
         break;
      case 142:
         break;
      case 138:
         break;
      case 137:
         {
            settings_t *VAR_41 = FUNC_6();
            VAR_32 = FUNC_23(VAR_25);

            if (VAR_41)
               FUNC_29(VAR_41->paths.path_stream_config, VAR_26,
                     sizeof(VAR_41->paths.path_stream_config));
         }
         break;
      case 141:
         {
            settings_t *VAR_42 = FUNC_6();
            VAR_32 = FUNC_23(VAR_25);

            if (VAR_42)
               FUNC_29(VAR_42->paths.path_record_config, VAR_26,
                     sizeof(VAR_42->paths.path_record_config));
         }
         break;
      case 140:
         {
            config_file_t *VAR_43 = FUNC_5(VAR_26);
            VAR_32 = FUNC_23(VAR_25);

            if (VAR_43)
               FUNC_13(VAR_43, VAR_26);
         }
         break;
      case 146:
         VAR_32 = FUNC_23(VAR_25);
         FUNC_3();

         if (!FUNC_2(VAR_26,0))
            goto error;
         break;
      case 145:
         VAR_32 = FUNC_23(VAR_25);

         if (!FUNC_2(VAR_26,1))
            goto error;
         break;
      case 139:
         {
            settings_t *VAR_44 = FUNC_6();
            VAR_32 = FUNC_23(VAR_6);

            if (VAR_44)
               FUNC_29(VAR_44->paths.path_rgui_theme_preset, VAR_26,
                     sizeof(VAR_44->paths.path_rgui_theme_preset));
         }
         break;
      case 147:
         VAR_27 = VAR_13;
         FUNC_4(VAR_1, VAR_26);
         FUNC_12(VAR_2);
         break;
      case 128:
         VAR_27 = VAR_13;
         FUNC_8(VAR_26);
         break;
      case 135:
         VAR_32 = FUNC_23(VAR_5);
         VAR_28 = FUNC_27(VAR_33->filebrowser_label, VAR_26);
         break;
      case 131:
         VAR_32 = FUNC_23(VAR_9);
         VAR_28 = FUNC_27(VAR_31, VAR_26);
         break;
      case 133:
         VAR_32 = FUNC_23(VAR_4);
         VAR_28 = FUNC_27(VAR_31, VAR_26);
         break;
      case 132:
         VAR_32 = FUNC_23(VAR_7);
         VAR_28 = FUNC_27(VAR_31, VAR_26);
         break;






      case 134:
         VAR_27 = VAR_13;
         VAR_28 = FUNC_27(VAR_31, VAR_26);
         break;
      default:
         VAR_32 = FUNC_23(VAR_25);
         break;
   }

   FUNC_18(VAR_32, VAR_27);

   return VAR_28;

error:
   return FUNC_14();
}

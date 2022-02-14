
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* directory_autoconfig; char* directory_menu_config; char* path_menu_wallpaper; char* directory_assets; char* path_menu_xmb_font; char* directory_thumbnails; } ;
struct TYPE_5__ {char* input_joypad_driver; char* menu_driver; } ;
struct TYPE_7__ {TYPE_2__ paths; TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;
typedef enum application_special_type { ____Placeholder_application_special_type } application_special_type ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (char*,char*,char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,size_t) ;
 char* FUNC_13 () ;

void FUNC_14(char *VAR_2,
      size_t VAR_3, enum application_special_type VAR_4)
{
   switch (VAR_4)
   {
      case 132:
         {
            settings_t *VAR_5 = FUNC_1();
            FUNC_3(VAR_2,
                  VAR_5->paths.directory_autoconfig,
                  VAR_5->arrays.input_joypad_driver,
                  VAR_3);
         }
         break;
      case 131:
         {
            settings_t *VAR_6 = FUNC_1();



            if (!FUNC_9(VAR_6->paths.directory_menu_config))
               FUNC_12(VAR_2, VAR_6->paths.directory_menu_config, VAR_3);
            else if (!FUNC_8(VAR_1))
               FUNC_2(VAR_2, FUNC_7(VAR_1), VAR_3);
         }
         break;
      case 133:
         break;
      case 135:
         break;
      case 137:
         {
         }

         break;
      case 138:
         break;
      case 136:
         break;
      case 141:
         break;
      case 139:
         break;
      case 140:
         break;
      case 134:
         break;
      case 129:
      {
        char *VAR_7 = (char*)FUNC_6(VAR_0 * sizeof(char));
        char *VAR_8 = (char*)FUNC_6(VAR_0 * sizeof(char));
        settings_t *VAR_9 = FUNC_1();

        VAR_7[0] = '\0';
        VAR_8[0] = '\0';

        FUNC_3(VAR_7,
              VAR_9->paths.directory_thumbnails,
              "discord",
              VAR_3);
        FUNC_3(VAR_8,
              VAR_7, "avatars",
              VAR_0 * sizeof(char)
              );
        FUNC_4(VAR_8,
              VAR_0 * sizeof(char)
              );
        FUNC_12(VAR_2, VAR_8, VAR_3);
        FUNC_5(VAR_7);
        FUNC_5(VAR_8);
      }
      break;

      case 130:
      {
        char *VAR_10 = (char*)FUNC_6(VAR_0 * sizeof(char));
        char *VAR_11 = (char*)FUNC_6(VAR_0 * sizeof(char));
        settings_t *VAR_12 = FUNC_1();

        VAR_10[0] = '\0';
        VAR_11[0] = '\0';

        FUNC_3(VAR_10,
              VAR_12->paths.directory_thumbnails,
              "cheevos",
              VAR_3);
        FUNC_3(VAR_11,
              VAR_10, "badges",
              VAR_0 * sizeof(char)
              );
        FUNC_4(VAR_11,
              VAR_0 * sizeof(char)
              );
        FUNC_12(VAR_2, VAR_11, VAR_3);
        FUNC_5(VAR_10);
        FUNC_5(VAR_11);
      }
      break;

      case 128:
      default:
         break;
   }
}

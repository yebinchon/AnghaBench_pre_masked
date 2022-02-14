
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tmp_buf ;
struct TYPE_9__ {char* directory_thumbnails; } ;
struct TYPE_10__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {char* right_path; char* left_path; char* content_path; char* content_img; char* system; char* content_db_name; char const* content_core_name; } ;
typedef TYPE_3__ menu_thumbnail_path_data_t ;
typedef enum menu_thumbnail_id { ____Placeholder_menu_thumbnail_id } menu_thumbnail_id ;
typedef int content_dir ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,char*,char const*,int) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 char* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char*,int) ;

bool FUNC_9(menu_thumbnail_path_data_t *VAR_2, enum menu_thumbnail_id VAR_3)
{
   settings_t *VAR_4 = FUNC_0();
   const char *VAR_5 = FUNC_3(VAR_2, VAR_3);
   const char *VAR_6 = ((void*)0);
   char *VAR_7 = ((void*)0);
   char VAR_8[VAR_0];

   if (!VAR_2)
      return 0;


   switch (VAR_3)
   {
      case 128:
         VAR_7 = VAR_2->right_path;
         break;
      case 129:
         VAR_7 = VAR_2->left_path;
         break;
      default:
         return 0;
   }

   VAR_7[0] = '\0';
   VAR_8[0] = '\0';


   if (!VAR_4)
      return 0;

   if (FUNC_6(VAR_4->paths.directory_thumbnails))
      return 0;

   if (!FUNC_4(VAR_2, VAR_3))
      return 0;




   if (FUNC_6(VAR_2->content_path) ||
       FUNC_6(VAR_2->content_img) ||
         (FUNC_6(VAR_2->system) &&
          FUNC_6(VAR_2->content_db_name)))
      return 0;


   if (FUNC_6(VAR_2->content_db_name))
   {




      if (FUNC_7(VAR_2->system, "history") ||
          FUNC_7(VAR_2->system, "favorites"))
      {
         if (!FUNC_2(
                  VAR_2, VAR_8, sizeof(VAR_8)))
            return 0;

         VAR_6 = VAR_8;
      }
      else
         VAR_6 = VAR_2->system;
   }
   else
      VAR_6 = VAR_2->content_db_name;



   if (FUNC_7(VAR_6, "images_history") ||
       FUNC_7(VAR_2->content_core_name, "imageviewer"))
   {

      if (FUNC_5(VAR_2->content_path) == VAR_1)
         FUNC_8(VAR_7,
            VAR_2->content_path, VAR_0 * sizeof(char));
   }
   else
   {
      char VAR_9[VAR_0];
      VAR_9[0] = '\0';




      FUNC_1(VAR_7, VAR_4->paths.directory_thumbnails,
            VAR_6, VAR_0 * sizeof(char));


      FUNC_1(VAR_9, VAR_7, VAR_5, sizeof(VAR_9));


      VAR_7[0] = '\0';
      FUNC_1(VAR_7, VAR_9,
            VAR_2->content_img, VAR_0 * sizeof(char));
   }


   if (FUNC_6(VAR_7))
      return 0;

   return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* right_path; char* left_path; char* content_path; char* content_label; char* content_core_name; char* content_db_name; char* content_img; void* playlist_left_mode; void* playlist_right_mode; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

bool FUNC_5(
      menu_thumbnail_path_data_t *VAR_2,
      const char *VAR_3, const char *VAR_4)
{
   char *VAR_5 = ((void*)0);

   if (!VAR_2)
      return 0;



   VAR_2->right_path[0] = '\0';
   VAR_2->left_path[0] = '\0';


   VAR_2->content_path[0] = '\0';
   VAR_2->content_label[0] = '\0';
   VAR_2->content_core_name[0] = '\0';
   VAR_2->content_db_name[0] = '\0';
   VAR_2->content_img[0] = '\0';


   VAR_2->playlist_right_mode = VAR_0;
   VAR_2->playlist_left_mode = VAR_0;

   if (FUNC_3(VAR_3))
      return 0;

   if (FUNC_3(VAR_4))
      return 0;

   if (FUNC_1(VAR_4) != VAR_1)
      return 0;


   FUNC_4(VAR_2->content_img,
            VAR_4, sizeof(VAR_2->content_img));


   VAR_5 = FUNC_2(VAR_2->content_img);
   if (!FUNC_3(VAR_5))
      FUNC_4(VAR_2->content_label,
            VAR_5, sizeof(VAR_2->content_label));
   else
      FUNC_4(VAR_2->content_label,
            VAR_2->content_img, sizeof(VAR_2->content_label));


   FUNC_0(VAR_2->content_path,
      VAR_3, VAR_4, sizeof(VAR_2->content_path));


   FUNC_4(
         VAR_2->content_core_name,
         "imageviewer", sizeof(VAR_2->content_core_name));




   FUNC_4(VAR_2->content_db_name,
         "_images_", sizeof(VAR_2->content_db_name));


   if (FUNC_3(VAR_2->content_path))
      return 0;

   return 1;
}

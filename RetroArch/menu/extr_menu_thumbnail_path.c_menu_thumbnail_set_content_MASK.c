
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* right_path; char* left_path; char* content_path; char* content_label; char* content_core_name; char* content_db_name; char* content_img; void* playlist_left_mode; void* playlist_right_mode; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

bool FUNC_3(menu_thumbnail_path_data_t *VAR_1, const char *VAR_2)
{
   if (!VAR_1)
      return 0;



   VAR_1->right_path[0] = '\0';
   VAR_1->left_path[0] = '\0';


   VAR_1->content_path[0] = '\0';
   VAR_1->content_label[0] = '\0';
   VAR_1->content_core_name[0] = '\0';
   VAR_1->content_db_name[0] = '\0';
   VAR_1->content_img[0] = '\0';


   VAR_1->playlist_right_mode = VAR_0;
   VAR_1->playlist_left_mode = VAR_0;

   if (FUNC_1(VAR_2))
      return 0;


   FUNC_2(VAR_1->content_label, VAR_2, sizeof(VAR_1->content_label));


   FUNC_0(VAR_1);



   FUNC_2(VAR_1->content_path, VAR_2, sizeof(VAR_1->content_path));


   if (FUNC_1(VAR_1->content_img))
      return 0;

   return 1;
}

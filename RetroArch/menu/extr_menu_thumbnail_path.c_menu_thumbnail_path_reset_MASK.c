
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* system; char* content_path; char* content_label; char* content_core_name; char* content_db_name; char* content_img; char* right_path; char* left_path; void* playlist_left_mode; void* playlist_right_mode; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 void* VAR_0 ;

void FUNC_0(menu_thumbnail_path_data_t *VAR_1)
{
   if (!VAR_1)
      return;

   VAR_1->system[0] = '\0';
   VAR_1->content_path[0] = '\0';
   VAR_1->content_label[0] = '\0';
   VAR_1->content_core_name[0] = '\0';
   VAR_1->content_db_name[0] = '\0';
   VAR_1->content_img[0] = '\0';
   VAR_1->right_path[0] = '\0';
   VAR_1->left_path[0] = '\0';

   VAR_1->playlist_right_mode = VAR_0;
   VAR_1->playlist_left_mode = VAR_0;
}

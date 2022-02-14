
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* playlist_left_mode; void* playlist_right_mode; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

menu_thumbnail_path_data_t *FUNC_1(void)
{
   menu_thumbnail_path_data_t *VAR_1 = (menu_thumbnail_path_data_t*)
      FUNC_0(1, sizeof(*VAR_1));
   if (!VAR_1)
      return ((void*)0);



   VAR_1->playlist_right_mode = VAR_0;
   VAR_1->playlist_left_mode = VAR_0;

   return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right_thumbnail_mode; int left_thumbnail_mode; } ;
typedef TYPE_1__ playlist_t ;
typedef enum playlist_thumbnail_mode { ____Placeholder_playlist_thumbnail_mode } playlist_thumbnail_mode ;
typedef enum playlist_thumbnail_id { ____Placeholder_playlist_thumbnail_id } playlist_thumbnail_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum playlist_thumbnail_mode FUNC_0(
      playlist_t *VAR_3, enum playlist_thumbnail_id VAR_4)
{
   if (!VAR_3)
      return VAR_1;

   if (VAR_4 == VAR_2)
      return VAR_3->right_thumbnail_mode;
   else if (VAR_4 == VAR_0)
      return VAR_3->left_thumbnail_mode;


   return VAR_1;
}

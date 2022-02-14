
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right_thumbnail_mode; int modified; int left_thumbnail_mode; } ;
typedef TYPE_1__ playlist_t ;
typedef enum playlist_thumbnail_mode { ____Placeholder_playlist_thumbnail_mode } playlist_thumbnail_mode ;
typedef enum playlist_thumbnail_id { ____Placeholder_playlist_thumbnail_id } playlist_thumbnail_id ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(
      playlist_t *VAR_2, enum playlist_thumbnail_id VAR_3, enum playlist_thumbnail_mode VAR_4)
{
   if (!VAR_2)
      return;

   if (VAR_3 == VAR_1)
   {
      VAR_2->right_thumbnail_mode = VAR_4;
      VAR_2->modified = 1;
   }
   else if (VAR_3 == VAR_0)
   {
      VAR_2->left_thumbnail_mode = VAR_4;
      VAR_2->modified = 1;
   }
}

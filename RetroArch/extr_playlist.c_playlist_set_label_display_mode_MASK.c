
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int label_display_mode; int modified; } ;
typedef TYPE_1__ playlist_t ;
typedef enum playlist_label_display_mode { ____Placeholder_playlist_label_display_mode } playlist_label_display_mode ;



void FUNC_0(playlist_t *VAR_0, enum playlist_label_display_mode VAR_1)
{
   if (!VAR_0)
      return;

   if (VAR_0->label_display_mode != VAR_1) {
      VAR_0->label_display_mode = VAR_1;
      VAR_0->modified = 1;
   }
}

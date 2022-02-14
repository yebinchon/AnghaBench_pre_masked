
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enable; int fullscreen; } ;
struct TYPE_4__ {TYPE_1__ menu_texture; } ;
typedef TYPE_2__ switch_video_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool VAR_1, bool VAR_2)
{
 switch_video_t *VAR_3 = VAR_0;
   if (!VAR_3)
      return;

 VAR_3->menu_texture.enable = VAR_1;
 VAR_3->menu_texture.fullscreen = VAR_2;
}

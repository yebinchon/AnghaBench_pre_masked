
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int enable; int fullscreen; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_6__ {int full_height; int full_width; } ;
struct TYPE_9__ {TYPE_3__ menu_texture; TYPE_2__ hw_scale; int win; scalar_t__ smooth; TYPE_1__ vp; } ;
typedef TYPE_4__ switch_video_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, bool VAR_1, bool VAR_2)
{
    switch_video_t *VAR_3 = VAR_0;
    if (!VAR_3->menu_texture.enable && VAR_1)
        FUNC_1(VAR_3->win, VAR_3->vp.full_width, VAR_3->vp.full_height);
    else if (!VAR_1 && VAR_3->menu_texture.enable && VAR_3->smooth)
    {
        FUNC_0(VAR_3);
        FUNC_1(VAR_3->win, VAR_3->hw_scale.width, VAR_3->hw_scale.height);
    }
    VAR_3->menu_texture.enable = VAR_1;
    VAR_3->menu_texture.fullscreen = VAR_2;
}

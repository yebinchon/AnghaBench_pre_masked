
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pixels; } ;
struct TYPE_5__ {TYPE_1__ menu_texture; int fb; } ;
typedef TYPE_2__ switch_video_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    switch_video_t *VAR_1 = VAR_0;

    FUNC_0(&VAR_1->fb);

    if (VAR_1->menu_texture.pixels)
        FUNC_1(VAR_1->menu_texture.pixels);

    FUNC_1(VAR_1);
}

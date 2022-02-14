
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int full_height; int full_width; } ;
struct TYPE_5__ {int fb; TYPE_1__ vp; int win; } ;
typedef TYPE_2__ switch_video_t ;


 scalar_t__ FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(switch_video_t *VAR_0)
{
    FUNC_3(VAR_0->win, VAR_0->vp.full_width, VAR_0->vp.full_height);

    uint32_t VAR_1;

    uint32_t *VAR_2 = (uint32_t*)FUNC_0(&VAR_0->fb, &VAR_1);

    FUNC_2(VAR_2, 0, VAR_1 * 720);

    FUNC_1(&VAR_0->fb);
}

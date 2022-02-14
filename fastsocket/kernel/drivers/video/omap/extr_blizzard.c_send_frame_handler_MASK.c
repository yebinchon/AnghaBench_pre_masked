
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct update_param {int plane; int flags; int bpp; int color_mode; int out_height; int out_width; int out_y; int out_x; int height; int width; int y; int x; } ;
struct TYPE_4__ {struct update_param update; } ;
struct blizzard_request {TYPE_1__ par; } ;
struct TYPE_6__ {int enabled_planes; int vid_nonstd_color; int vid_scaled; TYPE_2__* fbdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct blizzard_request*) ;
 int FUNC_3 (struct blizzard_request*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct blizzard_request *VAR_2)
{
 struct update_param *VAR_3 = &VAR_2->par.update;
 int VAR_4 = VAR_3->plane;
 if (VAR_3->flags & VAR_0)
  FUNC_1();

 if ((VAR_1.enabled_planes & VAR_1.vid_nonstd_color) ||
      (VAR_1.enabled_planes & VAR_1.vid_scaled))
  return FUNC_2(VAR_2);

 return FUNC_3(VAR_2, VAR_4, VAR_3->x, VAR_3->y,
     VAR_3->width, VAR_3->height,
     VAR_3->out_x, VAR_3->out_y,
     VAR_3->out_width, VAR_3->out_height,
     VAR_3->color_mode, VAR_3->bpp);
}

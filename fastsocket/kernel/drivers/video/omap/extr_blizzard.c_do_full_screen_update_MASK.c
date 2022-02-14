
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct plane_info {int color_mode; int height; int width; int pos_y; int pos_x; int scr_width; int offset; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_3__ update; } ;
struct blizzard_request {TYPE_4__ par; } ;
struct TYPE_12__ {int enabled_planes; int screen_height; int screen_width; TYPE_5__* extif; scalar_t__ zoom_on; TYPE_2__* fbdev; TYPE_1__* int_ctrl; struct plane_info* plane; } ;
struct TYPE_11__ {int (* transfer_area ) (int ,int ,int ,struct blizzard_request*) ;int (* set_bits_per_cycle ) (int) ;} ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int (* enable_plane ) (int,int) ;int (* setup_plane ) (int,int ,int ,int ,int ,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ,struct blizzard_request*) ;

__attribute__((used)) static int FUNC_10(struct blizzard_request *VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  struct plane_info *VAR_10 = &VAR_5.plane[VAR_8];
  if (!(VAR_5.enabled_planes & (1 << VAR_8))) {
   VAR_5.int_ctrl->enable_plane(VAR_8, 0);
   continue;
  }
  FUNC_1(VAR_5.fbdev->dev, "pw %d ph %d\n",
   VAR_10->width, VAR_10->height);
  VAR_5.int_ctrl->setup_plane(VAR_8,
    VAR_1, VAR_10->offset,
    VAR_10->scr_width, VAR_10->pos_x, VAR_10->pos_y,
    VAR_10->width, VAR_10->height,
    VAR_10->color_mode);
  VAR_5.int_ctrl->enable_plane(VAR_8, 1);
 }

 FUNC_1(VAR_5.fbdev->dev, "sw %d sh %d\n",
  VAR_5.screen_width, VAR_5.screen_height);
 FUNC_0();
 VAR_9 = VAR_7->par.update.flags;
 if (VAR_9 & VAR_3)
  FUNC_3(0, VAR_5.screen_width,
    VAR_5.screen_height,
    VAR_5.screen_height,
    VAR_5.screen_height,
    VAR_9 & VAR_2);
 else
  FUNC_2();

 FUNC_4(0, 0, VAR_5.screen_width, VAR_5.screen_height,
   0, 0, VAR_5.screen_width, VAR_5.screen_height,
   VAR_0, VAR_5.zoom_on, VAR_9);
 VAR_5.zoom_on = 0;

 VAR_5.extif->set_bits_per_cycle(16);



 VAR_5.extif->transfer_area(VAR_5.screen_width,
          VAR_5.screen_height,
          VAR_6, VAR_7);
 return VAR_4;
}

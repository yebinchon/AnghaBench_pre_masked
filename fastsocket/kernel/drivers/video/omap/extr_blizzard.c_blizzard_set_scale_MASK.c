
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct plane_info {int width; int height; int out_width; int out_height; } ;
struct TYPE_6__ {int vid_scaled; TYPE_2__* int_ctrl; TYPE_1__* fbdev; struct plane_info* plane; } ;
struct TYPE_5__ {int (* set_scale ) (int,int,int,int,int) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, int VAR_4, int VAR_5,
         int VAR_6, int VAR_7)
{
 struct plane_info *VAR_8 = &VAR_2.plane[VAR_3];
 int VAR_9;

 FUNC_0(VAR_2.fbdev->dev,
  "plane %d orig_w %d orig_h %d out_w %d out_h %d\n",
  VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if ((unsigned)VAR_3 > VAR_1)
  return -VAR_0;

 VAR_9 = VAR_2.int_ctrl->set_scale(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->width = VAR_4;
 VAR_8->height = VAR_5;
 VAR_8->out_width = VAR_6;
 VAR_8->out_height = VAR_7;
 if (VAR_4 == VAR_6 && VAR_5 == VAR_7)
  VAR_2.vid_scaled &= ~(1 << VAR_3);
 else
  VAR_2.vid_scaled |= 1 << VAR_3;

 return 0;
}

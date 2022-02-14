
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmsizeenum {size_t index; TYPE_1__ discrete; int type; } ;
struct ov7670_win_size {scalar_t__ width; scalar_t__ height; } ;
struct ov7670_info {scalar_t__ min_width; scalar_t__ min_height; } ;
typedef size_t __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ov7670_win_size* VAR_3 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4,
  struct v4l2_frmsizeenum *VAR_5)
{
 struct ov7670_info *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;
 int VAR_8 = -1;
 __u32 VAR_9 = VAR_5->index;





 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct ov7670_win_size *VAR_10 = &VAR_3[VAR_9];
  if (VAR_6->min_width && VAR_10->width < VAR_6->min_width)
   continue;
  if (VAR_6->min_height && VAR_10->height < VAR_6->min_height)
   continue;
  if (VAR_9 == ++VAR_8) {
   VAR_5->type = VAR_2;
   VAR_5->discrete.width = VAR_10->width;
   VAR_5->discrete.height = VAR_10->height;
   return 0;
  }
 }

 return -VAR_0;
}

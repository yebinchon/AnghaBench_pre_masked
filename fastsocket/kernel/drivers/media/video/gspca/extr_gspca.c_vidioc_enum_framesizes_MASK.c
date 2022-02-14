
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; scalar_t__ index; TYPE_1__ discrete; int type; } ;
struct TYPE_6__ {int nmodes; TYPE_2__* cam_mode; } ;
struct gspca_dev {TYPE_3__ cam; } ;
struct file {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {scalar_t__ pixelformat; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
      struct v4l2_frmsizeenum *VAR_4)
{
 struct gspca_dev *VAR_5 = VAR_3;
 int VAR_6;
 __u32 VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->cam.nmodes; VAR_6++) {
  if (VAR_4->pixel_format !=
    VAR_5->cam.cam_mode[VAR_6].pixelformat)
   continue;

  if (VAR_4->index == VAR_7) {
   VAR_4->type = VAR_1;
   VAR_4->discrete.width =
    VAR_5->cam.cam_mode[VAR_6].width;
   VAR_4->discrete.height =
    VAR_5->cam.cam_mode[VAR_6].height;
   return 0;
  }
  VAR_7++;
 }

 return -VAR_0;
}

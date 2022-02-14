
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readbuffers; } ;
struct TYPE_5__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct gspca_dev {int usb_err; int usb_lock; TYPE_3__* sd_desc; scalar_t__ present; int nbufread; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int (* get_streamparm ) (struct gspca_dev*,struct v4l2_streamparm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
   struct v4l2_streamparm *VAR_4)
{
 struct gspca_dev *VAR_5 = VAR_3;

 VAR_4->parm.capture.readbuffers = VAR_5->nbufread;

 if (VAR_5->sd_desc->get_streamparm) {
  int VAR_6;

  if (FUNC_0(&VAR_5->usb_lock))
   return -VAR_1;
  if (VAR_5->present) {
   VAR_5->usb_err = 0;
   VAR_5->sd_desc->get_streamparm(VAR_5, VAR_4);
   VAR_6 = VAR_5->usb_err;
  } else {
   VAR_6 = -VAR_0;
  }
  FUNC_1(&VAR_5->usb_lock);
  return VAR_6;
 }

 return 0;
}

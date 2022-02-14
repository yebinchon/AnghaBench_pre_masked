
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
struct gspca_dev {int nbufread; int usb_err; int usb_lock; TYPE_3__* sd_desc; scalar_t__ present; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int (* set_streamparm ) (struct gspca_dev*,struct v4l2_streamparm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
   struct v4l2_streamparm *VAR_5)
{
 struct gspca_dev *VAR_6 = VAR_4;
 int VAR_7;

 VAR_7 = VAR_5->parm.capture.readbuffers;
 if (VAR_7 == 0 || VAR_7 >= VAR_2)
  VAR_5->parm.capture.readbuffers = VAR_6->nbufread;
 else
  VAR_6->nbufread = VAR_7;

 if (VAR_6->sd_desc->set_streamparm) {
  int VAR_8;

  if (FUNC_0(&VAR_6->usb_lock))
   return -VAR_1;
  if (VAR_6->present) {
   VAR_6->usb_err = 0;
   VAR_6->sd_desc->set_streamparm(VAR_6, VAR_5);
   VAR_8 = VAR_6->usb_err;
  } else {
   VAR_8 = -VAR_0;
  }
  FUNC_1(&VAR_6->usb_lock);
  return VAR_8;
 }

 return 0;
}

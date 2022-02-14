
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_jpegcompression {int dummy; } ;
struct gspca_dev {int usb_lock; TYPE_1__* sd_desc; scalar_t__ present; scalar_t__ usb_err; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* set_jcomp ) (struct gspca_dev*,struct v4l2_jpegcompression*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,struct v4l2_jpegcompression*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
   struct v4l2_jpegcompression *VAR_5)
{
 struct gspca_dev *VAR_6 = VAR_4;
 int VAR_7;

 if (!VAR_6->sd_desc->set_jcomp)
  return -VAR_0;
 if (FUNC_0(&VAR_6->usb_lock))
  return -VAR_2;
 VAR_6->usb_err = 0;
 if (VAR_6->present)
  VAR_7 = VAR_6->sd_desc->set_jcomp(VAR_6, VAR_5);
 else
  VAR_7 = -VAR_1;
 FUNC_1(&VAR_6->usb_lock);
 return VAR_7;
}

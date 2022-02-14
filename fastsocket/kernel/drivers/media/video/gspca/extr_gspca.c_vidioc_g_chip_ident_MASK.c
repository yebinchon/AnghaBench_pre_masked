
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_dbg_chip_ident {int dummy; } ;
struct gspca_dev {int usb_lock; TYPE_1__* sd_desc; scalar_t__ present; scalar_t__ usb_err; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* get_chip_ident ) (struct gspca_dev*,struct v4l2_dbg_chip_ident*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,struct v4l2_dbg_chip_ident*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
   struct v4l2_dbg_chip_ident *VAR_5)
{
 int VAR_6;
 struct gspca_dev *VAR_7 = VAR_4;

 if (!VAR_7->sd_desc->get_chip_ident)
  return -VAR_0;

 if (FUNC_0(&VAR_7->usb_lock))
  return -VAR_2;
 VAR_7->usb_err = 0;
 if (VAR_7->present)
  VAR_6 = VAR_7->sd_desc->get_chip_ident(VAR_7, VAR_5);
 else
  VAR_6 = -VAR_1;
 FUNC_1(&VAR_7->usb_lock);

 return VAR_6;
}

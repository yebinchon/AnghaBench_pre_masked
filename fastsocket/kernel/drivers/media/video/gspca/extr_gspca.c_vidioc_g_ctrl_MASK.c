
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_control {int value; int id; } ;
struct TYPE_6__ {TYPE_2__* ctrls; } ;
struct gspca_dev {int usb_lock; TYPE_3__ cam; scalar_t__ usb_err; int present; TYPE_1__* sd_desc; } ;
struct file {int dummy; } ;
struct ctrl {int (* get ) (struct gspca_dev*,int *) ;} ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {struct ctrl* ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gspca_dev*,int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
    struct v4l2_control *VAR_5)
{
 struct gspca_dev *VAR_6 = VAR_4;
 const struct ctrl *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_5->id);
 if (VAR_8 < 0)
  return -VAR_0;
 VAR_7 = &VAR_6->sd_desc->ctrls[VAR_8];

 if (FUNC_1(&VAR_6->usb_lock))
  return -VAR_2;
 if (!VAR_6->present) {
  VAR_9 = -VAR_1;
  goto out;
 }
 VAR_6->usb_err = 0;
 if (VAR_7->get != ((void*)0)) {
  VAR_9 = VAR_7->get(VAR_6, &VAR_5->value);
  goto out;
 }
 if (VAR_6->cam.ctrls != ((void*)0))
  VAR_5->value = VAR_6->cam.ctrls[VAR_8].val;
 VAR_9 = 0;
out:
 FUNC_2(&VAR_6->usb_lock);
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_control {scalar_t__ value; int id; } ;
struct TYPE_5__ {struct gspca_ctrl* ctrls; } ;
struct gspca_dev {int ctrl_inac; int usb_err; int usb_lock; scalar_t__ streaming; int present; TYPE_2__ cam; TYPE_1__* sd_desc; } ;
struct gspca_ctrl {scalar_t__ min; scalar_t__ max; scalar_t__ val; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ minimum; scalar_t__ maximum; } ;
struct ctrl {int (* set ) (struct gspca_dev*,scalar_t__) ;int (* set_control ) (struct gspca_dev*) ;TYPE_3__ qctrl; } ;
struct TYPE_4__ {struct ctrl* ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gspca_dev*,scalar_t__) ;
 int FUNC_5 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_5, void *VAR_6,
    struct v4l2_control *VAR_7)
{
 struct gspca_dev *VAR_8 = VAR_6;
 const struct ctrl *VAR_9;
 struct gspca_ctrl *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_8, VAR_7->id);
 if (VAR_11 < 0)
  return -VAR_1;
 if (VAR_8->ctrl_inac & (1 << VAR_11))
  return -VAR_1;
 VAR_9 = &VAR_8->sd_desc->ctrls[VAR_11];
 if (VAR_8->cam.ctrls != ((void*)0)) {
  VAR_10 = &VAR_8->cam.ctrls[VAR_11];
  if (VAR_7->value < VAR_10->min
      || VAR_7->value > VAR_10->max)
   return -VAR_3;
 } else {
  VAR_10 = ((void*)0);
  if (VAR_7->value < VAR_9->qctrl.minimum
      || VAR_7->value > VAR_9->qctrl.maximum)
   return -VAR_3;
 }
 FUNC_0(VAR_0, "set ctrl [%08x] = %d", VAR_7->id, VAR_7->value);
 if (FUNC_2(&VAR_8->usb_lock))
  return -VAR_4;
 if (!VAR_8->present) {
  VAR_12 = -VAR_2;
  goto out;
 }
 VAR_8->usb_err = 0;
 if (VAR_9->set != ((void*)0)) {
  VAR_12 = VAR_9->set(VAR_8, VAR_7->value);
  goto out;
 }
 if (VAR_10 != ((void*)0)) {
  VAR_10->val = VAR_7->value;
  if (VAR_9->set_control != ((void*)0)
   && VAR_8->streaming)
   VAR_9->set_control(VAR_8);
 }
 VAR_12 = VAR_8->usb_err;
out:
 FUNC_3(&VAR_8->usb_lock);
 return VAR_12;
}

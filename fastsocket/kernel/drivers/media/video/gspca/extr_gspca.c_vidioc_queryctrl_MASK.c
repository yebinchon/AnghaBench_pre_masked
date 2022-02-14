
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_queryctrl {int id; int flags; int maximum; int minimum; int default_value; } ;
struct TYPE_5__ {struct gspca_ctrl* ctrls; } ;
struct gspca_dev {int ctrl_dis; int ctrl_inac; TYPE_2__ cam; TYPE_1__* sd_desc; } ;
struct gspca_ctrl {int max; int min; int def; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct ctrl {TYPE_3__ qctrl; } ;
struct TYPE_4__ {int nctrls; struct ctrl* ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct v4l2_queryctrl*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
      struct v4l2_queryctrl *VAR_6)
{
 struct gspca_dev *VAR_7 = VAR_5;
 const struct ctrl *VAR_8;
 struct gspca_ctrl *VAR_9;
 int VAR_10, VAR_11;
 u32 VAR_12;

 VAR_12 = VAR_6->id;
 if (VAR_12 & VAR_2) {
  VAR_12 &= VAR_3;
  VAR_12++;
  VAR_11 = -1;
  for (VAR_10 = 0; VAR_10 < VAR_7->sd_desc->nctrls; VAR_10++) {
   if (VAR_7->ctrl_dis & (1 << VAR_10))
    continue;
   if (VAR_7->sd_desc->ctrls[VAR_10].qctrl.id < VAR_12)
    continue;
   if (VAR_11 >= 0
    && VAR_7->sd_desc->ctrls[VAR_10].qctrl.id
        > VAR_7->sd_desc->ctrls[VAR_11].qctrl.id)
    continue;
   VAR_11 = VAR_10;
  }
 } else {
  VAR_11 = FUNC_0(VAR_7, VAR_12);
 }
 if (VAR_11 < 0)
  return -VAR_0;
 VAR_8 = &VAR_7->sd_desc->ctrls[VAR_11];
 FUNC_1(VAR_6, &VAR_8->qctrl, sizeof *VAR_6);
 if (VAR_7->cam.ctrls != ((void*)0)) {
  VAR_9 = &VAR_7->cam.ctrls[VAR_11];
  VAR_6->default_value = VAR_9->def;
  VAR_6->minimum = VAR_9->min;
  VAR_6->maximum = VAR_9->max;
 }
 if (VAR_7->ctrl_inac & (1 << VAR_11))
  VAR_6->flags |= VAR_1;
 return 0;
}

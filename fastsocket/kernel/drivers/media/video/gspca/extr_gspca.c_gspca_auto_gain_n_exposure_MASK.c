
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gspca_dev {int ctrl_dis; TYPE_1__* sd_desc; } ;
struct TYPE_4__ {scalar_t__ id; int default_value; int minimum; int maximum; } ;
struct ctrl {int (* set ) (struct gspca_dev*,int) ;TYPE_2__ qctrl; scalar_t__ (* get ) (struct gspca_dev*,int*) ;} ;
struct TYPE_3__ {int nctrls; struct ctrl* ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int*) ;
 scalar_t__ FUNC_3 (struct gspca_dev*,int*) ;
 scalar_t__ FUNC_4 (struct gspca_dev*,int*) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int) ;

int FUNC_7(struct gspca_dev *VAR_5, int VAR_6,
 int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 const struct ctrl *VAR_18 = ((void*)0);
 const struct ctrl *VAR_19 = ((void*)0);
 const struct ctrl *VAR_20 = ((void*)0);
 int VAR_21 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_5->sd_desc->nctrls; VAR_11++) {
  if (VAR_5->ctrl_dis & (1 << VAR_11))
   continue;
  if (VAR_5->sd_desc->ctrls[VAR_11].qctrl.id == VAR_4)
   VAR_18 = &VAR_5->sd_desc->ctrls[VAR_11];
  if (VAR_5->sd_desc->ctrls[VAR_11].qctrl.id == VAR_3)
   VAR_19 = &VAR_5->sd_desc->ctrls[VAR_11];
  if (VAR_5->sd_desc->ctrls[VAR_11].qctrl.id == VAR_2)
   VAR_20 = &VAR_5->sd_desc->ctrls[VAR_11];
 }
 if (!VAR_18 || !VAR_19 || !VAR_20) {
  FUNC_0(VAR_0, "Error: gspca_auto_gain_n_exposure called "
   "on cam without (auto)gain/exposure");
  return 0;
 }

 if (VAR_18->get(VAR_5, &VAR_13) ||
   VAR_19->get(VAR_5, &VAR_15) ||
   VAR_20->get(VAR_5, &VAR_17) || !VAR_17)
  return 0;

 VAR_14 = VAR_13;
 VAR_16 = VAR_15;



 VAR_12 = FUNC_1(VAR_7 - VAR_6) / VAR_8;

 FUNC_0(VAR_1, "autogain: lum: %d, desired: %d, steps: %d",
  VAR_6, VAR_7, VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  if (VAR_6 > VAR_7) {
   if (VAR_13 > VAR_9)
    VAR_13--;
   else if (VAR_15 > VAR_10)
    VAR_15--;
   else if (VAR_13 > VAR_18->qctrl.default_value)
    VAR_13--;
   else if (VAR_15 > VAR_19->qctrl.minimum)
    VAR_15--;
   else if (VAR_13 > VAR_18->qctrl.minimum)
    VAR_13--;
   else
    break;
  } else {
   if (VAR_13 < VAR_18->qctrl.default_value)
    VAR_13++;
   else if (VAR_15 < VAR_10)
    VAR_15++;
   else if (VAR_13 < VAR_9)
    VAR_13++;
   else if (VAR_15 < VAR_19->qctrl.maximum)
    VAR_15++;
   else if (VAR_13 < VAR_18->qctrl.maximum)
    VAR_13++;
   else
    break;
  }
 }

 if (VAR_13 != VAR_14) {
  VAR_18->set(VAR_5, VAR_13);
  VAR_21 = 1;
 }
 if (VAR_15 != VAR_16) {
  VAR_19->set(VAR_5, VAR_15);
  VAR_21 = 1;
 }

 return VAR_21;
}

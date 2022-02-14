
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {scalar_t__ exposure; int exp_too_low_cnt; int exp_too_high_cnt; } ;
struct gspca_dev {int ctrl_dis; TYPE_1__* sd_desc; } ;
struct TYPE_4__ {scalar_t__ id; int maximum; int minimum; } ;
struct ctrl {int (* set ) (struct gspca_dev*,int) ;TYPE_2__ qctrl; scalar_t__ (* get ) (struct gspca_dev*,int*) ;} ;
struct TYPE_3__ {int nctrls; struct ctrl* ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int*) ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int*) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_4,
 int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 const struct ctrl *VAR_16 = ((void*)0);
 const struct ctrl *VAR_17 = ((void*)0);
 struct sd *VAR_18 = (struct sd *) VAR_4;
 int VAR_19 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->sd_desc->nctrls; VAR_8++) {
  if (VAR_4->ctrl_dis & (1 << VAR_8))
   continue;
  if (VAR_4->sd_desc->ctrls[VAR_8].qctrl.id == VAR_3)
   VAR_16 = &VAR_4->sd_desc->ctrls[VAR_8];
  if (VAR_4->sd_desc->ctrls[VAR_8].qctrl.id == VAR_2)
   VAR_17 = &VAR_4->sd_desc->ctrls[VAR_8];
 }
 if (!VAR_16 || !VAR_17) {
  FUNC_0(VAR_0, "Error: gspca_coarse_grained_expo_autogain "
   "called on cam without gain or exposure");
  return 0;
 }

 if (VAR_16->get(VAR_4, &VAR_10) ||
     VAR_17->get(VAR_4, &VAR_12))
  return 0;

 VAR_11 = VAR_10;
 VAR_13 = VAR_12;
 VAR_14 =
  (VAR_16->qctrl.maximum - VAR_16->qctrl.minimum) / 5 * 2;
 VAR_14 += VAR_16->qctrl.minimum;
 VAR_15 =
  (VAR_16->qctrl.maximum - VAR_16->qctrl.minimum) / 5 * 4;
 VAR_15 += VAR_16->qctrl.minimum;



 VAR_9 = (VAR_6 - VAR_5) / VAR_7;

 FUNC_0(VAR_1, "autogain: lum: %d, desired: %d, steps: %d",
  VAR_5, VAR_6, VAR_9);

 if ((VAR_10 + VAR_9) > VAR_15 &&
     VAR_18->exposure < VAR_17->qctrl.maximum) {
  VAR_10 = VAR_15;
  VAR_18->exp_too_low_cnt++;
 } else if ((VAR_10 + VAR_9) < VAR_14 &&
     VAR_18->exposure > VAR_17->qctrl.minimum) {
  VAR_10 = VAR_14;
  VAR_18->exp_too_high_cnt++;
 } else {
  VAR_10 += VAR_9;
  if (VAR_10 > VAR_16->qctrl.maximum)
   VAR_10 = VAR_16->qctrl.maximum;
  else if (VAR_10 < VAR_16->qctrl.minimum)
   VAR_10 = VAR_16->qctrl.minimum;
  VAR_18->exp_too_high_cnt = 0;
  VAR_18->exp_too_low_cnt = 0;
 }

 if (VAR_18->exp_too_high_cnt > 3) {
  VAR_12--;
  VAR_18->exp_too_high_cnt = 0;
 } else if (VAR_18->exp_too_low_cnt > 3) {
  VAR_12++;
  VAR_18->exp_too_low_cnt = 0;
 }

 if (VAR_10 != VAR_11) {
  VAR_16->set(VAR_4, VAR_10);
  VAR_19 = 1;
 }
 if (VAR_12 != VAR_13) {
  VAR_17->set(VAR_4, VAR_12);
  VAR_19 = 1;
 }

 return VAR_19;
}

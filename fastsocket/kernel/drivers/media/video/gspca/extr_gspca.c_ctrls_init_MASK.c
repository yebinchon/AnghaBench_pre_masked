
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct gspca_ctrl* ctrls; } ;
struct gspca_dev {TYPE_4__* sd_desc; TYPE_1__ cam; } ;
struct gspca_ctrl {int max; int min; int def; int val; } ;
struct TYPE_8__ {int nctrls; TYPE_3__* ctrls; } ;
struct TYPE_6__ {int maximum; int minimum; int default_value; } ;
struct TYPE_7__ {TYPE_2__ qctrl; } ;



__attribute__((used)) static void FUNC_0(struct gspca_dev *VAR_0)
{
 struct gspca_ctrl *VAR_1;
 int VAR_2;

 for (VAR_2 = 0, VAR_1 = VAR_0->cam.ctrls;
      VAR_2 < VAR_0->sd_desc->nctrls;
      VAR_2++, VAR_1++) {
  VAR_1->def = VAR_0->sd_desc->ctrls[VAR_2].qctrl.default_value;
  VAR_1->val = VAR_1->def;
  VAR_1->min = VAR_0->sd_desc->ctrls[VAR_2].qctrl.minimum;
  VAR_1->max = VAR_0->sd_desc->ctrls[VAR_2].qctrl.maximum;
 }
}

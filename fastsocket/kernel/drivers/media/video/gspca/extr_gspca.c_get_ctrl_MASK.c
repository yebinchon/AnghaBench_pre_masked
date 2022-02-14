
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gspca_dev {int ctrl_dis; TYPE_1__* sd_desc; } ;
struct TYPE_4__ {int id; } ;
struct ctrl {TYPE_2__ qctrl; } ;
struct TYPE_3__ {int nctrls; struct ctrl* ctrls; } ;



__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_0,
       int VAR_1)
{
 const struct ctrl *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_0->sd_desc->ctrls;
      VAR_3 < VAR_0->sd_desc->nctrls;
      VAR_3++, VAR_2++) {
  if (VAR_0->ctrl_dis & (1 << VAR_3))
   continue;
  if (VAR_1 == VAR_2->qctrl.id)
   return VAR_3;
 }
 return -1;
}

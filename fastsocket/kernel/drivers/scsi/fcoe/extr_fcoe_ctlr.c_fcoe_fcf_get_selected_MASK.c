
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {int selected; } ;
struct fcoe_fcf {int dummy; } ;
struct fcoe_ctlr_device {int lock; } ;
struct fcoe_ctlr {int ctlr_mutex; struct fcoe_fcf* sel_fcf; } ;


 struct fcoe_ctlr* FUNC_0 (struct fcoe_ctlr_device*) ;
 struct fcoe_ctlr_device* FUNC_1 (struct fcoe_fcf_device*) ;
 struct fcoe_fcf* FUNC_2 (struct fcoe_fcf_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fcoe_fcf_device *VAR_0)
{
 struct fcoe_ctlr_device *VAR_1 = FUNC_1(VAR_0);
 struct fcoe_ctlr *VAR_2 = FUNC_0(VAR_1);
 struct fcoe_fcf *VAR_3;

 FUNC_3(&VAR_2->ctlr_mutex);
 FUNC_3(&VAR_1->lock);

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  VAR_0->selected = (VAR_3 == VAR_2->sel_fcf) ? 1 : 0;
 else
  VAR_0->selected = 0;

 FUNC_4(&VAR_1->lock);
 FUNC_4(&VAR_2->ctlr_mutex);
}

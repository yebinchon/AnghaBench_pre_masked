
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr_device {int mode; } ;
struct fcoe_ctlr {int mode; int ctlr_mutex; struct fc_lport* lp; } ;
struct fc_lport {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct fcoe_ctlr* FUNC_0 (struct fcoe_ctlr_device*) ;
 int FUNC_1 (struct fc_lport*,struct fcoe_ctlr*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fcoe_ctlr_device *VAR_2)
{
 struct fcoe_ctlr *VAR_3 = FUNC_0(VAR_2);
 struct fc_lport *VAR_4 = VAR_3->lp;

 FUNC_2(&VAR_3->ctlr_mutex);
 switch (VAR_2->mode) {
 case 128:
  VAR_3->mode = VAR_1;
  break;
 case 129:
 default:
  VAR_3->mode = VAR_0;
  break;
 }

 FUNC_3(&VAR_3->ctlr_mutex);

 FUNC_1(VAR_4, VAR_3, VAR_3->mode);
}

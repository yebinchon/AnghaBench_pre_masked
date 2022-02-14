
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fcoe_fc_els_lesb {int lesb_fcs_error; int lesb_err_block; int lesb_symb_err; int lesb_miss_fka; int lesb_vlink_fail; int lesb_link_fail; } ;
struct TYPE_2__ {void* lesb_fcs_error; void* lesb_err_block; void* lesb_symb_err; void* lesb_miss_fka; void* lesb_vlink_fail; void* lesb_link_fail; } ;
struct fcoe_ctlr_device {TYPE_1__ lesb; } ;
struct fcoe_ctlr {int lp; } ;
struct fc_els_lesb {int dummy; } ;


 int FUNC_0 (int ,struct fc_els_lesb*,struct net_device*) ;
 struct fcoe_ctlr* FUNC_1 (struct fcoe_ctlr_device*) ;
 struct net_device* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

void FUNC_4(struct fcoe_ctlr_device *VAR_0)
{
 struct fcoe_ctlr *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = FUNC_2(VAR_1->lp);
 struct fcoe_fc_els_lesb *VAR_3;
 struct fc_els_lesb VAR_4;

 FUNC_0(VAR_1->lp, &VAR_4, VAR_2);
 VAR_3 = (struct fcoe_fc_els_lesb *)(&VAR_4);

 VAR_0->lesb.lesb_link_fail =
  FUNC_3(VAR_3->lesb_link_fail);
 VAR_0->lesb.lesb_vlink_fail =
  FUNC_3(VAR_3->lesb_vlink_fail);
 VAR_0->lesb.lesb_miss_fka =
  FUNC_3(VAR_3->lesb_miss_fka);
 VAR_0->lesb.lesb_symb_err =
  FUNC_3(VAR_3->lesb_symb_err);
 VAR_0->lesb.lesb_err_block =
  FUNC_3(VAR_3->lesb_err_block);
 VAR_0->lesb.lesb_fcs_error =
  FUNC_3(VAR_3->lesb_fcs_error);
}

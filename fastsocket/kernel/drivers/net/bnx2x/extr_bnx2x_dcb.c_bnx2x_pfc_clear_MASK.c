
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_nig_brb_pfc_port_params {int pause_enable; int member_0; } ;
struct TYPE_2__ {int feature_config_flags; } ;
struct bnx2x {int link_vars; TYPE_1__ link_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (TYPE_1__*,int *,struct bnx2x_nig_brb_pfc_port_params*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1)
{
 struct bnx2x_nig_brb_pfc_port_params VAR_2 = {0};
 VAR_2.pause_enable = 1;
 FUNC_0(VAR_1);
 VAR_1->link_params.feature_config_flags &= ~VAR_0;
 FUNC_2(&VAR_1->link_params, &VAR_1->link_vars, &VAR_2);
 FUNC_1(VAR_1);
}

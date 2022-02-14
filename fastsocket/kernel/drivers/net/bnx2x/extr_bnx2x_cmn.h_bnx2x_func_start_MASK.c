
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_func_start_params {int gre_tunnel_rss; int gre_tunnel_mode; int network_cos_mode; int sd_vlan_tag; int mf_mode; } ;
struct TYPE_2__ {struct bnx2x_func_start_params start; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; int ramrod_flags; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int mf_ov; int mf_mode; int func_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_func_state_params*) ;

__attribute__((used)) static inline int FUNC_2(struct bnx2x *VAR_5)
{
 struct bnx2x_func_state_params VAR_6 = {((void*)0)};
 struct bnx2x_func_start_params *VAR_7 =
  &VAR_6.params.start;


 FUNC_0(VAR_4, &VAR_6.ramrod_flags);

 VAR_6.f_obj = &VAR_5->func_obj;
 VAR_6.cmd = VAR_0;


 VAR_7->mf_mode = VAR_5->mf_mode;
 VAR_7->sd_vlan_tag = VAR_5->mf_ov;
 VAR_7->network_cos_mode = VAR_3;

 VAR_7->gre_tunnel_mode = VAR_2;
 VAR_7->gre_tunnel_rss = VAR_1;

 return FUNC_1(VAR_5, &VAR_6);
}

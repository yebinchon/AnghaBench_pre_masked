
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_data {int cmd; int vlan_mac_flags; } ;
struct bnx2x_vlan_mac_ramrod_params {int ramrod_flags; struct bnx2x_vlan_mac_data user_req; } ;
struct bnx2x_vfop_vlan_mac_flags {scalar_t__ add; scalar_t__ dont_consume; scalar_t__ single_cmd; scalar_t__ drv_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2x_vlan_mac_ramrod_params*,int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct bnx2x_vlan_mac_ramrod_params *VAR_5,
    struct bnx2x_vfop_vlan_mac_flags *VAR_6)
{
 struct bnx2x_vlan_mac_data *VAR_7 = &VAR_5->user_req;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));


 if (VAR_6->drv_only)
  FUNC_1(VAR_3, &VAR_5->ramrod_flags);
 if (VAR_6->single_cmd)
  FUNC_1(VAR_4, &VAR_5->ramrod_flags);


 if (VAR_6->dont_consume)
  FUNC_1(VAR_0, &VAR_7->vlan_mac_flags);


 VAR_7->cmd = VAR_6->add ? VAR_1 : VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vlan_mac_flags; } ;
struct bnx2x_vlan_mac_ramrod_params {TYPE_1__ user_req; } ;
struct bnx2x_vfop_vlan_mac_flags {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x_vlan_mac_ramrod_params*,struct bnx2x_vfop_vlan_mac_flags*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct bnx2x_vlan_mac_ramrod_params *VAR_1,
      struct bnx2x_vfop_vlan_mac_flags *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_0, &VAR_1->user_req.vlan_mac_flags);
}

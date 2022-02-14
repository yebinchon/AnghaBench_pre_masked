
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vlan; } ;
struct TYPE_4__ {int mac; } ;
struct TYPE_6__ {TYPE_2__ vlan; TYPE_1__ mac; } ;
struct bnx2x_vlan_mac_data {TYPE_3__ u; int cmd; } ;
struct bnx2x_vfop_filter {int type; int vid; int mac; scalar_t__ add; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_3,
        struct bnx2x_vfop_filter *VAR_4,
        struct bnx2x_vlan_mac_data *VAR_5)
{
 VAR_5->cmd = VAR_4->add ? VAR_0 :
  VAR_1;

 switch (VAR_4->type) {
 case 129:
  FUNC_1(VAR_5->u.mac.mac, VAR_4->mac, VAR_2);
  break;
 case 128:
  VAR_5->u.vlan.vlan = VAR_4->vid;
  break;
 default:
  FUNC_0("Invalid filter type, skipping\n");
  return 1;
 }
 return 0;
}

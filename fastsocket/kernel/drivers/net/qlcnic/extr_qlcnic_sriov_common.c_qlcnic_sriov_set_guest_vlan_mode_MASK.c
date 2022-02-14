
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_sriov {int any_vlan; int num_allowed_vlans; int * allowed_vlans; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_3__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_2,
         struct qlcnic_cmd_args *VAR_3)
{
 struct qlcnic_sriov *VAR_4 = VAR_2->ahw->sriov;
 int VAR_5, VAR_6;
 u16 *VAR_7;

 if (VAR_4->allowed_vlans)
  return 0;

 VAR_4->any_vlan = VAR_3->rsp.arg[2] & 0xf;
 if (!VAR_4->any_vlan)
  return 0;

 VAR_4->num_allowed_vlans = VAR_3->rsp.arg[2] >> 16;
 VAR_6 = VAR_4->num_allowed_vlans;
 VAR_4->allowed_vlans = FUNC_0(sizeof(u16) * VAR_6, VAR_1);
 if (!VAR_4->allowed_vlans)
  return -VAR_0;

 VAR_7 = (u16 *)&VAR_3->rsp.arg[3];
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_4->allowed_vlans[VAR_5] = VAR_7[VAR_5];

 return 0;
}

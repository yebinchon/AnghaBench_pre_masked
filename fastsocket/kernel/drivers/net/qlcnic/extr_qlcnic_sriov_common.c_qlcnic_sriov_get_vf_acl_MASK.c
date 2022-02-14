
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_sriov {int vlan_mode; } ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_adapter {TYPE_1__* pdev; TYPE_3__* ahw; } ;
struct TYPE_6__ {struct qlcnic_sriov* sriov; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_cmd_args*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_sriov *VAR_2 = VAR_1->ahw->sriov;
 struct qlcnic_cmd_args VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_1->pdev->dev, "Failed to get ACL, err=%d\n",
   VAR_4);
 } else {
  VAR_2->vlan_mode = VAR_3.rsp.arg[1] & 0x3;
  switch (VAR_2->vlan_mode) {
  case 129:
   VAR_4 = FUNC_4(VAR_1, &VAR_3);
   break;
  case 128:
   VAR_4 = FUNC_5(VAR_1, &VAR_3);
   break;
  }
 }

 FUNC_1(&VAR_3);
 return VAR_4;
}

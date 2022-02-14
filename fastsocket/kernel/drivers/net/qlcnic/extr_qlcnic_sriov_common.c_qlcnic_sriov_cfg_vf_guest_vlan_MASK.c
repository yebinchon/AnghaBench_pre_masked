
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_sriov {int vlan; int bc; } ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {int netdev; TYPE_3__* pdev; TYPE_1__* ahw; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_cmd_args*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qlcnic_sriov*,int,int) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct qlcnic_adapter *VAR_1,
       u16 VAR_2, u8 VAR_3)
{
 struct qlcnic_sriov *VAR_4 = VAR_1->ahw->sriov;
 struct qlcnic_cmd_args VAR_5;
 int VAR_6;

 if (VAR_2 == 0)
  return 0;

 VAR_6 = FUNC_6(VAR_4, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(&VAR_5,
          VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_5.req.arg[1] = (VAR_3 & 1) | VAR_2 << 16;

 FUNC_5(&VAR_4->bc);
 VAR_6 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_1->pdev->dev,
   "Failed to configure guest VLAN, err=%d\n", VAR_6);
 } else {
  FUNC_1(VAR_1);

  if (VAR_3)
   VAR_4->vlan = VAR_2;
  else
   VAR_4->vlan = 0;

  FUNC_7(VAR_1->netdev);
 }

 FUNC_2(&VAR_5);
 return VAR_6;
}

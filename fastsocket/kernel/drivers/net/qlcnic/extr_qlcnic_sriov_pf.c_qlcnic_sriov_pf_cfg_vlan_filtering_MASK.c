
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2,
           u8 VAR_3)
{
 struct qlcnic_cmd_args VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_4.req.arg[1] = 0x4;
 if (VAR_3)
  VAR_4.req.arg[1] |= VAR_0;

 VAR_5 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_2->pdev->dev,
   "Failed to configure VLAN filtering, err=%d\n", VAR_5);

 FUNC_2(&VAR_4);
 return VAR_5;
}

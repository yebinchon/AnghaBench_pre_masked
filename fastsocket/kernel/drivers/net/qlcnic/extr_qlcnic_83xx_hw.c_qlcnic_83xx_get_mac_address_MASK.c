
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_adapter*,scalar_t__*,int ,struct qlcnic_cmd_args*) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_5(struct qlcnic_adapter *VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7;
 struct qlcnic_cmd_args VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_2(&VAR_8, VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_5, VAR_2, &VAR_8);
 VAR_6 = FUNC_4(VAR_4, &VAR_8);

 if (VAR_6 == VAR_3) {
  VAR_9 = VAR_8.rsp.arg[1];
  VAR_10 = VAR_8.rsp.arg[2];

  for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
   VAR_5[VAR_7] = (u8) (VAR_10 >> ((1 - VAR_7) * 8));
  for (VAR_7 = 2; VAR_7 < 6; VAR_7++)
   VAR_5[VAR_7] = (u8) (VAR_9 >> ((5 - VAR_7) * 8));
 } else {
  FUNC_0(&VAR_4->pdev->dev, "Failed to get mac address%d\n",
   VAR_6);
  VAR_6 = -VAR_0;
 }
 FUNC_3(&VAR_8);
 return VAR_6;
}

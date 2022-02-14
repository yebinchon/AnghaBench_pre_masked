
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; int state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct qlcnic_adapter *VAR_4, u8 VAR_5)
{
 struct qlcnic_cmd_args VAR_6;
 int VAR_7;

 if (!FUNC_4(VAR_3, &VAR_4->state))
  return 0;

 if (FUNC_2(&VAR_6, VAR_4, VAR_1))
  return -VAR_0;

 if (VAR_5)
  VAR_6.req.arg[1] = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);

 VAR_7 = FUNC_1(VAR_4, &VAR_6);

 if (VAR_7 != VAR_2) {
  FUNC_0(&VAR_4->pdev->dev,
   "Failed to %s bc events, err=%d\n",
   (VAR_5 ? "enable" : "disable"), VAR_7);
 }

 FUNC_3(&VAR_6);
 return VAR_7;
}

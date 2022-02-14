
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_3,
         u32 *VAR_4, u32 *VAR_5)
{
 struct device *VAR_6 = &VAR_3->pdev->dev;
 struct qlcnic_cmd_args VAR_7;
 u8 VAR_8 = *VAR_4 >> 8;
 int VAR_9 = -VAR_0;

 FUNC_2(&VAR_7, VAR_3,
         VAR_1);
 VAR_7.req.arg[1] = *VAR_4;
 VAR_9 = FUNC_4(VAR_3, &VAR_7);
 *VAR_4 = VAR_7.rsp.arg[1];
 *VAR_5 = VAR_7.rsp.arg[2];
 FUNC_3(&VAR_7);

 if (VAR_9 == VAR_2)
  FUNC_1(VAR_6, "Get eSwitch port config for vNIC function %d\n",
    VAR_8);
 else
  FUNC_0(VAR_6, "Failed to get eswitch port config for vNIC function %d\n",
   VAR_8);
 return VAR_9;
}

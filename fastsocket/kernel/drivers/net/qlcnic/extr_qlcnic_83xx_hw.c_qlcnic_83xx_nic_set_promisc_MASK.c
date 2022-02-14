
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; TYPE_3__* recv_ctx; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_adapter*,int*) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_5(struct qlcnic_adapter *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;
 struct qlcnic_cmd_args VAR_7;

 if (VAR_3->recv_ctx->state == VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_7, VAR_3, VAR_1);
 FUNC_1(VAR_3, &VAR_6);
 VAR_7.req.arg[1] = (VAR_4 ? 1 : 0) | VAR_6;
 VAR_5 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_5)
  FUNC_0(&VAR_3->pdev->dev,
    "Promiscous mode config failed\n");

 FUNC_3(&VAR_7);
 return VAR_5;
}

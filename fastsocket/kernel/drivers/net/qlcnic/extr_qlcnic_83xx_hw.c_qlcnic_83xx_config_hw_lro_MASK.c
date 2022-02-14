
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_1__* recv_ctx; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {scalar_t__ state; int context_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_4(struct qlcnic_adapter *VAR_6, int VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10;
 struct qlcnic_cmd_args VAR_11;
 int VAR_12;

 VAR_12 = (VAR_7 ? (VAR_0 | VAR_1 | VAR_2 | VAR_3) : 0);

 if (VAR_6->recv_ctx->state == VAR_5)
  return 0;

 FUNC_1(&VAR_11, VAR_6, VAR_4);
 VAR_9 = VAR_6->recv_ctx->context_id << 16;
 VAR_10 = VAR_12 | VAR_9;
 VAR_11.req.arg[1] = VAR_10;

 VAR_8 = FUNC_3(VAR_6, &VAR_11);
 if (VAR_8)
  FUNC_0(&VAR_6->pdev->dev, "LRO config failed\n");
 FUNC_2(&VAR_11);

 return VAR_8;
}

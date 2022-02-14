
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_nic_intr_coalesce {int type; int rx_time_us; int rx_packets; int tx_time_us; int tx_packets; int flag; } ;
struct TYPE_9__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ req; } ;
struct qlcnic_adapter {TYPE_5__* pdev; TYPE_3__* tx_ring; TYPE_2__* recv_ctx; TYPE_1__* ahw; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int ctx_id; } ;
struct TYPE_7__ {scalar_t__ state; int context_id; } ;
struct TYPE_6__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

void FUNC_4(struct qlcnic_adapter *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 struct qlcnic_cmd_args VAR_8;
 struct qlcnic_nic_intr_coalesce *VAR_9 = &VAR_5->ahw->coal;

 if (VAR_5->recv_ctx->state == VAR_1)
  return;

 FUNC_1(&VAR_8, VAR_5, VAR_0);
 if (VAR_9->type == VAR_2) {
  VAR_7 = VAR_5->recv_ctx->context_id;
  VAR_8.req.arg[1] = VAR_2 | VAR_7 << 16;
  VAR_7 = VAR_9->rx_time_us;
  VAR_8.req.arg[2] = VAR_9->rx_packets | VAR_7 << 16;
 } else if (VAR_9->type == VAR_3) {
  VAR_7 = VAR_5->tx_ring->ctx_id;
  VAR_8.req.arg[1] = VAR_3 | VAR_7 << 16;
  VAR_7 = VAR_9->tx_time_us;
  VAR_8.req.arg[2] = VAR_9->tx_packets | VAR_7 << 16;
 }
 VAR_8.req.arg[3] = VAR_9->flag;
 VAR_6 = FUNC_3(VAR_5, &VAR_8);
 if (VAR_6 != VAR_4)
  FUNC_0(&VAR_5->pdev->dev,
    "Failed to send interrupt coalescence parameters\n");
 FUNC_2(&VAR_8);
}

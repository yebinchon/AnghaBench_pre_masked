
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_recv_context {int dummy; } ;
struct TYPE_4__ {int tx_packets; int tx_time_us; int rx_packets; int rx_time_us; int type; int flag; } ;
struct qlcnic_hardware_context {TYPE_2__ coal; } ;
struct qlcnic_adapter {int stats; TYPE_1__* pdev; int recv_ctx; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_8)
{
 struct qlcnic_hardware_context *VAR_9 = VAR_8->ahw;
 int VAR_10 = 0;

 VAR_8->recv_ctx = FUNC_1(sizeof(struct qlcnic_recv_context),
    VAR_1);
 if (!VAR_8->recv_ctx) {
  FUNC_0(&VAR_8->pdev->dev,
   "Failed to allocate recv ctx resources for adapter\n");
  VAR_10 = -VAR_0;
  goto err_out;
 }

 VAR_9->coal.flag = VAR_7;
 VAR_9->coal.type = VAR_6;
 VAR_9->coal.rx_time_us = VAR_3;
 VAR_9->coal.rx_packets = VAR_2;
 if (FUNC_3(VAR_8)) {
  VAR_9->coal.tx_time_us = VAR_5;
  VAR_9->coal.tx_packets = VAR_4;
 }

 FUNC_2(&VAR_8->stats, 0, sizeof(VAR_8->stats));
err_out:
 return VAR_10;
}

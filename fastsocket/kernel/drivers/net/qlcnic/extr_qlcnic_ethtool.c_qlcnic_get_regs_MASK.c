
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; TYPE_4__* rds_rings; } ;
struct qlcnic_host_sds_ring {int crb_sts_consumer; } ;
struct qlcnic_adapter {int max_sds_rings; TYPE_3__* tx_ring; int state; TYPE_2__* pdev; TYPE_1__* ahw; struct qlcnic_recv_context* recv_ctx; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_8__ {int crb_rcv_producer; } ;
struct TYPE_7__ {int crb_cmd_producer; int * hw_consumer; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {int revision_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int ) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int*) ;
 int FUNC_5 (struct qlcnic_adapter*,int*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct net_device *VAR_4, struct ethtool_regs *VAR_5, void *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_2(VAR_4);
 struct qlcnic_recv_context *VAR_8 = VAR_7->recv_ctx;
 struct qlcnic_host_sds_ring *VAR_9;
 u32 *VAR_10 = VAR_6;
 int VAR_11, VAR_12 = 0;

 FUNC_1(VAR_6, 0, FUNC_6(VAR_4));

 VAR_5->version = (VAR_1 << 24) |
  (VAR_7->ahw->revision_id << 16) | (VAR_7->pdev)->device;

 VAR_10[0] = (0xcafe0000 | (VAR_0 & 0xffff));
 VAR_10[1] = VAR_2;

 if (FUNC_3(VAR_7))
  VAR_12 = FUNC_4(VAR_7, VAR_10);
 else
  VAR_12 = FUNC_5(VAR_7, VAR_10);

 if (!FUNC_8(VAR_3, &VAR_7->state))
  return;

 VAR_10[VAR_12++] = 0xFFEFCDAB;

 VAR_10[VAR_12++] = 1;
 VAR_10[VAR_12++] = FUNC_0(*(VAR_7->tx_ring->hw_consumer));
 VAR_10[VAR_12++] = FUNC_7(VAR_7->tx_ring->crb_cmd_producer);

 VAR_10[VAR_12++] = 2;
 VAR_10[VAR_12++] = FUNC_7(VAR_8->rds_rings[0].crb_rcv_producer);
 VAR_10[VAR_12++] = FUNC_7(VAR_8->rds_rings[1].crb_rcv_producer);

 VAR_10[VAR_12++] = VAR_7->max_sds_rings;

 for (VAR_11 = 0; VAR_11 < VAR_7->max_sds_rings; VAR_11++) {
  VAR_9 = &(VAR_8->sds_rings[VAR_11]);
  VAR_10[VAR_12++] = FUNC_7(VAR_9->crb_sts_consumer);
 }
}

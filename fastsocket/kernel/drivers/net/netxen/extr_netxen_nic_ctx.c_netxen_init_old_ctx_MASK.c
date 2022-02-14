
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nx_host_tx_ring {int num_desc; int phys_addr; } ;
struct nx_host_sds_ring {int num_desc; int phys_addr; } ;
struct nx_host_rds_ring {int num_desc; int phys_addr; } ;
struct netxen_ring_ctx {void* sts_ring_count; TYPE_2__* sts_rings; void* sts_ring_size; void* sts_ring_addr; TYPE_1__* rcv_rings; void* cmd_ring_size; void* cmd_ring_addr; } ;
struct netxen_recv_context {int phys_addr; struct nx_host_sds_ring* sds_rings; struct nx_host_rds_ring* rds_rings; struct netxen_ring_ctx* hwctx; } ;
struct netxen_adapter {int portnum; int max_rds_rings; int max_sds_rings; struct netxen_recv_context recv_ctx; struct nx_host_tx_ring* tx_ring; } ;
struct TYPE_4__ {int msi_index; void* size; void* addr; } ;
struct TYPE_3__ {void* size; void* addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct netxen_adapter*,int ,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct netxen_adapter *VAR_2)
{
 struct netxen_recv_context *VAR_3;
 struct nx_host_rds_ring *VAR_4;
 struct nx_host_sds_ring *VAR_5;
 struct nx_host_tx_ring *VAR_6;
 int VAR_7;
 int VAR_8 = VAR_2->portnum;
 struct netxen_ring_ctx *VAR_9;
 u32 VAR_10;

 VAR_6 = VAR_2->tx_ring;
 VAR_3 = &VAR_2->recv_ctx;
 VAR_9 = VAR_3->hwctx;

 VAR_9->cmd_ring_addr = FUNC_6(VAR_6->phys_addr);
 VAR_9->cmd_ring_size = FUNC_5(VAR_6->num_desc);


 for (VAR_7 = 0; VAR_7 < VAR_2->max_rds_rings; VAR_7++) {
  VAR_4 = &VAR_3->rds_rings[VAR_7];

  VAR_9->rcv_rings[VAR_7].addr =
   FUNC_6(VAR_4->phys_addr);
  VAR_9->rcv_rings[VAR_7].size =
   FUNC_5(VAR_4->num_desc);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->max_sds_rings; VAR_7++) {
  VAR_5 = &VAR_3->sds_rings[VAR_7];

  if (VAR_7 == 0) {
   VAR_9->sts_ring_addr = FUNC_6(VAR_5->phys_addr);
   VAR_9->sts_ring_size = FUNC_5(VAR_5->num_desc);
  }
  VAR_9->sts_rings[VAR_7].addr = FUNC_6(VAR_5->phys_addr);
  VAR_9->sts_rings[VAR_7].size = FUNC_5(VAR_5->num_desc);
  VAR_9->sts_rings[VAR_7].msi_index = FUNC_4(VAR_7);
 }
 VAR_9->sts_ring_count = FUNC_5(VAR_2->max_sds_rings);

 VAR_10 = (VAR_2->max_sds_rings > 1) ?
  VAR_1 : VAR_0;

 FUNC_3(VAR_2, FUNC_1(VAR_8),
   FUNC_7(VAR_3->phys_addr));
 FUNC_3(VAR_2, FUNC_0(VAR_8),
   FUNC_8(VAR_3->phys_addr));
 FUNC_3(VAR_2, FUNC_2(VAR_8),
   VAR_10 | VAR_8);
 return 0;
}

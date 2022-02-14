
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tx_ring {int wq_id; int wq_len; int wq_size; int cq_id; struct ql_adapter* qdev; } ;
struct rx_ring {int cq_id; int cpu; int cq_len; int cq_size; int lbq_len; int lbq_size; int sbq_len; int sbq_size; int type; scalar_t__ sbq_buf_size; scalar_t__ lbq_buf_size; struct ql_adapter* qdev; } ;
struct ql_net_rsp_iocb {int dummy; } ;
struct ql_adapter {int intr_count; int rss_ring_count; int tx_ring_count; int rx_ring_count; int tx_ring_size; int rx_ring_size; struct rx_ring* rx_ring; struct tx_ring* tx_ring; int lbq_buf_order; TYPE_1__* ndev; } ;
struct ob_mac_iocb_req {int dummy; } ;
typedef int __le64 ;
struct TYPE_2__ {int mtu; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_8)
{
 int VAR_9;
 struct rx_ring *VAR_10;
 struct tx_ring *VAR_11;
 int VAR_12 = FUNC_2(VAR_2, (int)FUNC_3());
 unsigned int VAR_13 = (VAR_8->ndev->mtu > 1500) ?
  VAR_0 : VAR_1;

 VAR_8->lbq_buf_order = FUNC_0(VAR_13);
 VAR_8->intr_count = VAR_12;
 FUNC_4(VAR_8);

 VAR_8->rss_ring_count = VAR_8->intr_count;
 VAR_8->tx_ring_count = VAR_12;
 VAR_8->rx_ring_count = VAR_8->tx_ring_count + VAR_8->rss_ring_count;

 for (VAR_9 = 0; VAR_9 < VAR_8->tx_ring_count; VAR_9++) {
  VAR_11 = &VAR_8->tx_ring[VAR_9];
  FUNC_1((void *)VAR_11, 0, sizeof(*VAR_11));
  VAR_11->qdev = VAR_8;
  VAR_11->wq_id = VAR_9;
  VAR_11->wq_len = VAR_8->tx_ring_size;
  VAR_11->wq_size =
      VAR_11->wq_len * sizeof(struct ob_mac_iocb_req);





  VAR_11->cq_id = VAR_8->rss_ring_count + VAR_9;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->rx_ring_count; VAR_9++) {
  VAR_10 = &VAR_8->rx_ring[VAR_9];
  FUNC_1((void *)VAR_10, 0, sizeof(*VAR_10));
  VAR_10->qdev = VAR_8;
  VAR_10->cq_id = VAR_9;
  VAR_10->cpu = VAR_9 % VAR_12;
  if (VAR_9 < VAR_8->rss_ring_count) {



   VAR_10->cq_len = VAR_8->rx_ring_size;
   VAR_10->cq_size =
       VAR_10->cq_len * sizeof(struct ql_net_rsp_iocb);
   VAR_10->lbq_len = VAR_3;
   VAR_10->lbq_size =
       VAR_10->lbq_len * sizeof(__le64);
   VAR_10->lbq_buf_size = (u16)VAR_13;
   VAR_10->sbq_len = VAR_4;
   VAR_10->sbq_size =
       VAR_10->sbq_len * sizeof(__le64);
   VAR_10->sbq_buf_size = VAR_6;
   VAR_10->type = VAR_5;
  } else {




   VAR_10->cq_len = VAR_8->tx_ring_size;
   VAR_10->cq_size =
       VAR_10->cq_len * sizeof(struct ql_net_rsp_iocb);
   VAR_10->lbq_len = 0;
   VAR_10->lbq_size = 0;
   VAR_10->lbq_buf_size = 0;
   VAR_10->sbq_len = 0;
   VAR_10->sbq_size = 0;
   VAR_10->sbq_buf_size = 0;
   VAR_10->type = VAR_7;
  }
 }
 return 0;
}

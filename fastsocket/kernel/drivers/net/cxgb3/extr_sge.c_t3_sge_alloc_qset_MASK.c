
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tx_sw_desc {int dummy; } ;
struct tx_desc {int dummy; } ;
struct skb_shared_info {int dummy; } ;
struct TYPE_7__ {int gen; int size; int holdoff_tmr; int cntxt_id; int phys_addr; int rx_queue; int lock; void* desc; } ;
struct sge_qset {TYPE_3__ rspq; TYPE_4__* fl; struct netdev_queue* tx_q; struct net_device* netdev; struct adapter* adap; TYPE_1__* txq; int rx_reclaim_timer; int tx_reclaim_timer; } ;
struct rx_sw_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct rsp_desc {int dummy; } ;
struct qset_params {int fl_size; int jumbo_size; int rspq_size; int* txq_size; int cong_thres; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct cpl_rx_pkt {int dummy; } ;
struct cpl_rx_data {int dummy; } ;
struct TYPE_6__ {int reg_lock; struct sge_qset* qs; } ;
struct adapter {TYPE_2__ sge; int pdev; } ;
struct TYPE_8__ {int gen; int size; int buf_size; int use_pages; int phys_addr; int cntxt_id; int alloc_size; int order; void* desc; int sdesc; } ;
struct TYPE_5__ {int gen; int size; int stop_thres; int token; int phys_addr; int cntxt_id; int qresume_tsk; int sendq; int lock; void* desc; int sdesc; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*) ;
 int FUNC_1 (struct adapter*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_21 ;
 void* FUNC_5 (int ,int,int,size_t,int *,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sge_qset*,unsigned int) ;
 scalar_t__ FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*,TYPE_4__*,int,int) ;
 int FUNC_10 (struct adapter*,TYPE_3__*,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int *,int ,unsigned long) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct adapter*,struct sge_qset*) ;
 int FUNC_18 (struct adapter*,int ,int ,int ,unsigned int,int ,int,int ,int,int ) ;
 int FUNC_19 (struct adapter*,int ,int ,int ,int,int,int ,int,int ) ;
 int FUNC_20 (struct adapter*,int ,int,int ,int,int,int,int ) ;
 int FUNC_21 (struct sge_qset*,struct qset_params const*) ;
 int FUNC_22 (struct adapter*,int ,int) ;
 int FUNC_23 (int *,int ,unsigned long) ;

int FUNC_24(struct adapter *VAR_26, unsigned int VAR_27, int VAR_28,
        int VAR_29, const struct qset_params *VAR_30,
        int VAR_31, struct net_device *VAR_32,
        struct netdev_queue *VAR_33)
{
 int VAR_34, VAR_35, VAR_36 = -VAR_1;
 struct sge_qset *VAR_37 = &VAR_26->sge.qs[VAR_27];

 FUNC_7(VAR_37, VAR_27);
 FUNC_11(&VAR_37->tx_reclaim_timer, VAR_25, (unsigned long)VAR_37);
 FUNC_11(&VAR_37->rx_reclaim_timer, VAR_24, (unsigned long)VAR_37);

 VAR_37->fl[0].desc = FUNC_5(VAR_26->pdev, VAR_30->fl_size,
       sizeof(struct rx_desc),
       sizeof(struct rx_sw_desc),
       &VAR_37->fl[0].phys_addr, &VAR_37->fl[0].sdesc);
 if (!VAR_37->fl[0].desc)
  goto err;

 VAR_37->fl[1].desc = FUNC_5(VAR_26->pdev, VAR_30->jumbo_size,
       sizeof(struct rx_desc),
       sizeof(struct rx_sw_desc),
       &VAR_37->fl[1].phys_addr, &VAR_37->fl[1].sdesc);
 if (!VAR_37->fl[1].desc)
  goto err;

 VAR_37->rspq.desc = FUNC_5(VAR_26->pdev, VAR_30->rspq_size,
      sizeof(struct rsp_desc), 0,
      &VAR_37->rspq.phys_addr, ((void*)0));
 if (!VAR_37->rspq.desc)
  goto err;

 for (VAR_34 = 0; VAR_34 < VAR_31; ++VAR_34) {




  size_t VAR_38 = VAR_34 == VAR_17 ? 0 : sizeof(struct tx_sw_desc);

  VAR_37->txq[VAR_34].desc = FUNC_5(VAR_26->pdev, VAR_30->txq_size[VAR_34],
         sizeof(struct tx_desc), VAR_38,
         &VAR_37->txq[VAR_34].phys_addr,
         &VAR_37->txq[VAR_34].sdesc);
  if (!VAR_37->txq[VAR_34].desc)
   goto err;

  VAR_37->txq[VAR_34].gen = 1;
  VAR_37->txq[VAR_34].size = VAR_30->txq_size[VAR_34];
  FUNC_14(&VAR_37->txq[VAR_34].lock);
  FUNC_13(&VAR_37->txq[VAR_34].sendq);
 }

 FUNC_23(&VAR_37->txq[VAR_19].qresume_tsk, VAR_23,
       (unsigned long)VAR_37);
 FUNC_23(&VAR_37->txq[VAR_17].qresume_tsk, VAR_22,
       (unsigned long)VAR_37);

 VAR_37->fl[0].gen = VAR_37->fl[1].gen = 1;
 VAR_37->fl[0].size = VAR_30->fl_size;
 VAR_37->fl[1].size = VAR_30->jumbo_size;

 VAR_37->rspq.gen = 1;
 VAR_37->rspq.size = VAR_30->rspq_size;
 FUNC_14(&VAR_37->rspq.lock);
 FUNC_13(&VAR_37->rspq.rx_queue);

 VAR_37->txq[VAR_18].stop_thres = VAR_28 *
     FUNC_6(FUNC_12(VAR_10 + 1) + 3);




 VAR_37->fl[0].buf_size = VAR_16 + sizeof(struct cpl_rx_data);




 VAR_37->fl[1].buf_size = FUNC_8(VAR_26) ?
  (16 * 1024) - FUNC_2(sizeof(struct skb_shared_info)) :
  VAR_9 + 2 + sizeof(struct cpl_rx_pkt);


 VAR_37->fl[0].use_pages = VAR_3 > 0;
 VAR_37->fl[1].use_pages = VAR_6 > 0;
 VAR_37->fl[0].order = VAR_4;
 VAR_37->fl[1].order = VAR_7;
 VAR_37->fl[0].alloc_size = VAR_2;
 VAR_37->fl[1].alloc_size = VAR_5;

 FUNC_15(&VAR_26->sge.reg_lock);


 VAR_36 = FUNC_20(VAR_26, VAR_37->rspq.cntxt_id, VAR_29,
       VAR_37->rspq.phys_addr, VAR_37->rspq.size,
       VAR_37->fl[0].buf_size - VAR_14, 1, 0);
 if (VAR_36)
  goto err_unlock;

 for (VAR_34 = 0; VAR_34 < VAR_15; ++VAR_34) {
  VAR_36 = FUNC_19(VAR_26, VAR_37->fl[VAR_34].cntxt_id, 0,
       VAR_37->fl[VAR_34].phys_addr, VAR_37->fl[VAR_34].size,
       VAR_37->fl[VAR_34].buf_size - VAR_14,
       VAR_30->cong_thres, 1, 0);
  if (VAR_36)
   goto err_unlock;
 }

 VAR_36 = FUNC_18(VAR_26, VAR_37->txq[VAR_18].cntxt_id, VAR_20,
     VAR_12, VAR_27, VAR_37->txq[VAR_18].phys_addr,
     VAR_37->txq[VAR_18].size, VAR_37->txq[VAR_18].token,
     1, 0);
 if (VAR_36)
  goto err_unlock;

 if (VAR_31 > 1) {
  VAR_36 = FUNC_18(VAR_26, VAR_37->txq[VAR_19].cntxt_id,
      VAR_20, VAR_13, VAR_27,
      VAR_37->txq[VAR_19].phys_addr,
      VAR_37->txq[VAR_19].size, 0, 1, 0);
  if (VAR_36)
   goto err_unlock;
 }

 if (VAR_31 > 2) {
  VAR_36 = FUNC_18(VAR_26, VAR_37->txq[VAR_17].cntxt_id, 0,
      VAR_11, VAR_27,
      VAR_37->txq[VAR_17].phys_addr,
      VAR_37->txq[VAR_17].size,
      VAR_37->txq[VAR_17].token, 1, 0);
  if (VAR_36)
   goto err_unlock;
 }

 FUNC_16(&VAR_26->sge.reg_lock);

 VAR_37->adap = VAR_26;
 VAR_37->netdev = VAR_32;
 VAR_37->tx_q = VAR_33;
 FUNC_21(VAR_37, VAR_30);

 VAR_35 = FUNC_9(VAR_26, &VAR_37->fl[0], VAR_37->fl[0].size,
     VAR_8 | VAR_21);
 if (!VAR_35) {
  FUNC_0(VAR_26, "free list queue 0 initialization failed\n");
  goto err;
 }
 if (VAR_35 < VAR_37->fl[0].size)
  FUNC_1(VAR_26, "free list queue 0 enabled with %d credits\n",
   VAR_35);

 VAR_35 = FUNC_9(VAR_26, &VAR_37->fl[1], VAR_37->fl[1].size,
     VAR_8 | VAR_21);
 if (VAR_35 < VAR_37->fl[1].size)
  FUNC_1(VAR_26, "free list queue 1 enabled with %d credits\n",
   VAR_35);
 FUNC_10(VAR_26, &VAR_37->rspq, VAR_37->rspq.size - 1);

 FUNC_22(VAR_26, VAR_0, FUNC_4(VAR_37->rspq.cntxt_id) |
       FUNC_3(VAR_37->rspq.holdoff_tmr));

 return 0;

err_unlock:
 FUNC_16(&VAR_26->sge.reg_lock);
err:
 FUNC_17(VAR_26, VAR_37);
 return VAR_36;
}

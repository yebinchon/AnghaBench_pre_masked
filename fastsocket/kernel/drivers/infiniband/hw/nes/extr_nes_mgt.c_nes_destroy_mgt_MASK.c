
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {size_t rq_head; size_t rq_tail; int rq_size; size_t qp_id; struct sk_buff** rx_skb; } ;
struct TYPE_4__ {size_t cq_number; scalar_t__ cq_size; } ;
struct nes_vnic_mgt {TYPE_3__ mgt; TYPE_1__ mgt_cq; } ;
struct nes_vnic {int mgt_pbase; int * mgt_vbase; int mgt_mem_size; struct nes_vnic_mgt** mgtvnic; int mgt_thread; struct nes_device* nesdev; } ;
struct nes_hw_cqp_wqe {int wqe_words; } ;
struct TYPE_5__ {size_t sq_head; size_t sq_size; int qp_id; size_t sq_tail; int waitq; int lock; struct nes_hw_cqp_wqe* sq_vbase; } ;
struct nes_device {int pcidev; TYPE_2__ cqp; scalar_t__ regs; scalar_t__ ceq_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (struct nes_vnic_mgt*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,size_t,...) ;
 int FUNC_4 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 int FUNC_5 (struct nes_device*,struct sk_buff*,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ,int ,size_t) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int,int ) ;

void FUNC_12(struct nes_vnic *VAR_10)
{
 struct nes_device *VAR_11 = VAR_10->nesdev;
 struct nes_vnic_mgt *VAR_12;
 struct nes_vnic_mgt *VAR_13;
 unsigned long VAR_14;
 struct nes_hw_cqp_wqe *VAR_15;
 u32 VAR_16;
 struct sk_buff *VAR_17;
 int VAR_18;
 int VAR_19;

 FUNC_2(VAR_10->mgt_thread);


 VAR_13 = VAR_10->mgtvnic[0];
 for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
  VAR_12 = VAR_10->mgtvnic[VAR_18];
  if (VAR_12 == ((void*)0))
   continue;

  while (VAR_12->mgt.rq_head != VAR_12->mgt.rq_tail) {
   VAR_17 = VAR_12->mgt.rx_skb[VAR_12->mgt.rq_tail];
   FUNC_5(VAR_11, VAR_17, VAR_9);
   VAR_12->mgt.rq_tail++;
   VAR_12->mgt.rq_tail &= (VAR_12->mgt.rq_size - 1);
  }

  FUNC_9(&VAR_11->cqp.lock, VAR_14);


  VAR_16 = VAR_11->cqp.sq_head;
  VAR_15 = &VAR_11->cqp.sq_vbase[VAR_16];
  FUNC_4(VAR_15, VAR_11);

  FUNC_8(VAR_15->wqe_words, VAR_4,
        (VAR_1 | VAR_2));
  FUNC_8(VAR_15->wqe_words, VAR_3,
        VAR_12->mgt.qp_id);

  if (++VAR_16 >= VAR_11->cqp.sq_size)
   VAR_16 = 0;

  VAR_15 = &VAR_11->cqp.sq_vbase[VAR_16];


  FUNC_4(VAR_15, VAR_11);
  FUNC_8(VAR_15->wqe_words, VAR_4,
        (VAR_0 | ((u32)VAR_12->mgt_cq.cq_size << 16)));
  FUNC_8(VAR_15->wqe_words, VAR_3,
        (VAR_12->mgt_cq.cq_number | ((u32)VAR_11->ceq_index << 16)));

  if (++VAR_16 >= VAR_11->cqp.sq_size)
   VAR_16 = 0;

  VAR_11->cqp.sq_head = VAR_16;
  FUNC_0();


  FUNC_6(VAR_11->regs + VAR_8, 0x02800000 | VAR_11->cqp.qp_id);

  FUNC_10(&VAR_11->cqp.lock, VAR_14);
  FUNC_3(VAR_5, "Waiting for CQP, cqp_head=%u, cqp.sq_head=%u,"
     " cqp.sq_tail=%u, cqp.sq_size=%u\n",
     VAR_16, VAR_11->cqp.sq_head,
     VAR_11->cqp.sq_tail, VAR_11->cqp.sq_size);

  VAR_19 = FUNC_11(VAR_11->cqp.waitq, (VAR_11->cqp.sq_tail == VAR_16),
      VAR_6);

  FUNC_3(VAR_5, "Destroy MGT QP returned, wait_event_timeout ret = %u, cqp_head=%u,"
     " cqp.sq_head=%u, cqp.sq_tail=%u\n",
     VAR_19, VAR_16, VAR_11->cqp.sq_head, VAR_11->cqp.sq_tail);
  if (!VAR_19)
   FUNC_3(VAR_5, "MGT QP%u destroy timeout expired\n",
      VAR_12->mgt.qp_id);

  VAR_10->mgtvnic[VAR_18] = ((void*)0);
 }

 if (VAR_10->mgt_vbase) {
  FUNC_7(VAR_11->pcidev, VAR_10->mgt_mem_size, VAR_10->mgt_vbase,
        VAR_10->mgt_pbase);
  VAR_10->mgt_vbase = ((void*)0);
  VAR_10->mgt_pbase = 0;
 }

 FUNC_1(VAR_13);
}

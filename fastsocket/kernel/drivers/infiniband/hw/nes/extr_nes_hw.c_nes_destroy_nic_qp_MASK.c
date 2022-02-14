
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int * cb; } ;
struct TYPE_7__ {size_t rq_head; size_t rq_tail; int rq_size; size_t sq_head; size_t sq_tail; int sq_size; int qp_id; struct sk_buff** tx_skb; int first_frag_overflow; struct nes_hw_nic_sq_wqe* sq_vbase; struct sk_buff** rx_skb; } ;
struct TYPE_5__ {int cq_number; scalar_t__ cq_size; } ;
struct nes_vnic {int nic_pbase; int nic_vbase; int nic_mem_size; TYPE_3__ nic; TYPE_1__ nic_cq; struct nes_device* nesdev; } ;
struct nes_rskb_cb {scalar_t__ maplen; scalar_t__ busaddr; } ;
struct nes_hw_nic_sq_wqe {int * wqe_words; } ;
struct nes_hw_cqp_wqe {int wqe_words; } ;
struct TYPE_8__ {int sq_head; int sq_size; int qp_id; int sq_tail; int waitq; int lock; struct nes_hw_cqp_wqe* sq_vbase; } ;
struct nes_device {int pcidev; TYPE_4__ cqp; scalar_t__ regs; scalar_t__ nic_ceq_index; TYPE_2__* nesadapter; } ;
typedef scalar_t__ dma_addr_t ;
typedef scalar_t__ __le16 ;
struct TYPE_6__ {scalar_t__ allow_unaligned_fpdus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct nes_vnic*) ;
 int FUNC_6 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 int FUNC_7 (struct nes_device*,int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (struct nes_device*,int ,int) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (size_t,int ) ;
 int FUNC_17 (int ,int,int ) ;

void FUNC_18(struct nes_vnic *VAR_14)
{
 u64 VAR_15;
 dma_addr_t VAR_16;
 struct nes_device *VAR_17 = VAR_14->nesdev;
 struct nes_hw_cqp_wqe *VAR_18;
 struct nes_hw_nic_sq_wqe *VAR_19;
 __le16 *VAR_20;
 u16 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 unsigned long VAR_24;
 struct sk_buff *VAR_25;
 struct nes_rskb_cb *VAR_26;
 int VAR_27;

 if (VAR_17->nesadapter->allow_unaligned_fpdus)
  FUNC_5(VAR_14);


 VAR_23 = FUNC_7(VAR_17, VAR_7);
 FUNC_9(VAR_17, VAR_7, VAR_23 & 0xFFFF7FFF);


 while (VAR_14->nic.rq_head != VAR_14->nic.rq_tail) {
  VAR_25 = VAR_14->nic.rx_skb[VAR_14->nic.rq_tail];
  VAR_26 = (struct nes_rskb_cb *)&VAR_25->cb[0];
  FUNC_12(VAR_17->pcidev, VAR_26->busaddr, VAR_26->maplen,
   VAR_12);

  FUNC_1(VAR_14->nic.rx_skb[VAR_14->nic.rq_tail++]);
  VAR_14->nic.rq_tail &= (VAR_14->nic.rq_size - 1);
 }


 while (VAR_14->nic.sq_head != VAR_14->nic.sq_tail) {
  VAR_19 = &VAR_14->nic.sq_vbase[VAR_14->nic.sq_tail];
  VAR_21 = 1;
  VAR_20 = (__le16 *)
   &VAR_19->wqe_words[VAR_10];

  VAR_20++;
  if (FUNC_2(VAR_20[VAR_21]) != 0) {
   VAR_15 = (u64)FUNC_3(
    VAR_19->wqe_words[VAR_9+
    VAR_21*2]);
   VAR_15 += ((u64)FUNC_3(
    VAR_19->wqe_words[VAR_8
    + VAR_21*2]))<<32;
   VAR_16 = (dma_addr_t)VAR_15;
   if (FUNC_16(VAR_14->nic.sq_tail,
     VAR_14->nic.first_frag_overflow)) {
    FUNC_12(VAR_17->pcidev,
      VAR_16,
      FUNC_2(VAR_20[
       VAR_21++]),
      VAR_13);
   }
   for (; VAR_21 < 5; VAR_21++) {
    if (VAR_20[VAR_21]) {
     VAR_15 = FUNC_3(
      VAR_19->wqe_words[
      VAR_9+
      VAR_21*2]);
     VAR_15 += ((u64)FUNC_3(
      VAR_19->wqe_words[
      VAR_8+
      VAR_21*2]))<<32;
     VAR_16 = (dma_addr_t)VAR_15;
     FUNC_11(VAR_17->pcidev,
       VAR_16,
       FUNC_2(
       VAR_20[
       VAR_21]),
       VAR_13);
    } else
     break;
   }
  }
  if (VAR_14->nic.tx_skb[VAR_14->nic.sq_tail])
   FUNC_1(
    VAR_14->nic.tx_skb[VAR_14->nic.sq_tail]);

  VAR_14->nic.sq_tail = (VAR_14->nic.sq_tail + 1)
     & (VAR_14->nic.sq_size - 1);
 }

 FUNC_14(&VAR_17->cqp.lock, VAR_24);


 VAR_22 = VAR_17->cqp.sq_head;
 VAR_18 = &VAR_17->cqp.sq_vbase[VAR_22];
 FUNC_6(VAR_18, VAR_17);

 FUNC_13(VAR_18->wqe_words, VAR_4,
  (VAR_1 | VAR_2));
 FUNC_13(VAR_18->wqe_words, VAR_3,
  VAR_14->nic.qp_id);

 if (++VAR_22 >= VAR_17->cqp.sq_size)
  VAR_22 = 0;

 VAR_18 = &VAR_17->cqp.sq_vbase[VAR_22];


 FUNC_6(VAR_18, VAR_17);
 FUNC_13(VAR_18->wqe_words, VAR_4,
  (VAR_0 | ((u32)VAR_14->nic_cq.cq_size << 16)));
 FUNC_13(VAR_18->wqe_words, VAR_3,
  (VAR_14->nic_cq.cq_number | ((u32)VAR_17->nic_ceq_index << 16)));

 if (++VAR_22 >= VAR_17->cqp.sq_size)
  VAR_22 = 0;

 VAR_17->cqp.sq_head = VAR_22;
 FUNC_0();


 FUNC_8(VAR_17->regs+VAR_11, 0x02800000 | VAR_17->cqp.qp_id);

 FUNC_15(&VAR_17->cqp.lock, VAR_24);
 FUNC_4(VAR_5, "Waiting for CQP, cqp_head=%u, cqp.sq_head=%u,"
   " cqp.sq_tail=%u, cqp.sq_size=%u\n",
   VAR_22, VAR_17->cqp.sq_head,
   VAR_17->cqp.sq_tail, VAR_17->cqp.sq_size);

 VAR_27 = FUNC_17(VAR_17->cqp.waitq, (VAR_17->cqp.sq_tail == VAR_22),
   VAR_6);

 FUNC_4(VAR_5, "Destroy NIC QP returned, wait_event_timeout ret = %u, cqp_head=%u,"
   " cqp.sq_head=%u, cqp.sq_tail=%u\n",
   VAR_27, VAR_22, VAR_17->cqp.sq_head, VAR_17->cqp.sq_tail);
 if (!VAR_27) {
  FUNC_4(VAR_5, "NIC QP%u destroy timeout expired\n",
    VAR_14->nic.qp_id);
 }

 FUNC_10(VAR_17->pcidev, VAR_14->nic_mem_size, VAR_14->nic_vbase,
   VAR_14->nic_pbase);


 FUNC_9(VAR_17, VAR_7, VAR_23);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {int * cb; int data; int dev; } ;
struct TYPE_2__ {void* expires; } ;
struct nes_hw_nic {int replenishing_rq; int rq_size; size_t rq_head; int qp_id; int rq_lock; struct sk_buff** rx_skb; struct nes_hw_nic_rq_wqe* rq_vbase; } ;
struct nes_vnic {int max_frame_size; TYPE_1__ rq_wqes_timer; int rx_skb_timer_running; int rx_skbs_needed; struct nes_hw_nic nic; int netdev; struct nes_device* nesdev; } ;
struct nes_rskb_cb {int maplen; scalar_t__ busaddr; } ;
struct nes_hw_nic_rq_wqe {void** wqe_words; } ;
struct nes_device {scalar_t__ regs; int pcidev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 void* FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (int) ;
 void* VAR_7 ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct nes_vnic *VAR_8)
{
 unsigned long VAR_9;
 dma_addr_t VAR_10;
 struct sk_buff *VAR_11;
 struct nes_hw_nic_rq_wqe *VAR_12;
 struct nes_hw_nic *VAR_13;
 struct nes_device *VAR_14;
 struct nes_rskb_cb *VAR_15;
 u32 VAR_16 = 0;

 VAR_13 = &VAR_8->nic;
 VAR_14 = VAR_8->nesdev;
 FUNC_9(&VAR_13->rq_lock, VAR_9);
 if (VAR_13->replenishing_rq !=0) {
  if (((VAR_13->rq_size-1) == FUNC_2(&VAR_8->rx_skbs_needed)) &&
    (FUNC_2(&VAR_8->rx_skb_timer_running) == 0)) {
   FUNC_3(&VAR_8->rx_skb_timer_running, 1);
   FUNC_10(&VAR_13->rq_lock, VAR_9);
   VAR_8->rq_wqes_timer.expires = VAR_7 + (VAR_0/2);
   FUNC_0(&VAR_8->rq_wqes_timer);
  } else
  FUNC_10(&VAR_13->rq_lock, VAR_9);
  return;
 }
 VAR_13->replenishing_rq = 1;
 FUNC_10(&VAR_13->rq_lock, VAR_9);
 do {
  VAR_11 = FUNC_6(VAR_8->max_frame_size);
  if (VAR_11) {
   VAR_11->dev = VAR_8->netdev;

   VAR_10 = FUNC_8(VAR_14->pcidev,
     VAR_11->data, VAR_8->max_frame_size, VAR_6);
   VAR_15 = (struct nes_rskb_cb *)&VAR_11->cb[0];
   VAR_15->busaddr = VAR_10;
   VAR_15->maplen = VAR_8->max_frame_size;

   VAR_12 = &VAR_13->rq_vbase[VAR_8->nic.rq_head];
   VAR_12->wqe_words[VAR_3] =
     FUNC_5(VAR_8->max_frame_size);
   VAR_12->wqe_words[VAR_4] = 0;
   VAR_12->wqe_words[VAR_2] =
     FUNC_5((u32)VAR_10);
   VAR_12->wqe_words[VAR_1] =
     FUNC_5((u32)((u64)VAR_10 >> 32));
   VAR_13->rx_skb[VAR_13->rq_head] = VAR_11;
   VAR_13->rq_head++;
   VAR_13->rq_head &= VAR_13->rq_size - 1;
   FUNC_1(&VAR_8->rx_skbs_needed);
   FUNC_4();
   if (++VAR_16 == 255) {
    FUNC_7(VAR_14->regs+VAR_5, (VAR_16 << 24) | VAR_13->qp_id);
    VAR_16 = 0;
   }
  } else {
   FUNC_9(&VAR_13->rq_lock, VAR_9);
   if (((VAR_13->rq_size-1) == FUNC_2(&VAR_8->rx_skbs_needed)) &&
     (FUNC_2(&VAR_8->rx_skb_timer_running) == 0)) {
    FUNC_3(&VAR_8->rx_skb_timer_running, 1);
    FUNC_10(&VAR_13->rq_lock, VAR_9);
    VAR_8->rq_wqes_timer.expires = VAR_7 + (VAR_0/2);
    FUNC_0(&VAR_8->rq_wqes_timer);
   } else
    FUNC_10(&VAR_13->rq_lock, VAR_9);
   break;
  }
 } while (FUNC_2(&VAR_8->rx_skbs_needed));
 FUNC_4();
 if (VAR_16)
  FUNC_7(VAR_14->regs+VAR_5, (VAR_16 << 24) | VAR_13->qp_id);
 VAR_13->replenishing_rq = 0;
}

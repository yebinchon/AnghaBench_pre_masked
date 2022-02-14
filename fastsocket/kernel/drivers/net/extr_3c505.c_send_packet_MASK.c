
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int len; unsigned int data; } ;
struct TYPE_8__ {unsigned int tx_bytes; } ;
struct net_device {int name; int dma; TYPE_1__ stats; } ;
struct Xmit_pkt {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_11__ {int direction; struct sk_buff* skb; int start_time; } ;
struct TYPE_9__ {unsigned int pkt_len; scalar_t__ buf_seg; scalar_t__ buf_ofs; } ;
struct TYPE_10__ {TYPE_2__ xmit_pkt; } ;
struct TYPE_13__ {int length; TYPE_3__ data; int command; } ;
struct TYPE_12__ {unsigned int dma_buffer; int hcr_val; TYPE_4__ current_dma; int dmaing; scalar_t__ busy; TYPE_6__ tx_pcb; } ;
typedef TYPE_5__ elp_device ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned int) ;
 int VAR_5 ;
 int FUNC_5 (unsigned int,int ,unsigned int) ;
 TYPE_5__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,struct net_device*) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct net_device*,TYPE_6__*) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ,unsigned int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct sk_buff*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_15 (int ,void*) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct net_device *VAR_6, struct sk_buff *VAR_7)
{
 elp_device *VAR_8 = FUNC_6(VAR_6);
 unsigned long VAR_9;
 unsigned long VAR_10;




 unsigned int VAR_11 = (((VAR_7->len < 60) ? 60 : VAR_7->len) + 1) & (~1);

 if (FUNC_15(0, (void *) &VAR_8->busy)) {
  if (VAR_4 >= 2)
   FUNC_8("%s: transmit blocked\n", VAR_6->name);
  return 0;
 }

 VAR_6->stats.tx_bytes += VAR_11;





 VAR_8->tx_pcb.command = VAR_0;
 VAR_8->tx_pcb.length = sizeof(struct Xmit_pkt);
 VAR_8->tx_pcb.data.xmit_pkt.buf_ofs
     = VAR_8->tx_pcb.data.xmit_pkt.buf_seg = 0;
 VAR_8->tx_pcb.data.xmit_pkt.pkt_len = VAR_11;

 if (!FUNC_10(VAR_6, &VAR_8->tx_pcb)) {
  VAR_8->busy = 0;
  return 0;
 }

 if (FUNC_15(0, (void *) &VAR_8->dmaing))
  FUNC_8("%s: tx: DMA %d in progress\n", VAR_6->name, VAR_8->current_dma.direction);

 VAR_8->current_dma.direction = 1;
 VAR_8->current_dma.start_time = VAR_5;

 if ((unsigned long)(VAR_7->data + VAR_11) >= VAR_2 || VAR_11 != VAR_7->len) {
  FUNC_14(VAR_7, VAR_8->dma_buffer, VAR_11);
  FUNC_5(VAR_8->dma_buffer+VAR_7->len, 0, VAR_11-VAR_7->len);
  VAR_9 = FUNC_4(VAR_8->dma_buffer);
 }
 else {
  VAR_9 = FUNC_4(VAR_7->data);
 }
 VAR_8->current_dma.skb = VAR_7;

 VAR_10=FUNC_0();
 FUNC_2(VAR_6->dma);
 FUNC_1(VAR_6->dma);
 FUNC_13(VAR_6->dma, 0x48);
 FUNC_11(VAR_6->dma, VAR_9);
 FUNC_12(VAR_6->dma, VAR_11);
 FUNC_7(VAR_8->hcr_val | VAR_1 | VAR_3, VAR_6);
 FUNC_3(VAR_6->dma);
 FUNC_9(VAR_10);

 if (VAR_4 >= 3)
  FUNC_8("%s: DMA transfer started\n", VAR_6->name);

 return 1;
}

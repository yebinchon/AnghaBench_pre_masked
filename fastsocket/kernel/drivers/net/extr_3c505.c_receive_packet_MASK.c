
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int name; int dma; } ;
struct TYPE_4__ {int length; int start_time; struct sk_buff* skb; scalar_t__ direction; int * target; } ;
struct TYPE_5__ {int hcr_val; int busy; scalar_t__ rx_active; TYPE_1__ current_dma; int dmaing; void* dma_buffer; } ;
typedef TYPE_2__ elp_device ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,struct net_device*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,scalar_t__) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 void* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 scalar_t__ FUNC_17 (int ,void*) ;

__attribute__((used)) static void FUNC_18(struct net_device *VAR_6, int VAR_7)
{
 int VAR_8;
 elp_device *VAR_9 = FUNC_6(VAR_6);
 void *VAR_10;
 struct sk_buff *VAR_11;
 unsigned long VAR_12;

 VAR_8 = (VAR_7 + 1) & ~1;
 VAR_11 = FUNC_2(VAR_8 + 2);

 if (!VAR_11) {
  FUNC_10("%s: memory squeeze, dropping packet\n", VAR_6->name);
  VAR_10 = VAR_9->dma_buffer;
  VAR_9->current_dma.target = ((void*)0);

  return;
 }

 FUNC_16(VAR_11, 2);
 VAR_10 = FUNC_15(VAR_11, VAR_8);
 if ((unsigned long)(VAR_10 + VAR_8) >= VAR_2) {
  VAR_9->current_dma.target = VAR_10;
  VAR_10 = VAR_9->dma_buffer;
 } else {
  VAR_9->current_dma.target = ((void*)0);
 }


 if (FUNC_17(0, (void *) &VAR_9->dmaing))
  FUNC_9("%s: rx blocked, DMA in progress, dir %d\n",
   VAR_6->name, VAR_9->current_dma.direction);

 VAR_9->current_dma.direction = 0;
 VAR_9->current_dma.length = VAR_8;
 VAR_9->current_dma.skb = VAR_11;
 VAR_9->current_dma.start_time = VAR_5;

 FUNC_7(VAR_9->hcr_val | VAR_0 | VAR_3 | VAR_1, VAR_6);

 VAR_12=FUNC_0();
 FUNC_3(VAR_6->dma);
 FUNC_1(VAR_6->dma);
 FUNC_14(VAR_6->dma, 0x04);
 FUNC_12(VAR_6->dma, FUNC_5(VAR_10));
 FUNC_13(VAR_6->dma, VAR_8);
 FUNC_4(VAR_6->dma);
 FUNC_11(VAR_12);

 if (VAR_4 >= 3) {
  FUNC_8("%s: rx DMA transfer started\n", VAR_6->name);
 }

 if (VAR_9->rx_active)
  VAR_9->rx_active--;

 if (!VAR_9->busy)
  FUNC_10("%s: receive_packet called, busy not set.\n", VAR_6->name);
}

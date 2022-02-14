
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct smsc9420_pdata {int tx_ring_head; int tx_ring_tail; TYPE_2__* tx_ring; int dev; TYPE_1__* tx_buffers; int pdev; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int trans_start; } ;
typedef int netdev_tx_t ;
typedef void* dma_addr_t ;
struct TYPE_4__ {int status; int length; void* buffer1; } ;
struct TYPE_3__ {int skb; int mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct smsc9420_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 void* FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct smsc9420_pdata*) ;
 int FUNC_8 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_11,
         struct net_device *VAR_12)
{
 struct smsc9420_pdata *VAR_13 = FUNC_1(VAR_12);
 dma_addr_t VAR_14;
 int VAR_15 = VAR_13->tx_ring_head;
 u32 VAR_16;
 bool VAR_17 =
  (((VAR_13->tx_ring_head + 2) % VAR_9) == VAR_13->tx_ring_tail);

 FUNC_6(VAR_12);

 FUNC_5();
 FUNC_0(VAR_13->tx_ring[VAR_15].status & VAR_3);
 FUNC_0(VAR_13->tx_buffers[VAR_15].skb);
 FUNC_0(VAR_13->tx_buffers[VAR_15].mapping);

 VAR_14 = FUNC_4(VAR_13->pdev, VAR_11->data,
     VAR_11->len, VAR_2);
 if (FUNC_3(VAR_13->pdev, VAR_14)) {
  FUNC_9(VAR_7, "pci_map_single failed, dropping packet");
  return VAR_0;
 }

 VAR_13->tx_buffers[VAR_15].skb = VAR_11;
 VAR_13->tx_buffers[VAR_15].mapping = VAR_14;

 VAR_16 = (VAR_5 | ((u32)VAR_11->len & 0x7FF));
 if (FUNC_10(VAR_17)) {
  VAR_16 |= VAR_4;
  FUNC_2(VAR_13->dev);
 }


 if (FUNC_10(VAR_15 == (VAR_9 - 1)))
  VAR_16 |= VAR_6;

 VAR_13->tx_ring[VAR_15].buffer1 = VAR_14;
 VAR_13->tx_ring[VAR_15].length = VAR_16;
 FUNC_11();


 VAR_13->tx_ring_head = (VAR_13->tx_ring_head + 1) % VAR_9;


 VAR_13->tx_ring[VAR_15].status = VAR_3;
 FUNC_11();


 FUNC_8(VAR_13, VAR_8, 1);
 FUNC_7(VAR_13);

 VAR_12->trans_start = VAR_10;

 return VAR_1;
}

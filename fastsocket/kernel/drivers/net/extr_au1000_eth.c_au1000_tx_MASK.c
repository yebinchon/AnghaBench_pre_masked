
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int buff_stat; int len; int status; } ;
typedef TYPE_1__ tx_dma_t ;
struct sk_buff {int len; int data; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct net_device {int trans_start; int name; struct net_device_stats stats; } ;
struct au1000_private {size_t tx_head; int tx_full; TYPE_2__** tx_db_inuse; TYPE_1__** tx_dma_ring; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int dma_addr; scalar_t__ vaddr; } ;
typedef TYPE_2__ db_dest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 struct au1000_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ,unsigned int,int,int ,size_t) ;
 int FUNC_6 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_7 (struct net_device*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct au1000_private *VAR_10 = FUNC_2(VAR_9);
 struct net_device_stats *VAR_11 = &VAR_9->stats;
 volatile tx_dma_t *VAR_12;
 u32 VAR_13;
 db_dest_t *VAR_14;
 int VAR_15;

 if (VAR_6 > 5)
  FUNC_5("%s: tx: aup %x len=%d, data=%p, head %d\n",
    VAR_9->name, (unsigned)VAR_10, VAR_8->len,
    VAR_8->data, VAR_10->tx_head);

 VAR_12 = VAR_10->tx_dma_ring[VAR_10->tx_head];
 VAR_13 = VAR_12->buff_stat;
 if (VAR_13 & VAR_4) {

  FUNC_3(VAR_9);
  VAR_10->tx_full = 1;
  return VAR_1;
 }
 else if (VAR_13 & VAR_5) {
  FUNC_7(VAR_9, VAR_12->status);
  VAR_12->len = 0;
 }

 if (VAR_10->tx_full) {
  VAR_10->tx_full = 0;
  FUNC_4(VAR_9);
 }

 VAR_14 = VAR_10->tx_db_inuse[VAR_10->tx_head];
 FUNC_6(VAR_8, VAR_14->vaddr, VAR_8->len);
 if (VAR_8->len < VAR_0) {
  for (VAR_15=VAR_8->len; VAR_15<VAR_0; VAR_15++) {
   ((char *)VAR_14->vaddr)[VAR_15] = 0;
  }
  VAR_12->len = VAR_0;
 }
 else
  VAR_12->len = VAR_8->len;

 VAR_11->tx_packets++;
 VAR_11->tx_bytes += VAR_12->len;

 VAR_12->buff_stat = VAR_14->dma_addr | VAR_4;
 FUNC_0();
 FUNC_1(VAR_8);
 VAR_10->tx_head = (VAR_10->tx_head + 1) & (VAR_3 - 1);
 VAR_9->trans_start = VAR_7;
 return VAR_2;
}

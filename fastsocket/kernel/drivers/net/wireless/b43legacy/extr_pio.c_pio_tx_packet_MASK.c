
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct b43legacy_txhdr_fw3 {int dummy; } ;
struct b43legacy_pioqueue {scalar_t__ tx_devq_size; scalar_t__ tx_devq_packets; scalar_t__ tx_devq_used; int txrunning; TYPE_1__* dev; } ;
struct b43legacy_pio_txpacket {int list; struct sk_buff* skb; struct b43legacy_pioqueue* queue; } ;
struct TYPE_2__ {int wl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct b43legacy_pio_txpacket*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct b43legacy_pioqueue*,struct sk_buff*,struct b43legacy_pio_txpacket*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct b43legacy_pio_txpacket *VAR_3)
{
 struct b43legacy_pioqueue *VAR_4 = VAR_3->queue;
 struct sk_buff *VAR_5 = VAR_3->skb;
 u16 VAR_6;
 int VAR_7;

 VAR_6 = (u16)VAR_5->len + sizeof(struct b43legacy_txhdr_fw3);
 if (VAR_4->tx_devq_size < VAR_6) {
  FUNC_1(VAR_4->dev->wl, "PIO queue too small. "
   "Dropping packet.\n");

  FUNC_2(VAR_3, 1);
  return 0;
 }
 FUNC_0(VAR_4->tx_devq_packets >
     VAR_0);
 FUNC_0(VAR_4->tx_devq_used > VAR_4->tx_devq_size);




 if (VAR_4->tx_devq_packets == VAR_0)
  return -VAR_1;
 if (VAR_4->tx_devq_used + VAR_6 > VAR_4->tx_devq_size)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_3,
         sizeof(struct b43legacy_txhdr_fw3));
 if (FUNC_5(VAR_7 == -VAR_2)) {


  FUNC_2(VAR_3, 1);
  return 0;
 }




 VAR_4->tx_devq_packets++;
 VAR_4->tx_devq_used += VAR_6;




 FUNC_3(&VAR_3->list, &VAR_4->txrunning);

 return 0;
}

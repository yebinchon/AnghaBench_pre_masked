
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct net_device {int dev; } ;
struct ethoc_bd {int stat; int addr; } ;
struct TYPE_2__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct ethoc {unsigned int num_tx; unsigned int cur_rx; unsigned int num_rx; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 scalar_t__ FUNC_3 (struct ethoc*,struct ethoc_bd*) ;
 int FUNC_4 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,void*,int) ;
 scalar_t__ FUNC_7 () ;
 struct sk_buff* FUNC_8 (struct net_device*,int) ;
 struct ethoc* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_2, int VAR_3)
{
 struct ethoc *VAR_4 = FUNC_9(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  unsigned int VAR_6;
  struct ethoc_bd VAR_7;

  VAR_6 = VAR_4->num_tx + (VAR_4->cur_rx % VAR_4->num_rx);
  FUNC_2(VAR_4, VAR_6, &VAR_7);
  if (VAR_7.stat & VAR_0)
   break;

  if (FUNC_3(VAR_4, &VAR_7) == 0) {
   int VAR_8 = VAR_7.stat >> 16;
   struct sk_buff *VAR_9 = FUNC_8(VAR_2, VAR_8);

   VAR_8 -= 4;
   FUNC_13(VAR_9, 2);

   if (FUNC_5(VAR_9)) {
    void *VAR_10 = FUNC_11(VAR_7.addr);
    FUNC_6(FUNC_12(VAR_9, VAR_8), VAR_10, VAR_8);
    VAR_9->protocol = FUNC_1(VAR_9, VAR_2);
    VAR_4->stats.rx_packets++;
    VAR_4->stats.rx_bytes += VAR_8;
    FUNC_10(VAR_9);
   } else {
    if (FUNC_7())
     FUNC_0(&VAR_2->dev, "low on memory - "
       "packet dropped\n");

    VAR_4->stats.rx_dropped++;
    break;
   }
  }


  VAR_7.stat &= ~VAR_1;
  VAR_7.stat |= VAR_0;
  FUNC_4(VAR_4, VAR_6, &VAR_7);
  VAR_4->cur_rx++;
 }

 return VAR_5;
}

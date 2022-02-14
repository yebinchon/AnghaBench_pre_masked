
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int data; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct bmac_init_block {TYPE_3__* be_txd; TYPE_2__* be_rxd; } ;
struct bigmac {TYPE_1__* bigmac_op; struct sk_buff** rx_skbs; scalar_t__ tx_old; scalar_t__ tx_new; scalar_t__ rx_old; scalar_t__ rx_new; struct net_device* dev; struct bmac_init_block* bmac_block; } ;
typedef int gfp_t ;
struct TYPE_6__ {scalar_t__ tx_addr; scalar_t__ tx_flags; } ;
struct TYPE_5__ {int rx_flags; int rx_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct bigmac*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct bigmac *VAR_9, int VAR_10)
{
 struct bmac_init_block *VAR_11 = VAR_9->bmac_block;
 struct net_device *VAR_12 = VAR_9->dev;
 int VAR_13;
 gfp_t VAR_14 = VAR_3;

 if (VAR_10 || FUNC_3())
  VAR_14 = VAR_2;

 VAR_9->rx_new = VAR_9->rx_old = VAR_9->tx_new = VAR_9->tx_old = 0;


 FUNC_1(VAR_9);


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  struct sk_buff *VAR_15;

  VAR_15 = FUNC_0(VAR_6, VAR_14);
  if (!VAR_15)
   continue;

  VAR_9->rx_skbs[VAR_13] = VAR_15;
  VAR_15->dev = VAR_12;


  FUNC_4(VAR_15, VAR_1);
  FUNC_5(VAR_15, 34);

  VAR_11->be_rxd[VAR_13].rx_addr =
   FUNC_2(&VAR_9->bigmac_op->dev,
           VAR_15->data,
           VAR_6 - 34,
           VAR_0);
  VAR_11->be_rxd[VAR_13].rx_flags =
   (VAR_5 | ((VAR_6 - 34) & VAR_4));
 }

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
  VAR_11->be_txd[VAR_13].tx_flags = VAR_11->be_txd[VAR_13].tx_addr = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct temac_local {int tx_bd_p; int rx_bd_p; TYPE_1__* rx_bd_v; struct sk_buff** rx_skb; TYPE_1__* tx_bd_v; } ;
struct sk_buff {int data; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct TYPE_3__ {int next; int app0; scalar_t__ len; int phys; } ;


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 void* FUNC_3 (int ,int,int*,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 struct sk_buff** FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 struct temac_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct temac_local*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_17)
{
 struct temac_local *VAR_18 = FUNC_7(VAR_17);
 struct sk_buff *VAR_19;
 int VAR_20;

 VAR_18->rx_skb = FUNC_5(sizeof(struct sk_buff)*VAR_7, VAR_6);


 VAR_18->tx_bd_v = FUNC_3(VAR_17->dev.parent,
      sizeof(*VAR_18->tx_bd_v) * VAR_12,
      &VAR_18->tx_bd_p, VAR_6);
 VAR_18->rx_bd_v = FUNC_3(VAR_17->dev.parent,
      sizeof(*VAR_18->rx_bd_v) * VAR_7,
      &VAR_18->rx_bd_p, VAR_6);

 FUNC_6(VAR_18->tx_bd_v, 0, sizeof(*VAR_18->tx_bd_v) * VAR_12);
 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  VAR_18->tx_bd_v[VAR_20].next = VAR_18->tx_bd_p +
    sizeof(*VAR_18->tx_bd_v) * ((VAR_20 + 1) % VAR_12);
 }

 FUNC_6(VAR_18->rx_bd_v, 0, sizeof(*VAR_18->rx_bd_v) * VAR_7);
 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
  VAR_18->rx_bd_v[VAR_20].next = VAR_18->rx_bd_p +
    sizeof(*VAR_18->rx_bd_v) * ((VAR_20 + 1) % VAR_7);

  VAR_19 = FUNC_1(VAR_16
    + VAR_15, VAR_5);
  if (VAR_19 == 0) {
   FUNC_2(&VAR_17->dev, "alloc_skb error %d\n", VAR_20);
   return -1;
  }
  VAR_18->rx_skb[VAR_20] = VAR_19;
  FUNC_8(VAR_19, FUNC_0(VAR_19->data));

  VAR_18->rx_bd_v[VAR_20].phys = FUNC_4(VAR_17->dev.parent,
           VAR_19->data,
           VAR_16,
           VAR_4);
  VAR_18->rx_bd_v[VAR_20].len = VAR_16;
  VAR_18->rx_bd_v[VAR_20].app0 = VAR_11;
 }

 FUNC_9(VAR_18, VAR_13, 0x10220400 |
       VAR_2 |
       VAR_1 |
       VAR_0);


 FUNC_9(VAR_18, VAR_8, 0xff010000 |
       VAR_2 |
       VAR_1 |
       VAR_0 |
       VAR_3);


 FUNC_9(VAR_18, VAR_9, VAR_18->rx_bd_p);
 FUNC_9(VAR_18, VAR_10,
         VAR_18->rx_bd_p + (sizeof(*VAR_18->rx_bd_v) * (VAR_7 - 1)));
 FUNC_9(VAR_18, VAR_14, VAR_18->tx_bd_p);

 return 0;
}

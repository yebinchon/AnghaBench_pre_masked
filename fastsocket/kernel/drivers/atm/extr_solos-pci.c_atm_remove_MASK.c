
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct solos_card {int nr_ports; int * tx_queue; TYPE_2__* dev; struct sk_buff** tx_skb; struct sk_buff** rx_skb; TYPE_3__** atmdev; } ;
struct sk_buff {int len; } ;
struct TYPE_8__ {int dma_addr; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_7__ {TYPE_1__ class_dev; int number; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct solos_card *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_ports; VAR_5++) {
  if (VAR_4->atmdev[VAR_5]) {
   struct sk_buff *VAR_6;

   FUNC_2(&VAR_4->dev->dev, "Unregistering ATM device %d\n", VAR_4->atmdev[VAR_5]->number);

   FUNC_6(&VAR_4->atmdev[VAR_5]->class_dev.kobj, &VAR_3);
   FUNC_1(VAR_4->atmdev[VAR_5]);

   VAR_6 = VAR_4->rx_skb[VAR_5];
   if (VAR_6) {
    FUNC_4(VAR_4->dev, FUNC_0(VAR_6)->dma_addr,
       VAR_2, VAR_0);
    FUNC_3(VAR_6);
   }
   VAR_6 = VAR_4->tx_skb[VAR_5];
   if (VAR_6) {
    FUNC_4(VAR_4->dev, FUNC_0(VAR_6)->dma_addr,
       VAR_6->len, VAR_1);
    FUNC_3(VAR_6);
   }
   while ((VAR_6 = FUNC_5(&VAR_4->tx_queue[VAR_5])))
    FUNC_3(VAR_6);

  }
 }
}

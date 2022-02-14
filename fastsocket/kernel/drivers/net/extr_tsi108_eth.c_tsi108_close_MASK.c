
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx_desc ;
struct tsi108_prv_data {int txhead; int txtail; int rxtail; int txdma; int txring; int rxdma; int rxring; scalar_t__ rxfree; struct sk_buff** rxskbs; int irq_num; int txfree; struct sk_buff** txskbs; int timer; int napi; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int rx_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (int *) ;
 struct tsi108_prv_data* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 struct tsi108_prv_data *VAR_5 = FUNC_6(VAR_4);

 FUNC_7(VAR_4);
 FUNC_5(&VAR_5->napi);

 FUNC_1(&VAR_5->timer);

 FUNC_9(VAR_4);
 FUNC_8(VAR_4);
 FUNC_0(VAR_0, ~0);
 FUNC_0(VAR_1, 0);



 while (!VAR_5->txfree || VAR_5->txhead != VAR_5->txtail) {
  int VAR_6 = VAR_5->txtail;
  struct sk_buff *VAR_7;
  VAR_7 = VAR_5->txskbs[VAR_6];
  VAR_5->txtail = (VAR_5->txtail + 1) % VAR_3;
  VAR_5->txfree++;
  FUNC_2(VAR_7);
 }

 FUNC_4(VAR_5->irq_num, VAR_4);



 while (VAR_5->rxfree) {
  int VAR_8 = VAR_5->rxtail;
  struct sk_buff *VAR_9;

  VAR_9 = VAR_5->rxskbs[VAR_8];
  VAR_5->rxtail = (VAR_5->rxtail + 1) % VAR_2;
  VAR_5->rxfree--;
  FUNC_2(VAR_9);
 }

 FUNC_3(0,
       VAR_2 * sizeof(rx_desc),
       VAR_5->rxring, VAR_5->rxdma);
 FUNC_3(0,
       VAR_3 * sizeof(tx_desc),
       VAR_5->txring, VAR_5->txdma);

 return 0;
}

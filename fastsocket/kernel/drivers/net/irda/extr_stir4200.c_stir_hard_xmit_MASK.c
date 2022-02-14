
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stir_cb {int thread; int tx_pending; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 struct stir_cb* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (int *,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_1,
     struct net_device *VAR_2)
{
 struct stir_cb *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_2);


 FUNC_0(VAR_1);

 VAR_1 = FUNC_7(&VAR_3->tx_pending, VAR_1);
        FUNC_6(VAR_3->thread);


 if (FUNC_5(VAR_1)) {
  FUNC_1(1);
  FUNC_2(VAR_1);
 }

 return VAR_0;
}

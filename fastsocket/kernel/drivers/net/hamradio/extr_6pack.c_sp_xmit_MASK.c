
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct sixpack {int lock; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sixpack* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sixpack*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct sixpack *VAR_3 = FUNC_1(VAR_2);

 FUNC_4(&VAR_3->lock);

 FUNC_2(VAR_2);
 VAR_2->stats.tx_bytes += VAR_1->len;
 FUNC_3(VAR_3, VAR_1->data, VAR_1->len);
 FUNC_5(&VAR_3->lock);

 FUNC_0(VAR_1);

 return VAR_0;
}

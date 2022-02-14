
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {int send_queue; } ;
struct sk_buff {int dummy; } ;
struct net_device {int trans_start; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct yam_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct yam_port *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(&VAR_4->send_queue, VAR_2);
 VAR_3->trans_start = VAR_1;
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct iphdr {int dummy; } ;
struct hso_net {int rx_buf_missing; int parent; int flags; int net_lock; scalar_t__ rx_buf_size; int rx_parse_state; int * skb_tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 struct hso_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct hso_net *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5 = 0;

 if (!VAR_4) {
  FUNC_0(&VAR_3->dev, "No net device !\n");
  return -VAR_0;
 }

 VAR_4->skb_tx_buf = ((void*)0);


 FUNC_5(&VAR_4->net_lock, VAR_5);
 VAR_4->rx_parse_state = VAR_2;
 VAR_4->rx_buf_size = 0;
 VAR_4->rx_buf_missing = sizeof(struct iphdr);
 FUNC_6(&VAR_4->net_lock, VAR_5);


 FUNC_4(VAR_1, &VAR_4->flags);
 FUNC_1(VAR_4->parent);


 FUNC_3(VAR_3);

 return 0;
}

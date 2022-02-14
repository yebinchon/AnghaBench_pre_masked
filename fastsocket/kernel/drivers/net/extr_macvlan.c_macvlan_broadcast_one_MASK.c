
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; struct net_device* dev; } ;
struct net_device {int broadcast; } ;
struct macvlan_dev {int (* forward ) (struct net_device*,struct sk_buff*) ;int (* receive ) (struct sk_buff*) ;struct net_device* dev; } ;
struct ethhdr {int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3,
     const struct macvlan_dev *VAR_4,
     const struct ethhdr *VAR_5, bool VAR_6)
{
 struct net_device *VAR_7 = VAR_4->dev;
 if (!VAR_3)
  return VAR_0;

 if (VAR_6)
  return VAR_4->forward(VAR_7, VAR_3);

 VAR_3->dev = VAR_7;
 if (!FUNC_0(VAR_5->h_dest,
           VAR_7->broadcast))
  VAR_3->pkt_type = VAR_1;
 else
  VAR_3->pkt_type = VAR_2;

 return VAR_4->receive(VAR_3);
}

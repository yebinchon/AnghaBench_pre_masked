
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uml_net_private {int (* read ) (int ,struct sk_buff*,struct uml_net_private*) ;int (* protocol ) (struct sk_buff*) ;int fd; int max_packet; } ;
struct sk_buff {scalar_t__ len; int protocol; struct net_device* dev; } ;
struct TYPE_2__ {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct uml_net_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int ,struct sk_buff*,struct uml_net_private*) ;
 int FUNC_8 (int ,struct sk_buff*,struct uml_net_private*) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1)
{
 struct uml_net_private *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 struct sk_buff *VAR_4;


 VAR_4 = FUNC_0(VAR_2->max_packet);
 if (VAR_4 == ((void*)0)) {
  VAR_0->dev = VAR_1;

  (*VAR_2->read)(VAR_2->fd, VAR_0, VAR_2);
  VAR_1->stats.rx_dropped++;
  return 0;
 }

 VAR_4->dev = VAR_1;
 FUNC_4(VAR_4, VAR_2->max_packet);
 FUNC_5(VAR_4);
 VAR_3 = (*VAR_2->read)(VAR_2->fd, VAR_4, VAR_2);

 if (VAR_3 > 0) {
  FUNC_6(VAR_4, VAR_3);
  VAR_4->protocol = (*VAR_2->protocol)(VAR_4);

  VAR_1->stats.rx_bytes += VAR_4->len;
  VAR_1->stats.rx_packets++;
  FUNC_3(VAR_4);
  return VAR_3;
 }

 FUNC_1(VAR_4);
 return VAR_3;
}

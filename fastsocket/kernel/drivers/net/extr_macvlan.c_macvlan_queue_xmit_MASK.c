
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; int dev; int ip_summed; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct macvlan_port {int dummy; } ;
struct macvlan_dev {scalar_t__ mode; int (* forward ) (int ,struct sk_buff*) ;int lowerdev; int dev; struct macvlan_port* port; } ;
struct ethhdr {int h_dest; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct macvlan_port const*,struct net_device*,scalar_t__) ;
 int FUNC_3 (struct macvlan_dev const*,unsigned int,int,int ) ;
 struct macvlan_dev* FUNC_4 (struct macvlan_port const*,int ) ;
 struct macvlan_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 const struct macvlan_dev *VAR_7 = FUNC_5(VAR_6);
 const struct macvlan_port *VAR_8 = VAR_7->port;
 const struct macvlan_dev *VAR_9;
 __u8 VAR_10 = VAR_5->ip_summed;

 if (VAR_7->mode == VAR_2) {
  const struct ethhdr *VAR_11 = (void *)VAR_5->data;
  VAR_5->ip_summed = VAR_0;


  if (FUNC_1(VAR_11->h_dest)) {
   FUNC_2(VAR_5, VAR_8, VAR_6, VAR_2);
   goto xmit_world;
  }

  VAR_9 = FUNC_4(VAR_8, VAR_11->h_dest);
  if (VAR_9 && VAR_9->mode == VAR_2) {
   unsigned int VAR_12 = VAR_5->len + VAR_1;
   int VAR_13 = VAR_9->forward(VAR_9->dev, VAR_5);
   FUNC_3(VAR_9, VAR_12,
      VAR_13 == VAR_3, 0);

   return VAR_4;
  }
 }

xmit_world:
 VAR_5->ip_summed = VAR_10;
 VAR_5->dev = VAR_7->lowerdev;
 return FUNC_0(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct net_device {scalar_t__ rtnl_link_ops; scalar_t__ mtu; int dev_addr; struct macvlan_port* macvlan_port; } ;
struct net {int dummy; } ;
struct macvlan_port {int passthru; int vlans; } ;
struct macvlan_dev {int (* receive ) (struct sk_buff*) ;int (* forward ) (struct net_device*,struct sk_buff*) ;scalar_t__ mode; int list; struct macvlan_port* port; struct net_device* dev; struct net_device* lowerdev; } ;
struct TYPE_2__ {struct net* src_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 struct macvlan_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_8 (struct nlattr*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;

int FUNC_11(struct net_device *VAR_9,
      struct nlattr *VAR_10[], struct nlattr *VAR_11[],
      int (*VAR_12)(struct sk_buff *VAR_13),
      int (*VAR_14)(struct net_device *VAR_15,
       struct sk_buff *VAR_16))
{
 struct macvlan_dev *VAR_17 = FUNC_6(VAR_9);
 struct net *VAR_18 = FUNC_5(VAR_9)->src_net;
 struct macvlan_port *VAR_19;
 struct net_device *VAR_20;
 int VAR_21;

 if (!VAR_10[VAR_4])
  return -VAR_0;

 VAR_20 = FUNC_0(VAR_18, FUNC_8(VAR_10[VAR_4]));
 if (VAR_20 == ((void*)0))
  return -VAR_1;




 if (VAR_20->rtnl_link_ops == VAR_9->rtnl_link_ops) {
  struct macvlan_dev *VAR_22 = FUNC_6(VAR_20);
  VAR_20 = VAR_22->lowerdev;
 }

 if (!VAR_10[VAR_6])
  VAR_9->mtu = VAR_20->mtu;
 else if (VAR_9->mtu > VAR_20->mtu)
  return -VAR_0;

 if (!VAR_10[VAR_3])
  FUNC_9(VAR_9->dev_addr);

 if (VAR_20->macvlan_port == ((void*)0)) {
  VAR_21 = FUNC_3(VAR_20);
  if (VAR_21 < 0)
   return VAR_21;
 }
 VAR_19 = VAR_20->macvlan_port;


 if (VAR_19->passthru)
  return -VAR_0;

 VAR_17->lowerdev = VAR_20;
 VAR_17->dev = VAR_9;
 VAR_17->port = VAR_19;
 VAR_17->receive = VAR_12;
 VAR_17->forward = VAR_14;

 VAR_17->mode = VAR_8;
 if (VAR_11 && VAR_11[VAR_5])
  VAR_17->mode = FUNC_8(VAR_11[VAR_5]);

 if (VAR_17->mode == VAR_7) {
  if (!FUNC_2(&VAR_19->vlans))
   return -VAR_0;
  VAR_19->passthru = 1;
  FUNC_4(VAR_9->dev_addr, VAR_20->dev_addr, VAR_2);
 }

 VAR_21 = FUNC_10(VAR_9);
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_1(&VAR_17->list, &VAR_19->vlans);
 FUNC_7(VAR_20, VAR_9);
 return 0;
}

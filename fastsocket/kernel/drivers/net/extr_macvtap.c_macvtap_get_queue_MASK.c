
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct macvtap_queue {int dummy; } ;
struct macvlan_dev {int tap; } ;


 struct macvlan_dev* FUNC_0 (struct net_device*) ;
 struct macvtap_queue* FUNC_1 (int ) ;

__attribute__((used)) static struct macvtap_queue *FUNC_2(struct net_device *VAR_0,
            struct sk_buff *VAR_1)
{
 struct macvlan_dev *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->tap);
}

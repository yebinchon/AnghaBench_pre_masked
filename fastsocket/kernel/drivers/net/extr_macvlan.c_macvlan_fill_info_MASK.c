
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct macvlan_dev {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct macvlan_dev* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
    const struct net_device *VAR_3)
{
 struct macvlan_dev *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_2, VAR_1, VAR_4->mode);
 return 0;

nla_put_failure:
 return -VAR_0;
}

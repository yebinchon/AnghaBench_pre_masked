
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct slave {int duplex; scalar_t__ speed; struct net_device* dev; } ;
struct net_device {TYPE_1__* ethtool_ops; } ;
struct ethtool_cmd {int duplex; int cmd; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int (* get_settings ) (struct net_device*,struct ethtool_cmd*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (struct net_device*,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_2(struct slave *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->dev;
 struct ethtool_cmd VAR_5 = { .cmd = VAR_1 };
 u32 VAR_6;
 int VAR_7;

 VAR_3->speed = VAR_2;
 VAR_3->duplex = VAR_0;

 if (!VAR_4->ethtool_ops || !VAR_4->ethtool_ops->get_settings)
  return -1;

 VAR_7 = VAR_4->ethtool_ops->get_settings(VAR_4, &VAR_5);
 if (VAR_7 < 0)
  return -1;

 VAR_6 = FUNC_0(&VAR_5);
 if (VAR_6 == 0 || VAR_6 == ((__u32) -1))
  return -1;

 switch (VAR_5.duplex) {
 case 129:
 case 128:
  break;
 default:
  return -1;
 }

 VAR_3->speed = VAR_6;
 VAR_3->duplex = VAR_5.duplex;

 return 0;
}

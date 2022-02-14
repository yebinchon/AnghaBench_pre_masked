
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct net_device {TYPE_3__* ethtool_ops; } ;
struct TYPE_5__ {TYPE_1__* t3cdev_p; } ;
struct iwch_dev {TYPE_2__ rdev; } ;
struct ethtool_drvinfo {char* fw_version; } ;
struct TYPE_6__ {int (* get_drvinfo ) (struct net_device*,struct ethtool_drvinfo*) ;} ;
struct TYPE_4__ {struct net_device* lldev; } ;


 int FUNC_0 (char*,char*,unsigned int*) ;
 char* FUNC_1 (char**,char*) ;
 int FUNC_2 (struct net_device*,struct ethtool_drvinfo*) ;

__attribute__((used)) static u64 FUNC_3(struct iwch_dev *VAR_0)
{
 struct ethtool_drvinfo VAR_1;
 struct net_device *VAR_2 = VAR_0->rdev.t3cdev_p->lldev;
 char *VAR_3, *VAR_4;
 unsigned VAR_5, VAR_6, VAR_7;

 VAR_2->ethtool_ops->get_drvinfo(VAR_2, &VAR_1);

 VAR_4 = VAR_1.fw_version + 1;
 VAR_3 = FUNC_1(&VAR_4, ".");
 FUNC_0(VAR_3, "%i", &VAR_5);
 VAR_3 = FUNC_1(&VAR_4, ".");
 FUNC_0(VAR_3, "%i", &VAR_6);
 VAR_3 = FUNC_1(&VAR_4, ".");
 FUNC_0(VAR_3, "%i", &VAR_7);

 return (((u64)VAR_5 & 0xffff) << 32) | ((VAR_6 & 0xffff) << 16) |
        (VAR_7 & 0xffff);
}

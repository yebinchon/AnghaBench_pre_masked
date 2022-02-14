
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device_ops {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,int) ;} ;
struct net_device {int name; TYPE_2__* ethtool_ops; struct net_device_ops* netdev_ops; } ;
struct mii_ioctl_data {int val_out; int reg_num; } ;
struct ifreq {int ifr_name; } ;
struct TYPE_3__ {scalar_t__ use_carrier; } ;
struct bonding {TYPE_1__ params; } ;
struct TYPE_4__ {scalar_t__ (* get_link ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,struct ifreq*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct bonding *VAR_5,
          struct net_device *VAR_6, int VAR_7)
{
 const struct net_device_ops *VAR_8 = VAR_6->netdev_ops;
 int (*VAR_9)(struct net_device *, struct ifreq *, int);
 struct ifreq VAR_10;
 struct mii_ioctl_data *VAR_11;

 if (!VAR_7 && !FUNC_3(VAR_6))
  return 0;

 if (VAR_5->params.use_carrier)
  return FUNC_2(VAR_6) ? VAR_0 : 0;


 if (VAR_6->ethtool_ops) {
  if (VAR_6->ethtool_ops->get_link) {
   u32 VAR_12;

   VAR_12 = VAR_6->ethtool_ops->get_link(VAR_6);

   return VAR_12 ? VAR_0 : 0;
  }
 }


 VAR_9 = VAR_8->ndo_do_ioctl;
 if (VAR_9) {
  FUNC_4(VAR_10.ifr_name, VAR_6->name, VAR_1);
  VAR_11 = FUNC_1(&VAR_10);
  if (FUNC_0(VAR_6, &VAR_10, VAR_3) == 0) {
   VAR_11->reg_num = VAR_2;
   if (FUNC_0(VAR_6, &VAR_10, VAR_4) == 0)
    return VAR_11->val_out & VAR_0;
  }
 }







 return VAR_7 ? -1 : VAR_0;
}

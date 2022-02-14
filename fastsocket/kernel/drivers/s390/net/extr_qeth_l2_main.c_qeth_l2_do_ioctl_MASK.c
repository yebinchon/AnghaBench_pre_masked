
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int guestlan; } ;
struct qeth_card {scalar_t__ state; TYPE_2__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct mii_ioctl_data {int reg_num; int phy_id; int val_out; } ;
struct TYPE_3__ {int ifru_data; } ;
struct ifreq {TYPE_1__ ifr_ifru; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int,char*,int) ;




 int VAR_10 ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_11, struct ifreq *VAR_12, int VAR_13)
{
 struct qeth_card *VAR_14 = VAR_11->ml_priv;
 struct mii_ioctl_data *VAR_15;
 int VAR_16 = 0;

 if (!VAR_14)
  return -VAR_3;

 if ((VAR_14->state != VAR_1) &&
  (VAR_14->state != VAR_0))
  return -VAR_3;

 if (VAR_14->info.type == VAR_8)
  return -VAR_5;

 switch (VAR_13) {
 case 129:
  VAR_16 = FUNC_3(VAR_14, VAR_12->ifr_ifru.ifru_data);
  break;
 case 128:
  if ((VAR_14->info.type == VAR_6 ||
       VAR_14->info.type == VAR_7 ||
       VAR_14->info.type == VAR_9) &&
      !VAR_14->info.guestlan)
   return 1;
  return 0;
  break;
 case 131:
  VAR_15 = FUNC_1(VAR_12);
  VAR_15->phy_id = 0;
  break;
 case 130:
  VAR_15 = FUNC_1(VAR_12);
  if (VAR_15->phy_id != 0)
   VAR_16 = -VAR_2;
  else
   VAR_15->val_out = FUNC_2(VAR_11,
    VAR_15->phy_id, VAR_15->reg_num);
  break;
 default:
  VAR_16 = -VAR_4;
 }
 if (VAR_16)
  FUNC_0(VAR_10, 2, "ioce%d", VAR_16);
 return VAR_16;
}

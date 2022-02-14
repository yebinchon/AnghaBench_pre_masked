
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int guestlan; int type; } ;
struct qeth_card {scalar_t__ state; TYPE_2__ info; } ;
struct qeth_arp_cache_entry {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct mii_ioctl_data {int reg_num; int phy_id; int val_out; } ;
struct TYPE_3__ {int ifru_data; int ifru_ivalue; } ;
struct ifreq {TYPE_1__ ifr_ifru; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,char*,int) ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qeth_arp_cache_entry*,int ,int) ;
 struct mii_ioctl_data* FUNC_3 (struct ifreq*) ;
 int FUNC_4 (struct qeth_card*,struct qeth_arp_cache_entry*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*,int ) ;
 int FUNC_7 (struct qeth_card*,struct qeth_arp_cache_entry*) ;
 int FUNC_8 (struct qeth_card*,int ) ;
 int FUNC_9 (struct net_device*,int ,int ) ;
 int FUNC_10 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_11, struct ifreq *VAR_12, int VAR_13)
{
 struct qeth_card *VAR_14 = VAR_11->ml_priv;
 struct qeth_arp_cache_entry VAR_15;
 struct mii_ioctl_data *VAR_16;
 int VAR_17 = 0;

 if (!VAR_14)
  return -VAR_5;

 if ((VAR_14->state != VAR_2) &&
  (VAR_14->state != VAR_1))
  return -VAR_5;

 switch (VAR_13) {
 case 129:
  if (!FUNC_1(VAR_0)) {
   VAR_17 = -VAR_7;
   break;
  }
  VAR_17 = FUNC_8(VAR_14, VAR_12->ifr_ifru.ifru_ivalue);
  break;
 case 131:
  if (!FUNC_1(VAR_0)) {
   VAR_17 = -VAR_7;
   break;
  }
  VAR_17 = FUNC_6(VAR_14, VAR_12->ifr_ifru.ifru_data);
  break;
 case 133:
  if (!FUNC_1(VAR_0)) {
   VAR_17 = -VAR_7;
   break;
  }
  if (FUNC_2(&VAR_15, VAR_12->ifr_ifru.ifru_data,
       sizeof(struct qeth_arp_cache_entry)))
   VAR_17 = -VAR_3;
  else
   VAR_17 = FUNC_4(VAR_14, &VAR_15);
  break;
 case 130:
  if (!FUNC_1(VAR_0)) {
   VAR_17 = -VAR_7;
   break;
  }
  if (FUNC_2(&VAR_15, VAR_12->ifr_ifru.ifru_data,
       sizeof(struct qeth_arp_cache_entry)))
   VAR_17 = -VAR_3;
  else
   VAR_17 = FUNC_7(VAR_14, &VAR_15);
  break;
 case 132:
  if (!FUNC_1(VAR_0)) {
   VAR_17 = -VAR_7;
   break;
  }
  VAR_17 = FUNC_5(VAR_14);
  break;
 case 134:
  VAR_17 = FUNC_10(VAR_14, VAR_12->ifr_ifru.ifru_data);
  break;
 case 128:
  if ((VAR_14->info.type == VAR_8 ||
       VAR_14->info.type == VAR_9) &&
      !VAR_14->info.guestlan)
   return 1;
  return 0;
  break;
 case 136:
  VAR_16 = FUNC_3(VAR_12);
  VAR_16->phy_id = 0;
  break;
 case 135:
  VAR_16 = FUNC_3(VAR_12);
  if (VAR_16->phy_id != 0)
   VAR_17 = -VAR_4;
  else
   VAR_16->val_out = FUNC_9(VAR_11,
       VAR_16->phy_id,
       VAR_16->reg_num);
  break;
 default:
  VAR_17 = -VAR_6;
 }
 if (VAR_17)
  FUNC_0(VAR_10, 2, "ioce%d", VAR_17);
 return VAR_17;
}

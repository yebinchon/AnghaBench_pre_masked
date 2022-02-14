
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {unsigned int base_addr; int name; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct TYPE_4__ {int ifrn_name; } ;
struct ifreq {TYPE_1__ ifr_ifrn; } ;
struct TYPE_5__ {int mohawk; } ;
typedef TYPE_2__ local_info_t ;


 int FUNC_0 (int,char*,int ,int ,int,int,int,int ,int ) ;
 int VAR_0 ;



 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (unsigned int,int,int,int ,int) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
    local_info_t *VAR_4 = FUNC_4(VAR_1);
    unsigned int VAR_5 = VAR_1->base_addr;
    struct mii_ioctl_data *VAR_6 = FUNC_1(VAR_2);

    FUNC_0(1, "%s: ioctl(%-.6s, %#04x) %04x %04x %04x %04x\n",
   VAR_1->name, VAR_2->ifr_ifrn.ifrn_name, VAR_3,
   VAR_6->phy_id, VAR_6->reg_num, VAR_6->val_in, VAR_6->val_out);

    if (!VAR_4->mohawk)
 return -VAR_0;

    switch(VAR_3) {
      case 130:
 VAR_6->phy_id = 0;

      case 129:
 VAR_6->val_out = FUNC_2(VAR_5, VAR_6->phy_id & 0x1f,
          VAR_6->reg_num & 0x1f);
 break;
      case 128:
 FUNC_3(VAR_5, VAR_6->phy_id & 0x1f, VAR_6->reg_num & 0x1f, VAR_6->val_in,
        16);
 break;
      default:
 return -VAR_0;
    }
    return 0;
}

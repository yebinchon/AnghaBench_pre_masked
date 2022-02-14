
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {unsigned int base_addr; } ;
struct mii_ioctl_data {int reg_num; int val_in; int phy_id; int val_out; } ;
struct ifreq {int dummy; } ;
struct TYPE_3__ {int flags; int phy_id; } ;
typedef TYPE_1__ pcnet_dev_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;



 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (unsigned int,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
    pcnet_dev_t *VAR_8 = FUNC_0(VAR_5);
    struct mii_ioctl_data *VAR_9 = FUNC_1(VAR_6);
    unsigned int VAR_10 = VAR_5->base_addr + VAR_0;

    if (!(VAR_8->flags & (VAR_3|VAR_4)))
 return -VAR_1;

    switch (VAR_7) {
    case 130:
 VAR_9->phy_id = VAR_8->phy_id;
    case 129:
 VAR_9->val_out = FUNC_2(VAR_10, VAR_9->phy_id, VAR_9->reg_num & 0x1f);
 return 0;
    case 128:
 FUNC_3(VAR_10, VAR_9->phy_id, VAR_9->reg_num & 0x1f, VAR_9->val_in);
 return 0;
    }
    return -VAR_2;
}

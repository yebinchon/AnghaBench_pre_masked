
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct atl1e_adapter {int mdio_lock; int hw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,int,int ) ;
 struct mii_ioctl_data* FUNC_3 (struct ifreq*) ;
 struct atl1e_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
      struct ifreq *VAR_5, int VAR_6)
{
 struct atl1e_adapter *VAR_7 = FUNC_4(VAR_4);
 struct pci_dev *VAR_8 = VAR_7->pdev;
 struct mii_ioctl_data *VAR_9 = FUNC_3(VAR_5);
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (!FUNC_5(VAR_4))
  return -VAR_1;

 FUNC_6(&VAR_7->mdio_lock, VAR_10);
 switch (VAR_6) {
 case 130:
  VAR_9->phy_id = 0;
  break;

 case 129:
  if (FUNC_0(&VAR_7->hw, VAR_9->reg_num & 0x1F,
        &VAR_9->val_out)) {
   VAR_11 = -VAR_2;
   goto out;
  }
  break;

 case 128:
  if (VAR_9->reg_num & ~(0x1F)) {
   VAR_11 = -VAR_0;
   goto out;
  }

  FUNC_2(&VAR_8->dev, "<atl1e_mii_ioctl> write %x %x",
    VAR_9->reg_num, VAR_9->val_in);
  if (FUNC_1(&VAR_7->hw,
         VAR_9->reg_num, VAR_9->val_in)) {
   VAR_11 = -VAR_2;
   goto out;
  }
  break;

 default:
  VAR_11 = -VAR_3;
  break;
 }
out:
 FUNC_7(&VAR_7->mdio_lock, VAR_10);
 return VAR_11;

}

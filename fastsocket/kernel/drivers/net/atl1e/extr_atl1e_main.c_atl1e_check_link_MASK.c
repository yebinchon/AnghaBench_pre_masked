
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct net_device {int name; } ;
struct atl1e_hw {int dummy; } ;
struct atl1e_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct pci_dev* pdev; struct net_device* netdev; struct atl1e_hw hw; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct atl1e_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct atl1e_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct atl1e_adapter*) ;
 int FUNC_5 (int *,char*,int ,int ,scalar_t__,char*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct atl1e_adapter *VAR_7)
{
 struct atl1e_hw *VAR_8 = &VAR_7->hw;
 struct net_device *VAR_9 = VAR_7->netdev;
 struct pci_dev *VAR_10 = VAR_7->pdev;
 int VAR_11 = 0;
 u16 VAR_12, VAR_13, VAR_14;


 FUNC_3(VAR_8, VAR_3, &VAR_14);
 FUNC_3(VAR_8, VAR_3, &VAR_14);
 if ((VAR_14 & VAR_0) == 0) {

  if (FUNC_7(VAR_9)) {
   u32 VAR_15;

   VAR_15 = FUNC_0(VAR_8, VAR_4);
   VAR_15 &= ~VAR_2;
   FUNC_1(VAR_8, VAR_4, VAR_15);
   VAR_7->link_speed = VAR_5;
   FUNC_6(VAR_9);
   FUNC_9(VAR_9);
  }
 } else {

  VAR_11 = FUNC_2(VAR_8, &VAR_12, &VAR_13);
  if (FUNC_11(VAR_11))
   return VAR_11;


  if (VAR_7->link_speed != VAR_12 ||
      VAR_7->link_duplex != VAR_13) {
   VAR_7->link_speed = VAR_12;
   VAR_7->link_duplex = VAR_13;
   FUNC_4(VAR_7);
   FUNC_5(&VAR_10->dev,
    "%s: %s NIC Link is Up<%d Mbps %s>\n",
    VAR_6, VAR_9->name,
    VAR_7->link_speed,
    VAR_7->link_duplex == VAR_1 ?
    "Full Duplex" : "Half Duplex");
  }

  if (!FUNC_7(VAR_9)) {

   FUNC_8(VAR_9);
   FUNC_10(VAR_9);
  }
 }
 return 0;
}

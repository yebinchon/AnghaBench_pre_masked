
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int mtu; } ;
struct igb_adapter {int max_frame_size; int state; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (int) ;
 struct igb_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8, int VAR_9)
{
 struct igb_adapter *VAR_10 = FUNC_7(VAR_8);
 struct pci_dev *VAR_11 = VAR_10->pdev;
 int VAR_12 = VAR_9 + VAR_3 + VAR_1 + VAR_6;

 if ((VAR_9 < 68) || (VAR_12 > VAR_4)) {
  FUNC_1(&VAR_11->dev, "Invalid MTU setting\n");
  return -VAR_0;
 }


 if (VAR_12 > 9238) {
  FUNC_1(&VAR_11->dev, "MTU > 9216 not supported.\n");
  return -VAR_0;
 }


 if (VAR_12 < (VAR_2 + VAR_1))
  VAR_12 = VAR_2 + VAR_1;

 while (FUNC_9(VAR_7, &VAR_10->state))
  FUNC_6(1);


 VAR_10->max_frame_size = VAR_12;

 if (FUNC_8(VAR_8))
  FUNC_3(VAR_10);

 FUNC_2(&VAR_11->dev, "changing MTU from %d to %d\n",
   VAR_8->mtu, VAR_9);
 VAR_8->mtu = VAR_9;

 if (FUNC_8(VAR_8))
  FUNC_5(VAR_10);
 else
  FUNC_4(VAR_10);

 FUNC_0(VAR_7, &VAR_10->state);

 return 0;
}

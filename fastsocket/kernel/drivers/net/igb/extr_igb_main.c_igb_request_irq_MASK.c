
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int irq; } ;
struct net_device {int name; } ;
struct igb_adapter {int flags; int * q_vector; scalar_t__ msix_entries; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct igb_adapter*) ;
 int FUNC_8 (struct igb_adapter*) ;
 int FUNC_9 (struct igb_adapter*) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (int ,int ,int ,int ,struct igb_adapter*) ;

__attribute__((used)) static int FUNC_12(struct igb_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct pci_dev *VAR_6 = VAR_4->pdev;
 int VAR_7 = 0;

 if (VAR_4->msix_entries) {
  VAR_7 = FUNC_7(VAR_4);
  if (!VAR_7)
   goto request_done;

  FUNC_5(VAR_4);
  FUNC_4(VAR_4);

  FUNC_2(VAR_4);
  VAR_7 = FUNC_6(VAR_4, 0);
  if (VAR_7)
   goto request_done;

  FUNC_10(VAR_4);
  FUNC_9(VAR_4);
  FUNC_3(VAR_4);
 }

 FUNC_1(VAR_4->q_vector[0], 0);

 if (VAR_4->flags & VAR_0) {
  VAR_7 = FUNC_11(VAR_6->irq, VAR_3, 0,
      VAR_5->name, VAR_4);
  if (!VAR_7)
   goto request_done;


  FUNC_8(VAR_4);
  VAR_4->flags &= ~VAR_0;
 }

 VAR_7 = FUNC_11(VAR_6->irq, VAR_2, VAR_1,
     VAR_5->name, VAR_4);

 if (VAR_7)
  FUNC_0(&VAR_6->dev, "Error %d getting interrupt\n",
   VAR_7);

request_done:
 return VAR_7;
}

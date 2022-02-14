
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rtl8169_private {int * RxDescArray; int * TxDescArray; int TxPhyAddr; int RxPhyAddr; TYPE_1__ wk; struct pci_dev* pci_dev; } ;
struct pci_dev {int dev; int irq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct rtl8169_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct rtl8169_private*) ;
 int FUNC_9 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct rtl8169_private *VAR_4 = FUNC_3(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->pci_dev;

 FUNC_4(&VAR_5->dev);


 FUNC_7(VAR_3);

 FUNC_8(VAR_4);
 FUNC_0(VAR_2, VAR_4->wk.flags);

 FUNC_6(VAR_3);
 FUNC_9(VAR_4);

 FUNC_2(VAR_5->irq, VAR_3);

 FUNC_1(&VAR_5->dev, VAR_0, VAR_4->RxDescArray,
     VAR_4->RxPhyAddr);
 FUNC_1(&VAR_5->dev, VAR_1, VAR_4->TxDescArray,
     VAR_4->TxPhyAddr);
 VAR_4->TxDescArray = ((void*)0);
 VAR_4->RxDescArray = ((void*)0);

 FUNC_5(&VAR_5->dev);

 return 0;
}

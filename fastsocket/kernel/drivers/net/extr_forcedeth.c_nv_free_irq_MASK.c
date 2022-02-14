
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fe_priv {int msi_flags; TYPE_2__* pci_dev; TYPE_1__* msi_x_entry; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (VAR_4->msi_flags & VAR_1) {
  for (VAR_5 = 0; VAR_5 < (VAR_4->msi_flags & VAR_2); VAR_5++) {
   FUNC_0(VAR_4->msi_x_entry[VAR_5].vector, VAR_3);
  }
  FUNC_3(VAR_4->pci_dev);
  VAR_4->msi_flags &= ~VAR_1;
 } else {
  FUNC_0(VAR_4->pci_dev->irq, VAR_3);
  if (VAR_4->msi_flags & VAR_0) {
   FUNC_2(VAR_4->pci_dev);
   VAR_4->msi_flags &= ~VAR_0;
  }
 }
}

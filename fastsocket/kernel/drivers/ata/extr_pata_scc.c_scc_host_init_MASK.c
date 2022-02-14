
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_host {int * iomap; TYPE_1__** ports; int dev; } ;
struct TYPE_2__ {int ioaddr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct ata_host*) ;
 int FUNC_4 (int *,int ) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ata_host *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_5(VAR_2->dev);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_4(&VAR_2->ports[0]->ioaddr, VAR_2->iomap[VAR_1]);

 FUNC_2(VAR_3);

 return 0;
}

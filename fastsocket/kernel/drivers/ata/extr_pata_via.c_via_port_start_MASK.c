
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_port {int dummy; } ;
struct pci_dev {int dev; } ;
struct ata_port {struct via_port* private_data; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*) ;
 struct via_port* FUNC_1 (int *,int,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_2)
{
 struct via_port *VAR_3;
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->host->dev);

 int VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3 = FUNC_1(&VAR_4->dev, sizeof(struct via_port), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_2->private_data = VAR_3;
 return 0;
}

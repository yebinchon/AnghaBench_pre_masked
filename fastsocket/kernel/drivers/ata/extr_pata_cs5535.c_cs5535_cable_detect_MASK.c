
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_3)
{
 u8 VAR_4;
 struct pci_dev *VAR_5 = FUNC_1(VAR_3->host->dev);

 FUNC_0(VAR_5, VAR_2, &VAR_4);
 if (VAR_4 & 1)
  return VAR_1;
 else
  return VAR_0;
}

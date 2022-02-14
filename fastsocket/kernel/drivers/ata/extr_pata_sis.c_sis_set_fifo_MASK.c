
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ class; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_1->host->dev);
 u8 VAR_4;
 u8 VAR_5 = 0x11;

 VAR_5 <<= (2 * VAR_1->port_no);
 VAR_5 <<= VAR_2->devno;


 FUNC_0(VAR_3, 0x4B, &VAR_4);
 VAR_4 &= ~VAR_5;


 if (VAR_2->class == VAR_0)
  VAR_4 |= VAR_5;
 FUNC_1(VAR_3, 0x4B, VAR_4);
}

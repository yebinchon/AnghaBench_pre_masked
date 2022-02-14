
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_1->host->dev);
 u8 VAR_4;

 FUNC_0(VAR_1, VAR_2, VAR_2->pio_mode - VAR_0);


 FUNC_1(VAR_3, 0x44 + VAR_1->port_no, &VAR_4);
 VAR_4 &= ~(7 << (4 * VAR_2->devno));
 FUNC_2(VAR_3, 0x44 + VAR_1->port_no, VAR_4);
}

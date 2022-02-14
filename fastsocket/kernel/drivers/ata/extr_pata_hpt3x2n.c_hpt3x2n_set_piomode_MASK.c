
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_5(VAR_0->host->dev);
 u32 VAR_3, VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u8 VAR_7;

 VAR_3 = 0x40 + 4 * (VAR_1->devno + 2 * VAR_0->port_no);
 VAR_4 = 0x51 + 4 * VAR_0->port_no;


 FUNC_1(VAR_2, VAR_4, &VAR_7);
 VAR_7 &= ~0x07;
 FUNC_3(VAR_2, VAR_4, VAR_7);

 FUNC_2(VAR_2, VAR_3, &VAR_5);
 VAR_6 = FUNC_0(VAR_0, VAR_1->pio_mode);
 VAR_6 &= 0xCFC3FFFF;
 VAR_5 &= ~0xCFC3FFFF;
 FUNC_4(VAR_2, VAR_3, VAR_5 | VAR_6);
}

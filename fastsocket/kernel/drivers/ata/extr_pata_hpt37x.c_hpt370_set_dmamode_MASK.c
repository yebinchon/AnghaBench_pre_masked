
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_port*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_5(VAR_1->host->dev);
 u32 VAR_4, VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u8 VAR_9;

 VAR_4 = 0x40 + 4 * (VAR_2->devno + 2 * VAR_1->port_no);
 VAR_5 = 0x51 + 4 * VAR_1->port_no;


 FUNC_1(VAR_3, VAR_5, &VAR_9);
 VAR_9 &= ~0x02;
 VAR_9 |= 0x01;
 FUNC_3(VAR_3, VAR_5, VAR_9);

 VAR_8 = VAR_2->dma_mode < VAR_0 ? 0x31C001FF : 0x303C0000;

 FUNC_2(VAR_3, VAR_4, &VAR_6);
 VAR_7 = FUNC_0(VAR_1, VAR_2->dma_mode);
 VAR_7 &= VAR_8;
 VAR_6 &= ~VAR_8;
 FUNC_4(VAR_3, VAR_4, VAR_6 | VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_2, struct ata_device *VAR_3, int VAR_4)
{
 static u8 VAR_5[5] = { 0x5D, 0x47, 0x34, 0x22, 0x20 };

 struct pci_dev *VAR_6 = FUNC_4(VAR_2->host->dev);
 int VAR_7 = 2 * VAR_2->port_no + VAR_3->devno;
 int VAR_8 = (16 * VAR_2->port_no) + 8 * (VAR_3->devno ^ 1);
 u32 VAR_9;
 u16 VAR_10;

 FUNC_1(VAR_6, VAR_0, &VAR_10);
 VAR_10 &= ~(0x7 << (4 * VAR_7));
 VAR_10 |= VAR_4 << (4 * VAR_7);
 FUNC_3(VAR_6, VAR_0, VAR_10);

 FUNC_0(VAR_6, VAR_1, &VAR_9);
 VAR_9 &= ~(0xFF << VAR_8);
 VAR_9 |= (VAR_5[VAR_4] << VAR_8);
 FUNC_2(VAR_6, VAR_1, VAR_9);
}

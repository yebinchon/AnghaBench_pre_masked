
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ class; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1, struct ata_device *VAR_2, int VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_1->host->dev);
 int VAR_5 = 0x60 + 8 * VAR_1->port_no + 4 * VAR_2->devno;
 static u16 VAR_6[5] = {
  0x0913, 0x050C , 0x0308, 0x0206, 0x0104
 };
 u8 VAR_7, VAR_8;

 FUNC_1(VAR_4, VAR_5, &VAR_7);
 FUNC_1(VAR_4, VAR_5 + 1, &VAR_8);
 VAR_7 &= ~0x3F;
 VAR_8 &= ~0x1F;
 VAR_7 |= (VAR_6[VAR_3] >> 8);
 VAR_8 |= (VAR_6[VAR_3] & 0xFF);

 if (FUNC_0(VAR_2))
  VAR_7 |= 0x20;
 if (VAR_2->class == VAR_0)
  VAR_7 |= 0x10;
 FUNC_2(VAR_4, VAR_5, VAR_7);
 FUNC_2(VAR_4, VAR_5 + 1, VAR_8);
}

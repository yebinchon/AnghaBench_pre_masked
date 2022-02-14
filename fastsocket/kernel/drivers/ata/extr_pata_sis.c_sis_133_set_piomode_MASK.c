
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int pio_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct ata_port*,struct ata_device*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_1->host->dev);
 int VAR_4 = 0x40;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7 = VAR_2->pio_mode - VAR_0;

 const u32 VAR_8[] = {
  0x28269000,
  0x0C266000,
  0x04263000,
  0x0C0A3000,
  0x05093000
 };
 const u32 VAR_9[] = {
  0x1E1C6000,
  0x091C4000,
  0x031C2000,
  0x09072000,
  0x04062000
 };

 FUNC_2(VAR_1, VAR_2);


 FUNC_0(VAR_3, 0x54, &VAR_6);
 if (VAR_6 & 0x40000000)
  VAR_4 = 0x70;
 VAR_4 += 8 * VAR_1->port_no + 4 * VAR_2->devno;

 FUNC_0(VAR_3, VAR_4, &VAR_5);
 VAR_5 &= 0xC0C00FFF;

 if (VAR_5 & 0x08)
  VAR_5 |= VAR_8[VAR_7];
 else
  VAR_5 |= VAR_9[VAR_7];
 FUNC_1(VAR_3, VAR_4, VAR_5);
}

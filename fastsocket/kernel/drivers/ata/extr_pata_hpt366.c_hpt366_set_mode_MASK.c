
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hpt_clock {int xfer_mode; int timing; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; struct hpt_clock* private_data; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_2, struct ata_device *VAR_3,
       u8 VAR_4)
{
 struct hpt_clock *VAR_5 = VAR_2->host->private_data;
 struct pci_dev *VAR_6 = FUNC_5(VAR_2->host->dev);
 u32 VAR_7 = 0x40 + 4 * (VAR_3->devno + 2 * VAR_2->port_no);
 u32 VAR_8 = 0x51 + 4 * VAR_2->port_no;
 u32 VAR_9, VAR_10;
 u8 VAR_11;


 FUNC_1(VAR_6, VAR_8, &VAR_11);
 if (VAR_11 & 0x80) {
  VAR_11 &= ~0x80;
  FUNC_3(VAR_6, VAR_8, VAR_11);
 }


 if (VAR_4 < VAR_0)
  VAR_9 = 0xc1f8ffff;
 else if (VAR_4 < VAR_1)
  VAR_9 = 0x303800ff;
 else
  VAR_9 = 0x30070000;

 while (VAR_5->xfer_mode) {
  if (VAR_5->xfer_mode == VAR_4)
   break;
  VAR_5++;
 }
 if (!VAR_5->xfer_mode)
  FUNC_0();






 FUNC_2(VAR_6, VAR_7, &VAR_10);
 VAR_10 = ((VAR_10 & ~VAR_9) | (VAR_5->timing & VAR_9)) & ~0xc0000000;
 FUNC_4(VAR_6, VAR_7, VAR_10);
}

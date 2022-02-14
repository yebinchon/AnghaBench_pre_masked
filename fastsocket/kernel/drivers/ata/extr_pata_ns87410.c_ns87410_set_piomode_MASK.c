
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct ata_timing {size_t active; size_t setup; size_t recover; } ;
struct ata_port {int port_no; struct ata_device* private_data; TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 void* FUNC_2 (size_t,int,int) ;
 int FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_6(VAR_1->host->dev);
 int VAR_4 = 0x40 + 4 * VAR_1->port_no;
 u8 VAR_5, VAR_6;
 struct ata_timing VAR_7;

 static const u8 VAR_8[15] = {
  0, 1, 2, 3, 4,
  5, 5, 6, 6, 6,
  6, 7, 7, 7, 7
 };

 static const u8 VAR_9[12] = {
  0, 1, 2, 3, 4, 5, 6, 6, 7, 7, 7, 7
 };

 FUNC_4(VAR_3, VAR_4 + 3, &VAR_6);

 if (FUNC_0(VAR_2))
  VAR_6 |= 0x04;
 else
  VAR_6 &= ~0x04;

 if (FUNC_1(VAR_2, VAR_2->pio_mode, &VAR_7, 30303, 1) < 0) {
  FUNC_3(VAR_0, &VAR_3->dev, "unknown mode %d.\n", VAR_2->pio_mode);
  return;
 }

 VAR_7.active = FUNC_2(VAR_7.active, 2, 16) - 2;
 VAR_7.setup = FUNC_2(VAR_7.setup, 1, 4) - 1;
 VAR_7.recover = FUNC_2(VAR_7.recover, 1, 12) - 1;

 VAR_5 = (VAR_7.setup << 6) | (VAR_9[VAR_7.recover] << 3) | VAR_8[VAR_7.active];

 FUNC_5(VAR_3, VAR_4, VAR_5);
 FUNC_5(VAR_3, VAR_4 + 3, VAR_6);


 VAR_1->private_data = VAR_2;
}

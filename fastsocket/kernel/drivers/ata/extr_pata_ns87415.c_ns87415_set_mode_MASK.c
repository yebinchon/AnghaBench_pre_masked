
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_timing {int recover; int active; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int ,struct ata_timing*,unsigned long,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_1, struct ata_device *VAR_2, u8 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_6(VAR_1->host->dev);
 int VAR_5 = 2 * VAR_1->port_no + VAR_2->devno;
 int VAR_6 = 0x44 + 2 * VAR_5;
 unsigned long VAR_7 = 1000000000 / 33333;
 struct ata_timing VAR_8;
 u16 VAR_9;
 u8 VAR_10;
 u8 VAR_11;




 FUNC_1(VAR_2, VAR_2->pio_mode, &VAR_8, VAR_7, 0);

 VAR_9 = 17 - FUNC_2(VAR_8.active, 2, 17);
 VAR_9 |= (16 - FUNC_2(VAR_8.recover, 1, 16)) << 4;

 VAR_9 |= (VAR_9 << 8);
 FUNC_5(VAR_4, VAR_6, VAR_9);


 FUNC_3(VAR_4, 0x42, &VAR_10);
 VAR_10 &= ~(1 << (4 + VAR_5));
 if (VAR_3 >= VAR_0 || !FUNC_0(VAR_2))
  VAR_10 |= (1 << (4 + VAR_5));




 FUNC_3(VAR_4, 0x43, &VAR_11);
 while (VAR_11 & 0x03) {
  FUNC_7(1);
  FUNC_3(VAR_4, 0x43, &VAR_11);
 }


 FUNC_4(VAR_4, 0x42, VAR_10);



}

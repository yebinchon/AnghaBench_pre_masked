
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {size_t pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int const) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_2->host->dev);
 static const u8 VAR_5[] = { 0xA8, 0x65, 0x65, 0x31, 0x20 };
 FUNC_0(VAR_4, VAR_0, VAR_5[VAR_3->pio_mode - VAR_1]);
}

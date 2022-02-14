
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct ata_device*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_2->host->dev);
 int VAR_5 = VAR_3->dma_mode - VAR_0;
 int VAR_6 = FUNC_2(VAR_3);
 u16 VAR_7;


 const u16 VAR_8[] = { 0x008, 0x302, 0x301 };
 const u16 VAR_9[] = { 0xF000, 0xD000, 0xB000, 0xA000, 0x9000, 0x8000 };

 FUNC_0(VAR_4, VAR_6, &VAR_7);

 if (VAR_3->dma_mode < VAR_1) {


  VAR_7 &= ~0x870F;
  VAR_7 |= VAR_8[VAR_5];
 } else {

  VAR_5 = VAR_3->dma_mode - VAR_1;
  VAR_7 &= ~0xF000;
  VAR_7 |= VAR_9[VAR_5];
 }
 FUNC_1(VAR_4, VAR_6, VAR_7);
}

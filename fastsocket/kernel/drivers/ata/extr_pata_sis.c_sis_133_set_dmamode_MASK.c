
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int dma_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->host->dev);
 int VAR_5 = VAR_3->dma_mode - VAR_0;
 int VAR_6 = 0x40;
 u32 VAR_7;
 u32 VAR_8;


 static const u32 VAR_9[] = { 0x6B0, 0x470, 0x350, 0x140, 0x120, 0x110, 0x000 };
 static const u32 VAR_10[] = { 0x9F0, 0x6A0, 0x470, 0x250, 0x230, 0x220, 0x210 };


 FUNC_0(VAR_4, 0x54, &VAR_8);
 if (VAR_8 & 0x40000000)
  VAR_6 = 0x70;
 VAR_6 += (8 * VAR_2->port_no) + (4 * VAR_3->devno);

 FUNC_0(VAR_4, VAR_6, &VAR_7);

 if (VAR_3->dma_mode < VAR_1) {
  VAR_7 &= ~0x00000004;


 } else {
  VAR_5 = VAR_3->dma_mode - VAR_1;

  VAR_7 &= ~0x00000FF0;
  VAR_7 |= 0x00000004;
  if (VAR_7 & 0x08)
   VAR_7 |= VAR_10[VAR_5];
  else
   VAR_7 |= VAR_9[VAR_5];
 }
 FUNC_1(VAR_4, VAR_6, VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->host->dev);
 int VAR_5 = 0x60 + 8 * VAR_2->port_no + 4 * VAR_3->devno;
 static u8 VAR_6[6][2] = {
  { 0x60, 0x03 },
  { 0x40, 0x02 },
  { 0x20, 0x01 },
  { 0x40, 0x02 },
  { 0x20, 0x01 },
  { 0x20, 0x01 }
 };
 static u8 VAR_7[3][2] = {
  { 0xe0, 0x0f },
  { 0x60, 0x04 },
  { 0x60, 0x03 },
 };
 u8 VAR_8, VAR_9;

 FUNC_0(VAR_4, VAR_5 + 1, &VAR_8);
 FUNC_0(VAR_4, VAR_5 + 2, &VAR_9);

 VAR_8 &= ~0xE0;
 VAR_9 &= ~0x0F;

 if (VAR_3->dma_mode >= VAR_1) {
  int VAR_10 = VAR_3->dma_mode - VAR_1;
  VAR_8 |= VAR_6[VAR_10][0];
  VAR_9 |= VAR_6[VAR_10][1];

 } else {
  int VAR_11 = VAR_3->dma_mode - VAR_0;
  VAR_8 |= VAR_7[VAR_11][0];
  VAR_9 |= VAR_7[VAR_11][1];
 }
 FUNC_1(VAR_4, VAR_5 + 1, VAR_8);
 FUNC_1(VAR_4, VAR_5 + 2, VAR_9);

}

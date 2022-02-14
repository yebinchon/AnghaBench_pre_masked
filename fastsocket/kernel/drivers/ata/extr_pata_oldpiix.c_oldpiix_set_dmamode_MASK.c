
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {struct ata_device* private_data; scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_device {unsigned int dma_mode; scalar_t__ class; unsigned int const pio_mode; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (struct ata_port *VAR_5, struct ata_device *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_2(VAR_5->host->dev);
 u8 VAR_8 = VAR_5->port_no ? 0x42 : 0x40;
 u16 VAR_9;

 static const
 u8 VAR_10[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };







 unsigned int VAR_11 = VAR_6->dma_mode - VAR_1;
 unsigned int VAR_12;
 const unsigned int VAR_13[3] = {
  VAR_2, VAR_3, VAR_4
 };
 int VAR_14 = VAR_13[VAR_11] - VAR_2;

 FUNC_0(VAR_7, VAR_8, &VAR_9);

 VAR_12 = 3;

 if (VAR_6->class == VAR_0)
  VAR_12 |= 4;




 if (VAR_6->pio_mode < VAR_13[VAR_11])

  VAR_12 |= 8;



 if (VAR_6->devno == 0) {
  VAR_9 &= 0xCCE0;
  VAR_9 |= VAR_12;
 } else {
  VAR_9 &= 0xCC0E;
  VAR_9 |= (VAR_12 << 4);
 }
 VAR_9 |= (VAR_10[VAR_14][0] << 12) | (VAR_10[VAR_14][1] << 8);
 FUNC_1(VAR_7, VAR_8, VAR_9);


 VAR_5->private_data = VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {struct ata_device* private_data; scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_device {unsigned int pio_mode; scalar_t__ class; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 unsigned int VAR_4 = VAR_3->pio_mode - VAR_1;
 struct pci_dev *VAR_5 = FUNC_3(VAR_2->host->dev);
 unsigned int VAR_6= VAR_2->port_no ? 0x42 : 0x40;
 u16 VAR_7;
 int VAR_8 = 0;







 static const
 u8 VAR_9[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 if (VAR_4 > 1)
  VAR_8 |= 1;
 if (FUNC_0(VAR_3))
  VAR_8 |= 2;


 if (VAR_3->class == VAR_0)
  VAR_8 |= 4;

 FUNC_1(VAR_5, VAR_6, &VAR_7);





 if (VAR_3->devno == 0) {
  VAR_7 &= 0xCCE0;
  VAR_7 |= VAR_8;
 } else {
  VAR_7 &= 0xCC0E;
  VAR_7 |= (VAR_8 << 4);
 }
 VAR_7 |= (VAR_9[VAR_4][0] << 12) |
   (VAR_9[VAR_4][1] << 8);
 FUNC_2(VAR_5, VAR_6, VAR_7);


 VAR_2->private_data = VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {unsigned int pio_mode; int devno; scalar_t__ class; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,unsigned int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 unsigned int VAR_4 = VAR_3->pio_mode - VAR_1;
 struct pci_dev *VAR_5 = FUNC_5(VAR_2->host->dev);
 unsigned int VAR_6 = (VAR_3->devno != 0);
 unsigned int VAR_7= VAR_2->port_no ? 0x42 : 0x40;
 unsigned int VAR_8 = 0x44;
 u16 VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12 = 0;

 static const
 u8 VAR_13[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 if (VAR_4 >= 2)
  VAR_12 |= 1;
 if (FUNC_0(VAR_3))
  VAR_12 |= 2;

 if (VAR_3->class == VAR_0)
  VAR_12 |= 4;





 FUNC_2(VAR_5, VAR_7, &VAR_9);
 if (VAR_6) {

  VAR_9 &= 0xff0f;

  VAR_9 |= 0x4000;

  VAR_9 |= (VAR_12 << 4);
  FUNC_1(VAR_5, VAR_8, &VAR_10);
  VAR_10 &= (VAR_2->port_no ? 0x0f : 0xf0);

  VAR_10 |= ((VAR_13[VAR_4][0] << 2) | VAR_13[VAR_4][1])
      << (VAR_2->port_no ? 4 : 0);
 } else {

  VAR_9 &= 0xccf0;

  VAR_9 |= VAR_12;

  VAR_9 |=
   (VAR_13[VAR_4][0] << 12) |
   (VAR_13[VAR_4][1] << 8);
 }
 FUNC_4(VAR_5, VAR_7, VAR_9);
 if (VAR_6)
  FUNC_3(VAR_5, VAR_8, VAR_10);




 FUNC_1(VAR_5, 0x48, &VAR_11);
 VAR_11 &= ~(1 << (2 * VAR_2->port_no + VAR_3->devno));
 FUNC_3(VAR_5, 0x48, VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int device; } ;
struct ata_link {int pmp; TYPE_2__* ap; } ;
struct TYPE_4__ {int port_no; TYPE_1__* host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_1, unsigned int VAR_2, u32 *VAR_3)
{
 static const u8 VAR_4[] = { 1, 2, 6, 0 };
 struct pci_dev *VAR_5 = FUNC_3(VAR_1->ap->host->dev);
 int VAR_6 = 2 * VAR_1->ap->port_no + VAR_1->pmp;
 u32 VAR_7 = 0;
 u8 VAR_8;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_5, 0xA0 + VAR_6, &VAR_8);


  VAR_7 |= VAR_8 & 0x03;


  if (VAR_8 & (1 << 4))
   VAR_7 |= 0x02 << 4;
  else
   VAR_7 |= 0x01 << 4;


  VAR_7 |= VAR_4[(VAR_8 >> 2) & 0x3];
  break;

 case 129:

  FUNC_0(VAR_5->device != 0x5287);
  FUNC_2(VAR_5, 0xB0 + VAR_6 * 4, &VAR_7);
  break;

 case 130:
  FUNC_1(VAR_5, 0xA4 + VAR_6, &VAR_8);


  VAR_7 |= ((VAR_8 & 0x02) << 1) | (VAR_8 & 0x01);


  VAR_7 |= ((VAR_8 >> 2) & 0x03) << 8;
  break;

 default:
  return -VAR_0;
 }

 *VAR_3 = VAR_7;
 return 0;
}

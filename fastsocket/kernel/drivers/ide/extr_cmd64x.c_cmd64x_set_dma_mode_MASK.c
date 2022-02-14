
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;



 int const VAR_2 ;






 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_3, const u8 VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = FUNC_3(VAR_5->dev);
 u8 VAR_7 = VAR_3->dn & 0x01;
 u8 VAR_8 = 0, VAR_9 = VAR_5->channel ? VAR_1 : VAR_0;

 if (VAR_4 >= VAR_2) {
  (void) FUNC_0(VAR_6, VAR_9, &VAR_8);
  VAR_8 &= ~(VAR_7 ? 0xCA : 0x35);
 }

 switch(VAR_4) {
 case 128:
  VAR_8 |= VAR_7 ? 0x0A : 0x05;
  break;
 case 129:
  VAR_8 |= VAR_7 ? 0x4A : 0x15;
  break;
 case 130:
  VAR_8 |= VAR_7 ? 0x8A : 0x25;
  break;
 case 131:
  VAR_8 |= VAR_7 ? 0x42 : 0x11;
  break;
 case 132:
  VAR_8 |= VAR_7 ? 0x82 : 0x21;
  break;
 case 133:
  VAR_8 |= VAR_7 ? 0xC2 : 0x31;
  break;
 case 134:
  FUNC_2(VAR_3, 120, 70);
  break;
 case 135:
  FUNC_2(VAR_3, 150, 80);
  break;
 case 136:
  FUNC_2(VAR_3, 480, 215);
  break;
 }

 if (VAR_4 >= VAR_2)
  (void) FUNC_1(VAR_6, VAR_9, VAR_8);
}

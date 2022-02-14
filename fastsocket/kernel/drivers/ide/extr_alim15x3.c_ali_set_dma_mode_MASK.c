
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_3, const u8 VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = FUNC_2(VAR_5->dev);
 u8 VAR_7 = VAR_4;
 u8 VAR_8 = VAR_3->dn & 1;
 u8 VAR_9 = 0x00;
 int VAR_10 = (VAR_5->channel) ? 0x57 : 0x56;

 if (VAR_4 == VAR_2)
  VAR_7 = 0x47;

 if (VAR_4 < VAR_0) {
  u8 VAR_11 = (VAR_8) ? 0x7f : 0xf7;



  FUNC_0(VAR_6, VAR_10, &VAR_9);
  VAR_9 &= VAR_11;
  FUNC_1(VAR_6, VAR_10, VAR_9);




 } else {
  FUNC_0(VAR_6, VAR_10, &VAR_9);
  VAR_9 &= (0x0f << ((1-VAR_8) << 2));



  VAR_9 |= ((0x08 | ((4-VAR_7)&0x07)) << (VAR_8 << 2));
  FUNC_1(VAR_6, VAR_10, VAR_9);
  if (VAR_4 >= VAR_1) {
   FUNC_0(VAR_6, 0x4b, &VAR_9);
   VAR_9 |= 1;
   FUNC_1(VAR_6, 0x4b, VAR_9);
  }
 }
}

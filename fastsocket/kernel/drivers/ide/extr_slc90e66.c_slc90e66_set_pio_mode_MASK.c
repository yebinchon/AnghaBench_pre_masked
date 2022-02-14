
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; scalar_t__ media; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int VAR_1 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 struct pci_dev *VAR_5 = FUNC_7(VAR_4->dev);
 int VAR_6 = VAR_2->dn & 1;
 int VAR_7 = VAR_4->channel ? 0x42 : 0x40;
 int VAR_8 = 0x44;
 unsigned long VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 int VAR_12 = 0;

 static const u8 VAR_13[][2] = {
     { 0, 0 },
     { 0, 0 },
     { 1, 0 },
     { 2, 1 },
     { 2, 3 }, };

 FUNC_5(&VAR_1, VAR_9);
 FUNC_2(VAR_5, VAR_7, &VAR_10);

 if (VAR_3 > 1)
  VAR_12 |= 1;
 if (VAR_2->media == VAR_0)
  VAR_12 |= 4;
 if (FUNC_0(VAR_2, VAR_3))
  VAR_12 |= 2;
 if (VAR_6) {
  VAR_10 |= 0x4000;
  VAR_10 &= ~0x0070;
  if (VAR_3 > 1) {

   VAR_10 |= VAR_12 << 4;
  }
  FUNC_1(VAR_5, VAR_8, &VAR_11);
  VAR_11 &= VAR_4->channel ? 0x0f : 0xf0;
  VAR_11 |= ((VAR_13[VAR_3][0] << 2) | VAR_13[VAR_3][1]) <<
          (VAR_4->channel ? 4 : 0);
 } else {
  VAR_10 &= ~0x3307;
  if (VAR_3 > 1) {

   VAR_10 |= VAR_12;
  }
  VAR_10 |= (VAR_13[VAR_3][0] << 12) | (VAR_13[VAR_3][1] << 8);
 }
 FUNC_4(VAR_5, VAR_7, VAR_10);
 if (VAR_6)
  FUNC_3(VAR_5, VAR_8, VAR_11);
 FUNC_6(&VAR_1, VAR_9);
}

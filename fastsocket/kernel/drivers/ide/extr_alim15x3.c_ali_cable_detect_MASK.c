
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_3 ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static u8 FUNC_5(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_4(VAR_4->dev);
 unsigned long VAR_6;
 u8 VAR_7 = VAR_0, VAR_8;

 FUNC_2(VAR_6);

 if (VAR_3 >= 0xC2) {
  if (FUNC_0(VAR_5))
   VAR_7 = VAR_1;
  else {
   FUNC_3(VAR_5, 0x4a, &VAR_8);
   if ((VAR_8 & (1 << VAR_4->channel)) == 0)
    VAR_7 = VAR_2;
  }
 }

 FUNC_1(VAR_6);

 return VAR_7;
}

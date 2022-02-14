
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ dma_base; scalar_t__ select_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->dev);
 u16 VAR_5 = 0;
 u8 VAR_6;

 FUNC_1(VAR_4, VAR_3->select_data + 2, &VAR_5);
 if (VAR_5 & 0x1FF) {

  return 0;
 }

 VAR_6 = FUNC_0(VAR_3->dma_base + VAR_1);

 if (VAR_6 & VAR_0)
  return 1;

 return 0;
}

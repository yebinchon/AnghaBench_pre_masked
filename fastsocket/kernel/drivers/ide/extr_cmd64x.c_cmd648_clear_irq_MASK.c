
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 struct pci_dev *VAR_4 = FUNC_3(VAR_3->dev);
 unsigned long VAR_5 = FUNC_2(VAR_4, 4);
 u8 VAR_6 = VAR_3->channel ? VAR_1 :
        VAR_0;
 u8 VAR_7 = FUNC_0(VAR_5 + 1);


 FUNC_1((VAR_7 & ~(VAR_0 | VAR_1)) | VAR_6,
      VAR_5 + 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int name; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_2->hwif->dev);
 u32 VAR_4;

 FUNC_0(("sl82c105_resetproc(drive:%s)\n", VAR_2->name));

 FUNC_1(VAR_3, 0x40, &VAR_4);
 VAR_4 |= (VAR_1 | VAR_0);
 FUNC_2(VAR_3, 0x40, VAR_4);
}

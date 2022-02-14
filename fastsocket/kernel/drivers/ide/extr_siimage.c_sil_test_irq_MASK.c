
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 unsigned long FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct pci_dev*,unsigned long) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(ide_hwif_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0->dev);
 unsigned long VAR_2 = FUNC_0(VAR_0, 1);
 u8 VAR_3 = FUNC_1(VAR_1, VAR_2);


 return (VAR_3 & 8) ? 1 : 0;
}

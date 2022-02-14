
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(ide_hwif_t *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2->dev);
 u32 VAR_4, VAR_5 = VAR_2->channel ? VAR_1 : VAR_0;

 FUNC_0(VAR_3, 0x40, &VAR_4);

 return (VAR_4 & VAR_5) ? 1 : 0;
}

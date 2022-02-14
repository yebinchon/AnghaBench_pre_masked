
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_1(VAR_4->dev);
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_2, &VAR_6);

 if (VAR_6 & VAR_3)
  return VAR_1;
 else
  return VAR_0;
}

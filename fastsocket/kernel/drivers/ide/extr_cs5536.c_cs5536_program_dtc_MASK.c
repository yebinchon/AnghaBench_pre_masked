
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_4, u8 VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(VAR_4->hwif->dev);
 int VAR_7 = (VAR_4->dn & 1) ? VAR_2 : VAR_1;
 u32 VAR_8;

 FUNC_0(VAR_6, VAR_0, &VAR_8);
 VAR_8 &= ~(VAR_3 << VAR_7);
 VAR_8 |= VAR_5 << VAR_7;
 FUNC_1(VAR_6, VAR_0, VAR_8);
}

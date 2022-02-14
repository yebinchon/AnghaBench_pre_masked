
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zoran {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3 (struct zoran *VAR_2,
        int VAR_3)
{
 if (VAR_3) {
  FUNC_1(VAR_2->pci_dev);
 } else {
  u16 VAR_4;

  FUNC_0(VAR_2->pci_dev, VAR_0, &VAR_4);
  VAR_4 &= ~VAR_1;
  FUNC_2(VAR_2->pci_dev, VAR_0, VAR_4);
 }
}

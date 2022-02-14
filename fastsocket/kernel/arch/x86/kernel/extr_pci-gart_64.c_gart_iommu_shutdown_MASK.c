
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;

void FUNC_5(void)
{
 struct pci_dev *VAR_6;
 int VAR_7;

 if (VAR_5 && (VAR_3 != &VAR_4))
  return;

 if (!FUNC_0(VAR_1))
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_1(); VAR_7++) {
  u32 VAR_8;

  VAR_6 = FUNC_2(VAR_7)->misc;
  FUNC_3(VAR_6, VAR_0, &VAR_8);

  VAR_8 &= ~VAR_2;

  FUNC_4(VAR_6, VAR_0, VAR_8);
 }
}

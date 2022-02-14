
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_bus {int self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_bus*,int (*) (int ,scalar_t__*),scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*) ;

void FUNC_4(struct pci_bus *VAR_4, u8 VAR_5)
{
 u8 VAR_6;

 if (!FUNC_0(VAR_4->self))
  return;

 if (VAR_3 == VAR_2)
  return;





 if (VAR_3 == VAR_0)
  VAR_6 = 0;

 if (VAR_3 == VAR_1) {
  VAR_6 = VAR_5;

  FUNC_3(VAR_4->self, &VAR_6);
  FUNC_1(VAR_4, FUNC_3, &VAR_6);
 }

 FUNC_2(VAR_4->self, &VAR_6);
 FUNC_1(VAR_4, FUNC_2, &VAR_6);
}

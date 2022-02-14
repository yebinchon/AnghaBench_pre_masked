
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev const*) ;
 int FUNC_1 (struct pci_dev const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct pci_dev *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_3) > 1 ||
        VAR_4 == VAR_2 ||
        VAR_4 == VAR_0 ||
        VAR_4 == VAR_1;
}

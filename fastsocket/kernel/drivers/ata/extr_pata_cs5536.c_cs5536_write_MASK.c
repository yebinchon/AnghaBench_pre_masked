
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct pci_dev *VAR_3, int VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_0[VAR_4], VAR_5, 0);
  return 0;
 }

 return FUNC_0(VAR_3, VAR_1[VAR_4], VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int DAC960_Controller_T ;


 int ** VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
  int VAR_2 = (long)FUNC_1(VAR_1);
  DAC960_Controller_T *VAR_3 = VAR_0[VAR_2];
  if (VAR_3 != ((void*)0))
      FUNC_0(VAR_3);
}

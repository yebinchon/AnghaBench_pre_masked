
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int aspm_default; } ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pcie_link_state *VAR_2)
{
 switch (VAR_1) {
 case 129:

  return 0;
 case 128:

  return VAR_0;
 case 130:
  return VAR_2->aspm_default;
 }
 return 0;
}

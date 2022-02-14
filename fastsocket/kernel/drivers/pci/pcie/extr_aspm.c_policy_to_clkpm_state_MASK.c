
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int clkpm_default; } ;





 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pcie_link_state *VAR_1)
{
 switch (VAR_0) {
 case 129:

  return 0;
 case 128:

  return 1;
 case 130:
  return VAR_1->clkpm_default;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {struct pcie_link_state* parent; } ;


 int FUNC_0 (struct pcie_link_state*,int ) ;
 int FUNC_1 (struct pcie_link_state*) ;

__attribute__((used)) static void FUNC_2(struct pcie_link_state *VAR_0)
{
 while (VAR_0) {
  FUNC_0(VAR_0, FUNC_1(VAR_0));
  VAR_0 = VAR_0->parent;
 }
}

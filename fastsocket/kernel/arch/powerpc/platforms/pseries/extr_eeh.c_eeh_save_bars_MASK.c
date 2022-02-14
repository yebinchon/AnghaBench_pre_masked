
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int * config_space; } ;


 int FUNC_0 (struct pci_dn*,int,int,int *) ;

__attribute__((used)) static void FUNC_1(struct pci_dn *VAR_0)
{
 int VAR_1;

 if (!VAR_0 )
  return;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  FUNC_0(VAR_0, VAR_1 * 4, 4, &VAR_0->config_space[VAR_1]);
}

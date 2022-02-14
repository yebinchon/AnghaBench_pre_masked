
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (int ,int ,unsigned int,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2, int VAR_3, u32 *VAR_4)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_0->number,
      VAR_1, VAR_2, VAR_3, VAR_4);
}

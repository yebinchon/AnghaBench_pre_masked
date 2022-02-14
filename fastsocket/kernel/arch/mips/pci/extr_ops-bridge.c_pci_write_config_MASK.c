
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int,int,int ) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_0, unsigned int VAR_1,
 int VAR_2, int VAR_3, u32 VAR_4)
{
 if (VAR_0->number > 0)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

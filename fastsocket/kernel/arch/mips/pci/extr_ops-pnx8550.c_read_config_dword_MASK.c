
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4, u32 * VAR_5)
{
 int VAR_6;
 if (VAR_2 == ((void*)0))
  return -1;

 if (VAR_4 & 0x03)
  return VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0, VAR_5);

 return VAR_6;
}

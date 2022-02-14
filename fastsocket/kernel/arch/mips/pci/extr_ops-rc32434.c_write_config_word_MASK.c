
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
    u16 VAR_6)
{
 u32 VAR_7 = 0;

 if (FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5, &VAR_7))
  return -1;

 VAR_7 = (VAR_7 & ~(0xffff << ((VAR_5 & 3) << 3))) |
     (VAR_6 << ((VAR_5 & 3) << 3));

 if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7))
  return -1;


 return VAR_0;
}

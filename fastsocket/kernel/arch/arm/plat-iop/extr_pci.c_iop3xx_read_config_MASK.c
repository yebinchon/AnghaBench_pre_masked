
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct pci_bus*,unsigned int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int
FUNC_3(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3,
  int VAR_4, u32 *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 u32 VAR_7 = FUNC_2(VAR_6) >> ((VAR_3 & 3) * 8);

 if (FUNC_1())
  VAR_7 = 0xffffffff;

 *VAR_5 = VAR_7;

 return VAR_0;
}

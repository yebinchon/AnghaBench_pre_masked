
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (struct pci_bus*,unsigned int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
  int VAR_5, u32 *VAR_6)
{
 unsigned long VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 u32 VAR_8 = FUNC_4(VAR_7) >> ((VAR_4 & 3) * 8);

 if (FUNC_3(1) || FUNC_5()) {
  FUNC_1(FUNC_0(VAR_0) & 3,
   VAR_0);
  VAR_8 = 0xffffffff;
 }

 *VAR_6 = VAR_8;

 return VAR_1;
}

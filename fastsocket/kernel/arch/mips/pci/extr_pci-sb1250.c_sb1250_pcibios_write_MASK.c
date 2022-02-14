
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct pci_bus*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3,
    int VAR_4, int VAR_5, u32 VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 u32 VAR_8 = 0;

 if ((VAR_5 == 2) && (VAR_4 & 1))
  return VAR_0;
 else if ((VAR_5 == 4) && (VAR_4 & 3))
  return VAR_0;

 if (!FUNC_3(VAR_2, VAR_3))
  return VAR_0;

 VAR_8 = FUNC_1(VAR_7);

 if (VAR_5 == 1)
  VAR_8 = (VAR_8 & ~(0xff << ((VAR_4 & 3) << 3))) |
      (VAR_6 << ((VAR_4 & 3) << 3));
 else if (VAR_5 == 2)
  VAR_8 = (VAR_8 & ~(0xffff << ((VAR_4 & 3) << 3))) |
      (VAR_6 << ((VAR_4 & 3) << 3));
 else
  VAR_8 = VAR_6;

 FUNC_2(VAR_7, VAR_8);

 return VAR_1;
}

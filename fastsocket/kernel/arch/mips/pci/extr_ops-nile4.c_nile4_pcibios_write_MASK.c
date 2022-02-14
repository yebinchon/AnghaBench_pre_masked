
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_5, unsigned int VAR_6,
 int VAR_7, int VAR_8, u32 VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 if ((VAR_8 == 2) && (VAR_7 & 1))
  return VAR_0;
 else if ((VAR_8 == 4) && (VAR_7 & 3))
  return VAR_0;

 FUNC_1(&VAR_4, VAR_10);
 VAR_12 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_7,
       &VAR_11);
 FUNC_2(&VAR_4, VAR_10);

 if (VAR_12)
  return VAR_12;

 if (VAR_8 == 1)
  VAR_11 = (VAR_11 & ~(0xff << ((VAR_7 & 3) << 3))) |
      (VAR_9 << ((VAR_7 & 3) << 3));
 else if (VAR_8 == 2)
  VAR_11 = (VAR_11 & ~(0xffff << ((VAR_7 & 3) << 3))) |
      (VAR_9 << ((VAR_7 & 3) << 3));
 else
  VAR_11 = VAR_9;

 if (FUNC_0
     (VAR_3, VAR_5, VAR_6, VAR_7, &VAR_11))
  return -1;

 return VAR_1;
}


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
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_4, unsigned int VAR_5,
 int VAR_6, int VAR_7, u32 *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10 = 0;
 int VAR_11;

 if ((VAR_7 == 2) && (VAR_6 & 1))
  return VAR_0;
 else if ((VAR_7 == 4) && (VAR_6 & 3))
  return VAR_0;

 FUNC_1(&VAR_3, VAR_9);
 VAR_11 = FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6,
     &VAR_10);
 FUNC_2(&VAR_3, VAR_9);

 if (VAR_11)
  return VAR_11;

 if (VAR_7 == 1)
  *VAR_8 = (VAR_10 >> ((VAR_6 & 3) << 3)) & 0xff;
 else if (VAR_7 == 2)
  *VAR_8 = (VAR_10 >> ((VAR_6 & 3) << 3)) & 0xffff;
 else
  *VAR_8 = VAR_10;

 return VAR_1;
}

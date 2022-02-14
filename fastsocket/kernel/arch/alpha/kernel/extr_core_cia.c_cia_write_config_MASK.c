
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int,unsigned char) ;
 scalar_t__ FUNC_1 (struct pci_bus*,unsigned int,int,unsigned long*,unsigned char*) ;

__attribute__((used)) static int
FUNC_2(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5, int VAR_6,
   u32 VAR_7)
{
 unsigned long VAR_8, VAR_9;
 long VAR_10;
 unsigned char VAR_11;

 if (FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_9, &VAR_11))
  return VAR_1;

 VAR_10 = (VAR_6 - 1) * 8;
 VAR_8 = (VAR_9 << 5) + VAR_10 + VAR_0;
 FUNC_0(VAR_8, VAR_7 << ((VAR_5 & 3) * 8), VAR_11);
 return VAR_2;
}

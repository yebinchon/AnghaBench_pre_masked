
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_bus*,unsigned int,int,int*) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_1, unsigned int VAR_2,
 int VAR_3, int VAR_4, u32 VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7);

 VAR_6 = VAR_5 << ((VAR_3 & 3) << 3);
 VAR_8 = ~(0xffffffffU >> ((4 - VAR_4) << 8));
 VAR_7 &= ~(VAR_8 << ((VAR_3 & 3) << 8));

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6 | VAR_7);

 return VAR_0;
}

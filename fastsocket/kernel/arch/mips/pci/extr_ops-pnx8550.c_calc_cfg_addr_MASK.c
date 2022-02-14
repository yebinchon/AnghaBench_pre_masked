
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int
FUNC_0(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = ((VAR_2->number > 0) ? (((VAR_2->number & 0xff) << VAR_0) | 1) : 0);
 VAR_5 |= ((VAR_3 & 0xff) << VAR_1) | (VAR_4 & 0xfc);

 return VAR_5;
}

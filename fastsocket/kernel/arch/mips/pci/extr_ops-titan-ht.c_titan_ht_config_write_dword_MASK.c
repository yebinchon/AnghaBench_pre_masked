
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct pci_bus {int number; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct pci_bus *VAR_1,
 unsigned int VAR_2, int VAR_3, u32 VAR_4)
{
 volatile uint32_t VAR_5;
 int VAR_6;

 VAR_6 = VAR_1->number;

 VAR_5 = (VAR_6 << 16) | (VAR_2 << 8) | (VAR_3 & 0xfc) | 0x80000000;
 if (VAR_6 != 0)
  VAR_5 |= 1;

 *(volatile int32_t *) 0xfb0000f0 |= 0x2;

 FUNC_0(30);

 *(volatile int32_t *) 0xfb0006f8 = VAR_5;
 *(volatile int32_t *) 0xfb0006fc = VAR_4;

 FUNC_0(30);

 *(volatile int32_t *) 0xfb0000f0 |= 0x2;

 return VAR_0;
}

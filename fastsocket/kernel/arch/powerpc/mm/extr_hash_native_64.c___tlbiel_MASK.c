
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int penc; unsigned long shift; } ;



 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned long VAR_1, int VAR_2, int VAR_3)
{
 unsigned int VAR_4;


 VAR_1 &= ~(0xffffULL << 48);

 switch (VAR_2) {
 case 128:
  VAR_1 &= ~0xffful;
  VAR_1 |= VAR_3 << 8;
  asm volatile(".long 0x7c000224 | (%0 << 11) | (0 << 21)"
        : : "r"(VAR_1) : "memory");
  break;
 default:
  VAR_4 = VAR_0[VAR_2].penc;
  VAR_1 &= ~((1ul << VAR_0[VAR_2].shift) - 1);
  VAR_1 |= VAR_4 << 12;
  VAR_1 |= VAR_3 << 8;
  VAR_1 |= 1;
  asm volatile(".long 0x7c000224 | (%0 << 11) | (1 << 21)"
        : : "r"(VAR_1) : "memory");
  break;
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* sram; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(unsigned int VAR_1, unsigned int VAR_2)
{
  VAR_1 &= 0xfffe;
  VAR_0.sram[VAR_1] = VAR_2 >> 8;
  VAR_0.sram[VAR_1 + 1] = VAR_2 & 0xff;
}

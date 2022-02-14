
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* sram; } ;


 TYPE_1__ VAR_0 ;

unsigned int FUNC_0(unsigned int VAR_1)
{
  VAR_1 &= 0xfffe;
  return (VAR_0.sram[VAR_1 + 1] | (VAR_0.sram[VAR_1] << 8));
}

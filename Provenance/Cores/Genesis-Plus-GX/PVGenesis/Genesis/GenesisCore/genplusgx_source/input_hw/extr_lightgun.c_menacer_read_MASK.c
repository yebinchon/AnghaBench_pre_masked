
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* pad; } ;


 TYPE_1__ VAR_0 ;

unsigned char FUNC_0(void)
{



  unsigned VAR_1 = VAR_0.pad[4] >> 4;
  return ((VAR_1 & 0x09) | ((VAR_1 >> 1) & 0x02) | ((VAR_1 << 1) & 0x04) | 0x40);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_2__ {scalar_t__ dram; } ;


 TYPE_1__* VAR_0 ;

uint32 FUNC_0(uint32 VAR_1)
{
  VAR_1 >>= 1;
  VAR_1 = (VAR_1 & 0x7801) | ((VAR_1 & 0x1e) << 6) | ((VAR_1 & 0x7e0) >> 4);
  return *(uint16 *)(VAR_0->dram + (VAR_1 & 0x1fffe));
}

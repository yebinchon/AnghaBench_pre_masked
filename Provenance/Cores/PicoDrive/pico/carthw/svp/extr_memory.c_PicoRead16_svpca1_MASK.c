
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ dram; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{

  u32 VAR_2 = VAR_1 >> 1;
  VAR_2 = (VAR_2 & 0x7001) | ((VAR_2 & 0x3e) << 6) | ((VAR_2 & 0xfc0) >> 5);
  return ((u16 *)VAR_0->dram)[VAR_2];
}

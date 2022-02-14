
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* bram; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
  return VAR_0->bram[(VAR_1>>1)&0x1fff];
}

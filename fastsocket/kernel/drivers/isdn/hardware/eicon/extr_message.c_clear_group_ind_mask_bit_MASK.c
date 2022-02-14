
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int word ;
struct TYPE_3__ {long* group_optimization_mask_table; } ;
typedef TYPE_1__ PLCI ;



__attribute__((used)) static void FUNC_0 (PLCI *VAR_0, word VAR_1)
{
  VAR_0->group_optimization_mask_table[VAR_1 >> 5] &= ~(1L << (VAR_1 & 0x1f));
}

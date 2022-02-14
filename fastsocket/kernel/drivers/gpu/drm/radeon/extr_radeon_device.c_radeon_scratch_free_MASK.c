
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int num_reg; scalar_t__* reg; int* free; } ;
struct radeon_device {TYPE_1__ scratch; } ;



void FUNC_0(struct radeon_device *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->scratch.num_reg; VAR_2++) {
  if (VAR_0->scratch.reg[VAR_2] == VAR_1) {
   VAR_0->scratch.free[VAR_2] = 1;
   return;
  }
 }
}

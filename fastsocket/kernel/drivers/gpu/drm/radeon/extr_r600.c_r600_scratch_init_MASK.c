
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_reg; int* free; scalar_t__ reg_base; scalar_t__* reg; } ;
struct radeon_device {TYPE_1__ scratch; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct radeon_device *VAR_1)
{
 int VAR_2;

 VAR_1->scratch.num_reg = 7;
 VAR_1->scratch.reg_base = VAR_0;
 for (VAR_2 = 0; VAR_2 < VAR_1->scratch.num_reg; VAR_2++) {
  VAR_1->scratch.free[VAR_2] = 1;
  VAR_1->scratch.reg[VAR_2] = VAR_1->scratch.reg_base + (VAR_2 * 4);
 }
}

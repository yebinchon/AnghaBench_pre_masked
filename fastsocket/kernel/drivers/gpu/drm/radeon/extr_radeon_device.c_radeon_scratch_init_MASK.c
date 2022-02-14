
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_reg; int* free; scalar_t__ reg_base; scalar_t__* reg; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ scratch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct radeon_device *VAR_2)
{
 int VAR_3;


 if (VAR_2->family < VAR_0) {
  VAR_2->scratch.num_reg = 5;
 } else {
  VAR_2->scratch.num_reg = 7;
 }
 VAR_2->scratch.reg_base = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2->scratch.num_reg; VAR_3++) {
  VAR_2->scratch.free[VAR_3] = 1;
  VAR_2->scratch.reg[VAR_3] = VAR_2->scratch.reg_base + (VAR_3 * 4);
 }
}

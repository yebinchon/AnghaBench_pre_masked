
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; TYPE_1__* surface_regs; } ;
struct TYPE_2__ {scalar_t__ bo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct radeon_device*,int) ;

void FUNC_3(struct radeon_device *VAR_3)
{

 if (VAR_3->family < VAR_0) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_3->surface_regs[VAR_4].bo)
    FUNC_1(VAR_3->surface_regs[VAR_4].bo);
   else
    FUNC_2(VAR_3, VAR_4);
  }

  FUNC_0(VAR_2, 0);
 }
}

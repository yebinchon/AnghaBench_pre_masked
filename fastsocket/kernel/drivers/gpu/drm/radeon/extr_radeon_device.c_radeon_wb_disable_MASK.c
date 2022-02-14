
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; scalar_t__ wb_obj; } ;
struct radeon_device {TYPE_1__ wb; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct radeon_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->wb.wb_obj) {
  VAR_1 = FUNC_1(VAR_0->wb.wb_obj, 0);
  if (FUNC_4(VAR_1 != 0))
   return;
  FUNC_0(VAR_0->wb.wb_obj);
  FUNC_2(VAR_0->wb.wb_obj);
  FUNC_3(VAR_0->wb.wb_obj);
 }
 VAR_0->wb.enabled = 0;
}

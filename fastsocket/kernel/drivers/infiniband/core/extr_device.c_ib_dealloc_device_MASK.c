
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct ib_device {scalar_t__ reg_state; TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ib_device *VAR_2)
{
 if (VAR_2->reg_state == VAR_0) {
  FUNC_1(VAR_2);
  return;
 }

 FUNC_0(VAR_2->reg_state != VAR_1);

 FUNC_2(&VAR_2->dev.kobj);
}

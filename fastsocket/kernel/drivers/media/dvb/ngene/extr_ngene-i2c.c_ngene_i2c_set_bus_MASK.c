
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene {int i2c_current_bus; TYPE_1__* card_info; } ;
struct TYPE_2__ {int i2c_access; } ;


 int FUNC_0 (struct ngene*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ngene *VAR_0, int VAR_1)
{
 if (!(VAR_0->card_info->i2c_access & 2))
  return;
 if (VAR_0->i2c_current_bus == VAR_1)
  return;

 switch (VAR_1) {
 case 0:
  FUNC_0(VAR_0, 3, 0);
  FUNC_0(VAR_0, 2, 1);
  break;

 case 1:
  FUNC_0(VAR_0, 2, 0);
  FUNC_0(VAR_0, 3, 1);
  break;
 }
 VAR_0->i2c_current_bus = VAR_1;
}

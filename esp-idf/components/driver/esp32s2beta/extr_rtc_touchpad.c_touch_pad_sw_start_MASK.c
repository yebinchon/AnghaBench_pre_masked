
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__ touch_start_force; int touch_start_en; } ;
struct TYPE_4__ {TYPE_1__ touch_ctrl2; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;

esp_err_t FUNC_3(void)
{
    FUNC_0((VAR_2.touch_ctrl2.touch_start_force == VAR_3),
                     "touch fsm mode error", VAR_0);
    FUNC_1();
    VAR_2.touch_ctrl2.touch_start_en = 0;
    VAR_2.touch_ctrl2.touch_start_en = 1;
    FUNC_2();
    return VAR_1;
}

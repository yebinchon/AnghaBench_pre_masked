
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frequency; int duty_mode; int counter_mode; scalar_t__ cmpr_b; scalar_t__ cmpr_a; } ;
typedef TYPE_1__ mcpwm_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,double) ;
 int FUNC_1 (int ,int ,double) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_5)
{

    FUNC_3();


    FUNC_5("Configuring Initial Parameters of mcpwm...\n");
    mcpwm_config_t VAR_6;
    VAR_6.frequency = 1000;
    VAR_6.cmpr_a = 0;
    VAR_6.cmpr_b = 0;
    VAR_6.counter_mode = VAR_3;
    VAR_6.duty_mode = VAR_0;
    FUNC_4(VAR_2, VAR_1, &VAR_6);
    while (1) {
        FUNC_1(VAR_2, VAR_1, 50.0);
        FUNC_6(2000 / VAR_4);
        FUNC_0(VAR_2, VAR_1, 30.0);
        FUNC_6(2000 / VAR_4);
        FUNC_2(VAR_2, VAR_1);
        FUNC_6(2000 / VAR_4);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int frequency; int duty_mode; int counter_mode; scalar_t__ cmpr_b; scalar_t__ cmpr_a; } ;
typedef TYPE_1__ mcpwm_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;

void FUNC_6(void *VAR_6)
{
    uint32_t VAR_7, VAR_8;

    FUNC_0();


    FUNC_3("Configuring Initial Parameters of mcpwm......\n");
    mcpwm_config_t VAR_9;
    VAR_9.frequency = 50;
    VAR_9.cmpr_a = 0;
    VAR_9.cmpr_b = 0;
    VAR_9.counter_mode = VAR_4;
    VAR_9.duty_mode = VAR_0;
    FUNC_1(VAR_3, VAR_2, &VAR_9);
    while (1) {
        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            FUNC_3("Angle of rotation: %d\n", VAR_8);
            VAR_7 = FUNC_4(VAR_8);
            FUNC_3("pulse width: %dus\n", VAR_7);
            FUNC_2(VAR_3, VAR_2, VAR_1, VAR_7);
            FUNC_5(10);
        }
    }
}

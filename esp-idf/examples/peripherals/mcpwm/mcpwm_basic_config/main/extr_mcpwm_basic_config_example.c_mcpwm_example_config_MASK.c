
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int frequency; double cmpr_a; double cmpr_b; void* duty_mode; void* counter_mode; } ;
typedef TYPE_2__ mcpwm_config_t ;
struct TYPE_9__ {int carrier_period; int carrier_duty; int pulse_width_in_os; int carrier_ivt_mode; int carrier_os_mode; } ;
typedef TYPE_3__ mcpwm_carrier_config_t ;
struct TYPE_7__ {int val; } ;
struct TYPE_10__ {TYPE_1__ int_ena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (size_t,int ,int ,int ) ;
 int FUNC_1 (size_t,int ,TYPE_3__*) ;
 int FUNC_2 (size_t,int ,int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (size_t,int ,int ) ;
 int FUNC_5 (size_t,int ,int ,int ,int ) ;
 int FUNC_6 (size_t,int ,TYPE_2__*) ;
 int FUNC_7 (size_t,int ,int *,int ,int *) ;
 int FUNC_8 (size_t,int ,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void *VAR_32)
{

    FUNC_3();


    FUNC_9("Configuring Initial Parameters of mcpwm...\n");
    mcpwm_config_t VAR_33;
    VAR_33.frequency = 1000;
    VAR_33.cmpr_a = 60.0;
    VAR_33.cmpr_b = 50.0;
    VAR_33.counter_mode = VAR_29;
    VAR_33.duty_mode = VAR_9;
    FUNC_6(VAR_28, VAR_25, &VAR_33);
    VAR_33.frequency = 500;
    VAR_33.cmpr_a = 45.9;
    VAR_33.cmpr_b = 7.0;
    VAR_33.counter_mode = VAR_29;
    VAR_33.duty_mode = VAR_9;
    FUNC_6(VAR_28, VAR_26, &VAR_33);
    VAR_33.frequency = 400;
    VAR_33.cmpr_a = 23.2;
    VAR_33.cmpr_b = 97.0;
    VAR_33.counter_mode = VAR_30;
    VAR_33.duty_mode = VAR_10;
    FUNC_6(VAR_28, VAR_27, &VAR_33);
    FUNC_10(((void*)0));
}

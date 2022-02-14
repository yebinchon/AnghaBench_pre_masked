
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sigmadelta_prescale; int sigmadelta_gpio; int sigmadelta_duty; int channel; } ;
typedef TYPE_1__ sigmadelta_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void)
{
    sigmadelta_config_t VAR_2 = {
        .channel = VAR_1,
        .sigmadelta_prescale = 80,
        .sigmadelta_duty = 0,
        .sigmadelta_gpio = VAR_0,
    };
    FUNC_0(&VAR_2);
}

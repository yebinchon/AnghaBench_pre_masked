
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ channel; int sigmadelta_gpio; int sigmadelta_prescale; int sigmadelta_duty; } ;
typedef TYPE_1__ sigmadelta_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

esp_err_t FUNC_5(const sigmadelta_config_t *VAR_5)
{
    FUNC_1(VAR_5->channel < VAR_3, VAR_2, VAR_0);
    FUNC_1(FUNC_0(VAR_5->sigmadelta_gpio), VAR_4, VAR_0);
    FUNC_2(VAR_5->channel, VAR_5->sigmadelta_duty);
    FUNC_4(VAR_5->channel, VAR_5->sigmadelta_prescale);
    FUNC_3(VAR_5->channel, VAR_5->sigmadelta_gpio);
    return VAR_1;
}

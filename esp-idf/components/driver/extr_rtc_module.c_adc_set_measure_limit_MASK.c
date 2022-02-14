
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int meas_num_limit; int max_meas_num; } ;
struct TYPE_4__ {TYPE_1__ saradc_ctrl2; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static esp_err_t FUNC_2(uint8_t VAR_3, bool VAR_4)
{
    FUNC_0(&VAR_2);

    VAR_1.saradc_ctrl2.max_meas_num = VAR_3;

    VAR_1.saradc_ctrl2.meas_num_limit = VAR_4;
    FUNC_1(&VAR_2);
    return VAR_0;
}

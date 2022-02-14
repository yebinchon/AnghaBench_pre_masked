
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {int rstb_wait; int start_wait; int standby_wait; int sample_cycle; } ;
struct TYPE_4__ {int rstb_wait; int xpd_wait; int standby_wait; } ;
struct TYPE_6__ {TYPE_2__ saradc_fsm; TYPE_1__ saradc_fsm_wait; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static esp_err_t FUNC_2(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    FUNC_0(&VAR_2);
    if (VAR_6 >= 0) {
        VAR_1.saradc_fsm.sample_cycle = VAR_6;
    }
    FUNC_1(&VAR_2);
    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ tsens_clkgate_en; } ;
struct TYPE_4__ {scalar_t__ tsens_power_up; } ;
struct TYPE_6__ {TYPE_2__ sar_tctrl2; TYPE_1__ sar_tctrl; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;

esp_err_t FUNC_1(void)
{
    VAR_1.sar_tctrl.tsens_power_up = 0;
    VAR_1.sar_tctrl2.tsens_clkgate_en = 0;
    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {int tsens_power_up; scalar_t__ tsens_dump_out; } ;
struct TYPE_4__ {int tsens_clkgate_en; } ;
struct TYPE_6__ {TYPE_2__ sar_tctrl; TYPE_1__ sar_tctrl2; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_3 ;
 int * FUNC_1 () ;

esp_err_t FUNC_2(void)
{
    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_1();
    }
    FUNC_0(VAR_3 != ((void*)0), VAR_0);
    VAR_2.sar_tctrl.tsens_dump_out = 0;
    VAR_2.sar_tctrl2.tsens_clkgate_en = 1;
    VAR_2.sar_tctrl.tsens_power_up = 1;
    return VAR_1;
}

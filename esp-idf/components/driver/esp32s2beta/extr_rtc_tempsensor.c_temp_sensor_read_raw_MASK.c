
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int tsens_dump_out; int tsens_out; int tsens_ready; } ;
struct TYPE_4__ {TYPE_1__ sar_tctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

esp_err_t FUNC_3(uint32_t *VAR_6)
{
    FUNC_0(VAR_6 != ((void*)0), VAR_0);
    FUNC_0(VAR_5 != ((void*)0), VAR_1);
    FUNC_2(VAR_5, VAR_4);
    VAR_3.sar_tctrl.tsens_dump_out = 1;
    while (!VAR_3.sar_tctrl.tsens_ready);
    *VAR_6 = VAR_3.sar_tctrl.tsens_out;
    VAR_3.sar_tctrl.tsens_dump_out = 0;
    FUNC_1(VAR_5);
    return VAR_2;
}

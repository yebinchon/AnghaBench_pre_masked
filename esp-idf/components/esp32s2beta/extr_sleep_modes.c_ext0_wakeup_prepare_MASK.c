
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mux_sel; int fun_ie; scalar_t__ fun_sel; } ;
struct TYPE_3__ {int ext0_rtc_gpio_num; int ext0_trigger_level; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ,int ) ;
 TYPE_2__** VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_7 = VAR_6.ext0_rtc_gpio_num;

    FUNC_0(VAR_3, VAR_4, VAR_7);

    FUNC_2(VAR_2, 0x1,
            VAR_6.ext0_trigger_level, VAR_1);

    for (size_t VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        if (VAR_8 == VAR_7 && FUNC_1(VAR_8)) {
            VAR_5[VAR_8]->mux_sel = 1;
            VAR_5[VAR_8]->fun_sel = 0;
            VAR_5[VAR_8]->fun_ie = 1;
            break;
        }
    }
}

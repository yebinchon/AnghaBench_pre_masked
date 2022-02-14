
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rtc_num; int ie; int reg; int func; int mux; } ;
typedef TYPE_1__ rtc_gpio_desc_t ;
struct TYPE_5__ {int ext0_rtc_gpio_num; int ext0_trigger_level; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ,int ) ;
 TYPE_1__* VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_7 = VAR_6.ext0_rtc_gpio_num;

    FUNC_1(VAR_3, VAR_4, VAR_7);

    FUNC_2(VAR_2, 0x1,
            VAR_6.ext0_trigger_level, VAR_1);

    for (size_t VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        const rtc_gpio_desc_t* VAR_9 = &VAR_5[VAR_8];
        if (VAR_9->rtc_num == VAR_7) {
            FUNC_0(VAR_9->reg, VAR_9->mux);
            FUNC_2(VAR_9->reg, 0x3, 0, VAR_9->func);
            FUNC_0(VAR_9->reg, VAR_9->ie);
            break;
        }
    }
}

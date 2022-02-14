
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {size_t* pd_options; int wakeup_triggers; } ;


 int FUNC_0 (int ,char*,char const*,char const*,char const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;

__attribute__((used)) static uint32_t FUNC_1(void)
{
    extern int VAR_17;

    if ((VAR_16.pd_options[VAR_2] == VAR_4) &&
            ((size_t) &VAR_17 > 0 ||
             (VAR_16.wakeup_triggers & VAR_14))) {
        VAR_16.pd_options[VAR_2] = VAR_6;
    }






    if (VAR_16.pd_options[VAR_0] == VAR_4) {
        VAR_16.pd_options[VAR_0] = VAR_6;
    }



    if (VAR_16.pd_options[VAR_1] == VAR_4) {
        if (VAR_16.wakeup_triggers & (VAR_7 | VAR_8)) {
            VAR_16.pd_options[VAR_1] = VAR_6;
        } else if (VAR_16.wakeup_triggers & (VAR_13 | VAR_14)) {


            VAR_16.pd_options[VAR_1] = VAR_5;
        }
    }

    if (VAR_16.pd_options[VAR_3] == VAR_4) {
        VAR_16.pd_options[VAR_3] = VAR_5;
    }

    const char* VAR_18[] = {"OFF", "ON", "AUTO(OFF)" };
    FUNC_0(VAR_15, "RTC_PERIPH: %s, RTC_SLOW_MEM: %s, RTC_FAST_MEM: %s",
            VAR_18[VAR_16.pd_options[VAR_1]],
            VAR_18[VAR_16.pd_options[VAR_2]],
            VAR_18[VAR_16.pd_options[VAR_0]]);


    uint32_t VAR_19 = 0;
    if (VAR_16.pd_options[VAR_0] != VAR_6) {
        VAR_19 |= VAR_9;
    }
    if (VAR_16.pd_options[VAR_2] != VAR_6) {
        VAR_19 |= VAR_11;
    }
    if (VAR_16.pd_options[VAR_1] != VAR_6) {
        VAR_19 |= VAR_10;
    }
    if (VAR_16.pd_options[VAR_3] != VAR_6) {
        VAR_19 |= VAR_12;
    }

    if ((VAR_16.wakeup_triggers & (VAR_13 | VAR_14)) == 0) {




    }
    return VAR_19;
}

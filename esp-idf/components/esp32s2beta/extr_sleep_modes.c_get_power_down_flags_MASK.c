
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
 TYPE_1__ VAR_14 ;

__attribute__((used)) static uint32_t FUNC_1(void)
{
    extern int VAR_15, VAR_16, VAR_17, VAR_18;

    if ((VAR_14.pd_options[VAR_2] == VAR_4) &&
            (&VAR_16 > &VAR_15 || &VAR_18 > &VAR_17 ||
            (VAR_14.wakeup_triggers & VAR_12))) {
        VAR_14.pd_options[VAR_2] = VAR_6;
    }






    if (VAR_14.pd_options[VAR_0] == VAR_4) {
        VAR_14.pd_options[VAR_0] = VAR_6;
    }



    if (VAR_14.pd_options[VAR_1] == VAR_4) {
        if (VAR_14.wakeup_triggers & VAR_7) {
            VAR_14.pd_options[VAR_1] = VAR_6;
        } else if (VAR_14.wakeup_triggers & (VAR_11 | VAR_12)) {


            VAR_14.pd_options[VAR_1] = VAR_5;
        }
    }

    if (VAR_14.pd_options[VAR_3] == VAR_4) {
        VAR_14.pd_options[VAR_3] = VAR_5;
    }

    const char* VAR_19[] = {"OFF", "ON", "AUTO(OFF)" };
    FUNC_0(VAR_13, "RTC_PERIPH: %s, RTC_SLOW_MEM: %s, RTC_FAST_MEM: %s",
            VAR_19[VAR_14.pd_options[VAR_1]],
            VAR_19[VAR_14.pd_options[VAR_2]],
            VAR_19[VAR_14.pd_options[VAR_0]]);


    uint32_t VAR_20 = 0;
    if (VAR_14.pd_options[VAR_0] != VAR_6) {
        VAR_20 |= VAR_8;
    }
    if (VAR_14.pd_options[VAR_2] != VAR_6) {
        VAR_20 |= VAR_10;
    }
    if (VAR_14.pd_options[VAR_1] != VAR_6) {
        VAR_20 |= VAR_9;
    }



    return VAR_20;
}

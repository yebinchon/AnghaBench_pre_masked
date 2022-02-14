
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ rtc_ticks_at_sleep_start; scalar_t__ sleep_time_adjustment; scalar_t__ sleep_duration; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
    uint32_t VAR_1 = FUNC_0();
    int64_t VAR_2 = (int64_t) VAR_0.sleep_duration - (int64_t) VAR_0.sleep_time_adjustment;
    if (VAR_2 < 0) {
        VAR_2 = 0;
    }
    int64_t VAR_3 = FUNC_2(VAR_2, VAR_1);

    FUNC_1(VAR_0.rtc_ticks_at_sleep_start + VAR_3);
}

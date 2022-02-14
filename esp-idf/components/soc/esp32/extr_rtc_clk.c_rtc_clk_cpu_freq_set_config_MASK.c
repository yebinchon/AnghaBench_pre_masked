
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int rtc_xtal_freq_t ;
struct TYPE_3__ {scalar_t__ source; int div; int freq_mhz; int source_freq_mhz; } ;
typedef TYPE_1__ rtc_cpu_freq_config_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(const rtc_cpu_freq_config_t* VAR_7)
{
    rtc_xtal_freq_t VAR_8 = FUNC_8();
    uint32_t VAR_9 = FUNC_0(VAR_0, VAR_1);
    if (VAR_9 != VAR_3) {
        FUNC_6(VAR_8, 1);
        FUNC_7();
    }
    if (VAR_9 == VAR_2) {
        FUNC_2();
    }
    if (VAR_7->source == VAR_6) {
        if (VAR_7->div > 1) {
            FUNC_6(VAR_7->freq_mhz, VAR_7->div);
        }
    } else if (VAR_7->source == VAR_5) {
        FUNC_3();
        FUNC_7();
        FUNC_1(FUNC_8(), VAR_7->source_freq_mhz);
        FUNC_5(VAR_7->freq_mhz);
    } else if (VAR_7->source == VAR_4) {
        FUNC_4();
    }
}

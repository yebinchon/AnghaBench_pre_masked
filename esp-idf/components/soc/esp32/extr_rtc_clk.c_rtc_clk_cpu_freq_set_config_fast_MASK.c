
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ source; scalar_t__ source_freq_mhz; int freq_mhz; int div; } ;
typedef TYPE_1__ rtc_cpu_freq_config_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;

void FUNC_3(const rtc_cpu_freq_config_t* VAR_3)
{
    if (VAR_3->source == VAR_1) {
        FUNC_2(VAR_3->freq_mhz, VAR_3->div);
    } else if (VAR_3->source == VAR_0 &&
            VAR_2 == VAR_3->source_freq_mhz) {
        FUNC_1(VAR_3->freq_mhz);
    } else {

        FUNC_0(VAR_3);
    }
}

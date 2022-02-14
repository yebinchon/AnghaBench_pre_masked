
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int touch_filter_mode_t ;
struct TYPE_3__ {int debounce_cnt; int hysteresis_thr; int noise_thr; int noise_neg_thr; int neg_noise_limit; int jitter_step; int mode; } ;
typedef TYPE_1__ touch_filter_config_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(touch_filter_mode_t VAR_2)
{

    touch_filter_config_t VAR_3 = {
        .mode = VAR_2,
        .debounce_cnt = 1,
        .hysteresis_thr = 1,
        .noise_thr = 1,
        .noise_neg_thr = 1,
        .neg_noise_limit = 10,
        .jitter_step = 4,
    };
    FUNC_3(&VAR_3);
    FUNC_2();
    FUNC_1(VAR_1);
    FUNC_0(VAR_0, "touch pad filter init %d", VAR_2);
}

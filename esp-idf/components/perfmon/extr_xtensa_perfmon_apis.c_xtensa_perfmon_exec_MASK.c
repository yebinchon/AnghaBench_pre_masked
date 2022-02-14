
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t counters_size; size_t repeat_count; int* select_mask; scalar_t__ max_deviation; int callback_params; int (* callback ) (int ,int,int,scalar_t__) ;int call_params; int (* call_function ) (int ) ;int tracelevel; } ;
typedef TYPE_1__ xtensa_perfmon_config_t ;
typedef scalar_t__ uint32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,scalar_t__) ;
 int FUNC_4 (int,int,int,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;

esp_err_t FUNC_8(const xtensa_perfmon_config_t *VAR_5)
{
    esp_err_t VAR_6 = VAR_2;
    if (VAR_5->call_function == ((void*)0)) {
        FUNC_0(VAR_3, "Parameter call_function must be defined.");
        return VAR_0;
    }
    if (VAR_5->callback == ((void*)0)) {
        FUNC_0(VAR_3, "Parameter callback must be defined.");
        return VAR_0;
    }
    for (size_t VAR_7 = 0; VAR_7 < VAR_5->counters_size; VAR_7++) {
        uint32_t VAR_8 = VAR_4;
        uint32_t VAR_9 = 0;
        float VAR_10 = 0;

        for (size_t VAR_11 = 0; VAR_11 < VAR_5->repeat_count; VAR_11++) {

            FUNC_6();
            int VAR_12 = 0;

            if (VAR_5->tracelevel >=0) VAR_12 = 1;
            FUNC_4(0, 0, 0xffff, VAR_12, VAR_5->tracelevel);
            FUNC_4(1, VAR_5->select_mask[VAR_7 * 2 + 0], VAR_5->select_mask[VAR_7 * 2 + 1], VAR_12, VAR_5->tracelevel);
            FUNC_5();
            VAR_5->call_function(VAR_5->call_params);
            FUNC_6();
            uint32_t VAR_13 = FUNC_7(0);
            uint32_t VAR_14 = FUNC_7(1);
            VAR_10 += (float)VAR_14 / VAR_5->repeat_count;
            if (VAR_13 < VAR_8) {
                VAR_8 = VAR_13;
            }
            if (VAR_13 > VAR_9) {
                VAR_9 = VAR_13;
            }
            FUNC_1(VAR_3, "p0 = %i, p1 = %i", VAR_13, VAR_14);
        }
        uint32_t VAR_15 = (VAR_9 - VAR_8);

        if (VAR_15 > VAR_9 * VAR_5->max_deviation) {
            return VAR_1;
        } else {
            VAR_5->callback(VAR_5->callback_params, VAR_5->select_mask[VAR_7 * 2 + 0], VAR_5->select_mask[VAR_7 * 2 + 1], (uint32_t)VAR_10);
        }
    }
    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {float offset; float range_min; float range_max; } ;
typedef TYPE_1__ tsens_dac_offset_t ;
struct TYPE_6__ {size_t dac_offset; } ;
typedef TYPE_2__ temp_sensor_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;
 float VAR_5 ;
 float VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;

esp_err_t FUNC_4(float *VAR_8)
{
    FUNC_1(VAR_8 != ((void*)0), VAR_0);
    temp_sensor_config_t VAR_9;
    uint32_t VAR_10 = 0;
    esp_err_t VAR_11 = FUNC_2(&VAR_9);
    if (VAR_11 == VAR_2) {
        VAR_11 = FUNC_3(&VAR_10);
        FUNC_1(VAR_11 == VAR_2, VAR_11);
        const tsens_dac_offset_t *VAR_12 = &VAR_7[VAR_9.dac_offset];
        *VAR_8 = (VAR_4 * (float)VAR_10 - VAR_5 * VAR_12->offset - VAR_6);
        if (*VAR_8 < VAR_12->range_min || *VAR_8 > VAR_12->range_max) {
            FUNC_0(VAR_3, "Exceeding the temperature range!");
            VAR_11 = VAR_1;
        }
    }
    return VAR_11;
}

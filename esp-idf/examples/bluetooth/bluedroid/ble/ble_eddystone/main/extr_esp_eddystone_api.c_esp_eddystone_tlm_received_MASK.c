
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int8_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ version; void* time; void* adv_count; scalar_t__ temperature; void* battery_voltage; } ;
struct TYPE_6__ {TYPE_1__ tlm; } ;
struct TYPE_7__ {TYPE_2__ inform; } ;
typedef TYPE_3__ esp_eddystone_result_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__ const*,scalar_t__) ;
 void* FUNC_1 (scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static esp_err_t FUNC_2(const uint8_t* VAR_1, uint8_t VAR_2, esp_eddystone_result_t* VAR_3)
{
    uint8_t VAR_4 = 0;
    if(VAR_2 > VAR_0) {

        return -1;
    }
    VAR_3->inform.tlm.version = VAR_1[VAR_4++];
    VAR_3->inform.tlm.battery_voltage = FUNC_0(VAR_1, VAR_4);
    VAR_4 += 2;
    uint16_t VAR_5 = FUNC_0(VAR_1, VAR_4);
    int8_t VAR_6 = (int8_t)((VAR_5 >> 8) & 0xff);
    float VAR_7 = (VAR_5 & 0xff) / 256.0;
    VAR_3->inform.tlm.temperature = VAR_6 + VAR_7;
    VAR_4 += 2;
    VAR_3->inform.tlm.adv_count = FUNC_1(VAR_1, VAR_4);
    VAR_4 += 4;
    VAR_3->inform.tlm.time = FUNC_1(VAR_1, VAR_4);
    return 0;
}

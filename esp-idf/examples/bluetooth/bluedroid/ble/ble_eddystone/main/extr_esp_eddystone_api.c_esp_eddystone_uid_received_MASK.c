
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ ranging_data; scalar_t__* namespace_id; scalar_t__* instance_id; } ;
struct TYPE_6__ {TYPE_1__ uid; } ;
struct TYPE_7__ {TYPE_2__ inform; } ;
typedef TYPE_3__ esp_eddystone_result_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_0(const uint8_t* VAR_4, uint8_t VAR_5, esp_eddystone_result_t* VAR_6)
{
    uint8_t VAR_7 = 0;

    if((VAR_5 != VAR_0) && (VAR_5 != (VAR_3+VAR_0))) {

        return -1;
    }
    VAR_6->inform.uid.ranging_data = VAR_4[VAR_7++];
    for(int VAR_8=0; VAR_8<VAR_2; VAR_8++) {
        VAR_6->inform.uid.namespace_id[VAR_8] = VAR_4[VAR_7++];
    }
    for(int VAR_9=0; VAR_9<VAR_1; VAR_9++) {
        VAR_6->inform.uid.instance_id[VAR_9] = VAR_4[VAR_7++];
    }
    return 0;
}

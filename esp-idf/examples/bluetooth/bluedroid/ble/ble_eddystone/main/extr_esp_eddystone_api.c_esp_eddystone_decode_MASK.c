
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ srv_data_type; scalar_t__ flags; scalar_t__ frame_type; scalar_t__ srv_uuid; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
typedef TYPE_2__ esp_eddystone_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_0 (scalar_t__ const*,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,scalar_t__) ;

esp_err_t FUNC_2(const uint8_t* VAR_4, uint8_t VAR_5, esp_eddystone_result_t* VAR_6)
{
    if (VAR_5 == 0 || VAR_4 == ((void*)0) || VAR_6 == ((void*)0)) {
        return -1;
    }
    uint8_t VAR_7=0;
    while(VAR_6->common.srv_data_type != VAR_3)
    {
        VAR_7++;
        if(VAR_7 >= VAR_5 ) {
            return -1;
        }
        uint8_t VAR_8 = VAR_4[VAR_7++];
        switch(VAR_8)
        {
            case 129: {
                VAR_6->common.flags = VAR_4[VAR_7++];
                break;
            }
            case 130: {
                uint16_t VAR_9 = FUNC_1(VAR_4, VAR_7);
                if(VAR_9 != VAR_3) {
                    return -1;
                }
                VAR_6->common.srv_uuid = VAR_9;
                VAR_7 += 2;
                break;
            }
            case 128: {
                uint16_t VAR_10 = FUNC_1(VAR_4, VAR_7);
                VAR_7 += 2;
                uint8_t VAR_11 = VAR_4[VAR_7++];
                if(VAR_10 != VAR_3 || !(VAR_11 == VAR_1 || VAR_11 == VAR_2 ||
                   VAR_11 == VAR_0)) {
                    return -1;
                }
                VAR_6->common.srv_data_type = VAR_10;
                VAR_6->common.frame_type = VAR_11;
                break;
            }
            default:
                break;
        }
    }
    return FUNC_0(VAR_4+VAR_7, VAR_5-VAR_7, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int frame_type; } ;
struct TYPE_8__ {TYPE_1__ common; } ;
typedef TYPE_2__ esp_eddystone_result_t ;





 int FUNC_0 (int const*,int ,TYPE_2__*) ;
 int FUNC_1 (int const*,int ,TYPE_2__*) ;
 int FUNC_2 (int const*,int ,TYPE_2__*) ;

__attribute__((used)) static esp_err_t FUNC_3(const uint8_t* VAR_0, uint8_t VAR_1, esp_eddystone_result_t* VAR_2)
{
    static esp_err_t VAR_3=-1;
    switch(VAR_2->common.frame_type)
    {
        case 129: {
            VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
            break;
        }
        case 128: {
            VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
            break;
        }
        case 130: {
            VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
            break;
        }
        default:
            break;
    }
    return VAR_3;
}

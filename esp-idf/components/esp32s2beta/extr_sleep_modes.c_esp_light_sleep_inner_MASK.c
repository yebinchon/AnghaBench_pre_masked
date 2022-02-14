
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ force; } ;
typedef TYPE_1__ rtc_vddsdio_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__) ;

__attribute__((used)) static esp_err_t FUNC_3(uint32_t VAR_1,
        uint32_t VAR_2,
        rtc_vddsdio_config_t VAR_3)
{

    esp_err_t VAR_4 = FUNC_0(VAR_1);



    if (VAR_3.force) {
        FUNC_2(VAR_3);
    }


    if (VAR_1 & VAR_0) {

        FUNC_1(VAR_2);
    }
    return VAR_4;
}

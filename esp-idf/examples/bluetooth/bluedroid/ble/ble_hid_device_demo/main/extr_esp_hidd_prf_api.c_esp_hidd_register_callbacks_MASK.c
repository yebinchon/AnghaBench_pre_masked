
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * esp_hidd_event_cb_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int * hidd_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 () ;

esp_err_t FUNC_2(esp_hidd_event_cb_t VAR_5)
{
    esp_err_t VAR_6;

    if(VAR_5 != ((void*)0)) {
        VAR_4.hidd_cb = VAR_5;
    } else {
        return VAR_1;
    }

    if((VAR_6 = FUNC_1()) != VAR_2) {
        return VAR_6;
    }

    FUNC_0(VAR_0);

    if((VAR_6 = FUNC_0(VAR_3)) != VAR_2) {
        return VAR_6;
    }

    return VAR_6;
}

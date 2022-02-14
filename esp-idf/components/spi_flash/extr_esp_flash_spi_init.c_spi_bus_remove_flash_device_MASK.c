
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* host; struct TYPE_4__* driver_data; } ;
typedef TYPE_1__ esp_flash_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

esp_err_t FUNC_1(esp_flash_t *VAR_2)
{
    if (VAR_2==((void*)0)) {
        return VAR_0;
    }
    if (VAR_2->host) {
        FUNC_0(VAR_2->host->driver_data);
        FUNC_0(VAR_2->host);
    }
    FUNC_0(VAR_2);
    return VAR_1;
}

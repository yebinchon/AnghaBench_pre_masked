
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int os_func_data; TYPE_1__* os_func; TYPE_3__* host; } ;
typedef TYPE_2__ esp_flash_t ;
typedef int esp_err_t ;
struct TYPE_7__ {scalar_t__ (* host_idle ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int (* delay_ms ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int) ;

esp_err_t FUNC_2(esp_flash_t *VAR_2, uint32_t *VAR_3)
{
    while (VAR_2->host->host_idle(VAR_2->host) && *VAR_3 > 0) {
        if (*VAR_3 > 1) {
            VAR_2->os_func->delay_ms(VAR_2->os_func_data, 1);
        }
        (*VAR_3)--;
    }
    return (*VAR_3 > 0) ? VAR_1 : VAR_0;
}

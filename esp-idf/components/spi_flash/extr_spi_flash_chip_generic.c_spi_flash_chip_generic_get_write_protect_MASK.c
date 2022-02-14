
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* host; } ;
typedef TYPE_1__ esp_flash_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_5__ {scalar_t__ (* read_status ) (TYPE_2__*,int*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int*) ;

esp_err_t FUNC_2(esp_flash_t *VAR_2, bool *VAR_3)
{
    esp_err_t VAR_4 = VAR_0;
    uint8_t VAR_5;
    FUNC_0(VAR_3!=((void*)0));
    VAR_4 = VAR_2->host->read_status(VAR_2->host, &VAR_5);
    if (VAR_4 != VAR_0) {
        return VAR_4;
    }

    *VAR_3 = ((VAR_5 & VAR_1) == 0);
    return VAR_4;
}

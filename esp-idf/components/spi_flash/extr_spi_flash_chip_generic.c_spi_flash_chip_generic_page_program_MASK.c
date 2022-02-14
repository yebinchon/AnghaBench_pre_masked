
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* chip_drv; TYPE_4__* host; } ;
typedef TYPE_2__ esp_flash_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_9__ {int (* program_page ) (TYPE_4__*,void const*,int ,int ) ;} ;
struct TYPE_7__ {scalar_t__ (* wait_idle ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_4__*,void const*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

esp_err_t FUNC_3(esp_flash_t *VAR_3, const void *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    esp_err_t VAR_7;

    VAR_7 = VAR_3->chip_drv->wait_idle(VAR_3, VAR_0);

    if (VAR_7 == VAR_2) {

        VAR_3->host->program_page(VAR_3->host, VAR_4, VAR_5, VAR_6);

        VAR_7 = VAR_3->chip_drv->wait_idle(VAR_3, VAR_1);
    }
    return VAR_7;
}

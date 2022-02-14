
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_1__* chip_drv; TYPE_4__* host; } ;
typedef TYPE_2__ esp_flash_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_11__ {scalar_t__ (* flush_cache ) (TYPE_4__*,int ,int ) ;int (* erase_block ) (TYPE_4__*,int ) ;} ;
struct TYPE_9__ {scalar_t__ (* set_chip_write_protect ) (TYPE_2__*,int) ;scalar_t__ (* wait_idle ) (TYPE_2__*,int ) ;int block_erase_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

esp_err_t FUNC_5(esp_flash_t *VAR_3, uint32_t VAR_4)
{
    esp_err_t VAR_5 = VAR_3->chip_drv->set_chip_write_protect(VAR_3, 0);
    if (VAR_5 == VAR_1) {
        VAR_5 = VAR_3->chip_drv->wait_idle(VAR_3, VAR_0);
    }
    if (VAR_5 == VAR_1) {
        VAR_3->host->erase_block(VAR_3->host, VAR_4);

        if (VAR_3->host->flush_cache) {
            VAR_5 = VAR_3->host->flush_cache(VAR_3->host, VAR_4, VAR_3->chip_drv->block_erase_size);
            if (VAR_5 != VAR_1) {
                return VAR_5;
            }
        }
        VAR_5 = VAR_3->chip_drv->wait_idle(VAR_3, VAR_2);
    }
    return VAR_5;
}

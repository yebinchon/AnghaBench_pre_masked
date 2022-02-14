
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_3__* host; TYPE_1__* chip_drv; } ;
typedef TYPE_2__ esp_flash_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_9__ {scalar_t__ const max_write_bytes; scalar_t__ (* flush_cache ) (TYPE_3__*,scalar_t__,scalar_t__) ;} ;
struct TYPE_7__ {scalar_t__ page_size; scalar_t__ (* set_chip_write_protect ) (TYPE_2__*,int) ;scalar_t__ (* program_page ) (TYPE_2__*,void const*,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,void const*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__) ;

esp_err_t FUNC_4(esp_flash_t *VAR_1, const void *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    esp_err_t VAR_5 = VAR_0;
    const uint32_t VAR_6 = VAR_1->chip_drv->page_size;

    while (VAR_5 == VAR_0 && VAR_4 > 0) {
        uint32_t VAR_7 = FUNC_0(VAR_1->host->max_write_bytes, FUNC_0(VAR_6, VAR_4));
        if ((VAR_3 + VAR_7) / VAR_6 != VAR_3 / VAR_6) {

            VAR_7 = VAR_6 - (VAR_3 % VAR_6);
        }

        VAR_5 = VAR_1->chip_drv->set_chip_write_protect(VAR_1, 0);

        if (VAR_5 == VAR_0) {
            VAR_5 = VAR_1->chip_drv->program_page(VAR_1, VAR_2, VAR_3, VAR_7);
            VAR_3 += VAR_7;
            VAR_2 = (void *)((intptr_t)VAR_2 + VAR_7);
            VAR_4 -= VAR_7;
        }
    }
    if (VAR_5 == VAR_0 && VAR_1->host->flush_cache) {
        VAR_5 = VAR_1->host->flush_cache(VAR_1->host, VAR_3, VAR_4);
    }
    return VAR_5;
}

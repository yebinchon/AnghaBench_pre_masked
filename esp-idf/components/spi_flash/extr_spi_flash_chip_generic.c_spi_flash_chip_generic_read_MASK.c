
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_2__* host; } ;
typedef TYPE_1__ esp_flash_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {scalar_t__ (* read ) (TYPE_2__*,void*,scalar_t__,scalar_t__) ;int max_read_bytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,void*,scalar_t__,scalar_t__) ;

esp_err_t FUNC_3(esp_flash_t *VAR_1, void *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    esp_err_t VAR_5 = VAR_0;

    FUNC_1(VAR_1);

    while (VAR_5 == VAR_0 && VAR_4 > 0) {
        uint32_t VAR_6 = FUNC_0(VAR_4, VAR_1->host->max_read_bytes);
        VAR_5 = VAR_1->host->read(VAR_1->host, VAR_2, VAR_3, VAR_6);

        VAR_2 += VAR_6;
        VAR_4 -= VAR_6;
        VAR_3 += VAR_6;
    }

    return VAR_5;
}

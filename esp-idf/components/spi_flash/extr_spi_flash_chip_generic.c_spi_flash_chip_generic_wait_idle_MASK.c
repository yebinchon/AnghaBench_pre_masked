
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int os_func_data; TYPE_1__* os_func; TYPE_3__* host; } ;
typedef TYPE_2__ esp_flash_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {scalar_t__ (* read_status ) (TYPE_3__*,int*) ;} ;
struct TYPE_6__ {int (* delay_ms ) (int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int*) ;
 int FUNC_2 (int ,int) ;

esp_err_t FUNC_3(esp_flash_t *VAR_3, uint32_t VAR_4)
{
    VAR_4++;

    uint8_t VAR_5 = 0;
    while (VAR_4 > 0) {

        esp_err_t VAR_6 = FUNC_0(VAR_3, &VAR_4);
        if (VAR_6 != VAR_1) {
            return VAR_6;
        }

        VAR_6 = VAR_3->host->read_status(VAR_3->host, &VAR_5);
        if (VAR_6 != VAR_1) {
            return VAR_6;
        }
        if ((VAR_5 & VAR_2) == 0) {
            break;
        }
        if (VAR_4 > 1) {
            VAR_3->os_func->delay_ms(VAR_3->os_func_data, 1);
        }
        VAR_4--;
    }

    return (VAR_4 > 0) ? VAR_1 : VAR_0;
}

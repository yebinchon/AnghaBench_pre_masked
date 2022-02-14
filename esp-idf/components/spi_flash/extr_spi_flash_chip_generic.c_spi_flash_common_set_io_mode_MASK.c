
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ (* esp_flash_wrsr_func_t ) (TYPE_2__*,scalar_t__) ;
struct TYPE_16__ {TYPE_1__* chip_drv; } ;
typedef TYPE_2__ esp_flash_t ;
typedef scalar_t__ (* esp_flash_rdsr_func_t ) (TYPE_2__*,scalar_t__*) ;
typedef scalar_t__ esp_err_t ;
struct TYPE_15__ {int (* set_chip_write_protect ) (TYPE_2__*,int) ;scalar_t__ (* wait_idle ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__*) ;
 int FUNC_8 (TYPE_2__*,int) ;

esp_err_t FUNC_9(esp_flash_t *VAR_4, esp_flash_wrsr_func_t VAR_5, esp_flash_rdsr_func_t VAR_6, uint32_t VAR_7)
{
    esp_err_t VAR_8 = VAR_2;
    const bool VAR_9 = FUNC_2(VAR_4);
    bool VAR_10 = 0;
    const bool VAR_11 = 1;

    bool VAR_12 = VAR_9;
    if (VAR_11) {
        VAR_12 = 1;
    }

    uint32_t VAR_13;
    if (VAR_12) {

        uint32_t VAR_14;
        VAR_8 = (*VAR_6)(VAR_4, &VAR_14);
        if (VAR_8 != VAR_2) {
            return VAR_8;
        }
        FUNC_0(VAR_3, "set_io_mode: status before 0x%x", VAR_14);
        if (VAR_9) {
            VAR_13 = VAR_14 | VAR_7;
        } else {
            VAR_13 = VAR_14 & (~VAR_7);
        }
        FUNC_1(VAR_3, "set_io_mode: status update 0x%x", VAR_13);
        if (VAR_14 != VAR_13) {
            VAR_10 = 1;
        }
    }

    if (VAR_10) {

        VAR_4->chip_drv->set_chip_write_protect(VAR_4, 0);

        VAR_8 = (*VAR_5)(VAR_4, VAR_13);
        if (VAR_8 != VAR_2) {
            return VAR_8;
        }

        VAR_8 = VAR_4->chip_drv->wait_idle(VAR_4, VAR_0);
        if (VAR_8 != VAR_2) {
            return VAR_8;
        }


        uint32_t VAR_15;
        VAR_8 = (*VAR_6)(VAR_4, &VAR_15);
        if (VAR_8 != VAR_2) {
            return VAR_8;
        }
        FUNC_0(VAR_3, "set_io_mode: status after 0x%x", VAR_15);
        if (VAR_15 != VAR_13) {
            VAR_8 = VAR_1;
        }

        VAR_4->chip_drv->set_chip_write_protect(VAR_4, 1);
    }
    return VAR_8;
}

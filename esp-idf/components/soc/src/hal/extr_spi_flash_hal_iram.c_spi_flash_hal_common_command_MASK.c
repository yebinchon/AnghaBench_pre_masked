
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int miso_data; int mosi_data; int mosi_len; int miso_len; int command; } ;
typedef TYPE_1__ spi_flash_trans_t ;
struct TYPE_9__ {int (* poll_cmd_done ) (TYPE_2__*) ;int (* configure_host_io_mode ) (TYPE_2__*,int ,int ,int ,int ) ;} ;
typedef TYPE_2__ spi_flash_host_driver_t ;
typedef int spi_dev_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;

esp_err_t FUNC_9(spi_flash_host_driver_t *VAR_2, spi_flash_trans_t *VAR_3)
{
    VAR_2->configure_host_io_mode(VAR_2, VAR_3->command, 0, 0, VAR_1);

    spi_dev_t *VAR_4 = FUNC_0(VAR_2);

    if (VAR_3->miso_len == 0) {
        FUNC_2(VAR_4, 0);
    }

    FUNC_3(VAR_4, VAR_3->miso_len);
    FUNC_4(VAR_4, VAR_3->mosi_len);

    FUNC_6(VAR_4, VAR_3->mosi_data);

    FUNC_5(VAR_4);
    VAR_2->poll_cmd_done(VAR_2);
    FUNC_1(VAR_4, VAR_3->miso_data, 8);
    return VAR_0;
}

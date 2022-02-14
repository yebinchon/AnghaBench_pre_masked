
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int quadwp_io_num; int quadhd_io_num; int sclk_io_num; int miso_io_num; int mosi_io_num; } ;
typedef TYPE_1__ spi_bus_config_t ;
struct TYPE_11__ {int size; } ;
typedef TYPE_2__ esp_flash_t ;
struct TYPE_12__ {int cs_io_num; int speed; int io_mode; int cs_id; int host_id; } ;
typedef TYPE_3__ esp_flash_spi_device_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__**,TYPE_3__ const*) ;
 int FUNC_7 (int ,TYPE_1__ const*,int) ;

__attribute__((used)) static esp_flash_t* FUNC_8(void)
{
    const spi_bus_config_t VAR_9 = {
        .mosi_io_num = VAR_8,
        .miso_io_num = VAR_7,
        .sclk_io_num = VAR_5,
        .quadwp_io_num = -1,
        .quadhd_io_num = -1,
    };

    const esp_flash_spi_device_config_t VAR_10 = {
        .host_id = VAR_4,
        .cs_id = 0,
        .cs_io_num = VAR_6,
        .io_mode = VAR_2,
        .speed = VAR_0
    };

    FUNC_2(VAR_3, "Initializing external SPI Flash");
    FUNC_2(VAR_3, "Pin assignments:");
    FUNC_2(VAR_3, "MOSI: %2d   MISO: %2d   SCLK: %2d   CS: %2d",
        VAR_9.mosi_io_num, VAR_9.miso_io_num,
        VAR_9.sclk_io_num, VAR_10.cs_io_num
    );


    FUNC_0(FUNC_7(VAR_4, &VAR_9, 1));


    esp_flash_t* VAR_11;
    FUNC_0(FUNC_6(&VAR_11, &VAR_10));


    esp_err_t VAR_12 = FUNC_4(VAR_11);
    if (VAR_12 != VAR_1) {
        FUNC_1(VAR_3, "Failed to initialize external Flash: %s (0x%x)", FUNC_3(VAR_12), VAR_12);
        return ((void*)0);
    }


    uint32_t VAR_13;
    FUNC_0(FUNC_5(VAR_11, &VAR_13));
    FUNC_2(VAR_3, "Initialized external Flash, size=%d KB, ID=0x%x", VAR_11->size / 1024, VAR_13);

    return VAR_11;
}

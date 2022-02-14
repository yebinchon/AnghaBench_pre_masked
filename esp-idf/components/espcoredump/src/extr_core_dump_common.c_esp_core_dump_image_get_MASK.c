
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int spi_flash_mmap_handle_t ;
struct TYPE_4__ {int size; size_t address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef scalar_t__ esp_err_t ;
typedef scalar_t__ core_dump_crc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int const*,size_t) ;
 TYPE_1__* FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int ,size_t,int ,void const**,int *) ;
 int FUNC_4 (int ) ;

esp_err_t FUNC_5(size_t* VAR_7, size_t *VAR_8)
{
    esp_err_t VAR_9;
    const void *VAR_10;
    spi_flash_mmap_handle_t VAR_11;

    if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    const esp_partition_t *VAR_12 = FUNC_2(VAR_4, VAR_3, ((void*)0));
    if (!VAR_12) {
        FUNC_0(VAR_6, "No core dump partition found!");
        return VAR_1;
    }
    if (VAR_12->size < sizeof(uint32_t)) {
        FUNC_0(VAR_6, "Too small core dump partition!");
        return VAR_1;
    }

    VAR_9 = FUNC_3(VAR_12, 0, sizeof(uint32_t),
                             VAR_5, &VAR_10, &VAR_11);
    if (VAR_9 != VAR_2) {
        FUNC_0(VAR_6, "Failed to mmap core dump data (%d)!", VAR_9);
        return VAR_9;
    }
    uint32_t *VAR_13 = (uint32_t *)VAR_10;
    *VAR_8 = *VAR_13;
    FUNC_4(VAR_11);


    VAR_9 = FUNC_3(VAR_12, 0, *VAR_8,
                             VAR_5, &VAR_10, &VAR_11);
    if (VAR_9 != VAR_2) {
        FUNC_0(VAR_6, "Failed to mmap core dump data (%d)!", VAR_9);
        return VAR_9;
    }
    uint32_t *VAR_14 = (uint32_t *)(((uint8_t *)VAR_10) + *VAR_8);
    VAR_14--;

    core_dump_crc_t VAR_15 = FUNC_1(0, (uint8_t const *)VAR_10, *VAR_8 - sizeof(core_dump_crc_t));
    if (*VAR_14 != VAR_15) {
        FUNC_0(VAR_6, "Core dump data CRC check failed: 0x%x -> 0x%x!", *VAR_14, VAR_15);
        FUNC_4(VAR_11);
        return VAR_1;
    }

    FUNC_4(VAR_11);

    *VAR_7 = VAR_12->address;
    return VAR_2;
}

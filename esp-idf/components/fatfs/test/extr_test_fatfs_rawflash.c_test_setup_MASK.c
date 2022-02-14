
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int spi_flash_mmap_handle_t ;
struct TYPE_8__ {int format_if_mount_failed; size_t max_files; } ;
typedef TYPE_1__ esp_vfs_fat_sdmmc_mount_config_t ;
struct TYPE_9__ {int size; } ;
typedef TYPE_2__ esp_partition_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__ const*,int ,int) ;
 int FUNC_4 (TYPE_2__ const*,int ,int,int ,void const**,int *) ;
 int FUNC_5 (TYPE_2__ const*,int,char const*,scalar_t__) ;
 int FUNC_6 (char*,char*,TYPE_1__*) ;
 TYPE_2__* FUNC_7 () ;
 scalar_t__ FUNC_8 (char const*,void const*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(size_t VAR_2)
{
    extern const char VAR_3[] asm("_binary_fatfs_img_start");
    extern const char VAR_4[] asm("_binary_fatfs_img_end");
    esp_vfs_fat_sdmmc_mount_config_t VAR_5 = {
        .format_if_mount_failed = 0,
        .max_files = VAR_2
    };
    const esp_partition_t* VAR_6 = FUNC_7();

    FUNC_1(VAR_6->size == (VAR_4 - VAR_3 - 1));

    spi_flash_mmap_handle_t VAR_7;
    const void* VAR_8;
    FUNC_2(FUNC_4(VAR_6, 0, VAR_6->size, VAR_0, &VAR_8, &VAR_7));
    bool VAR_9 = FUNC_8(VAR_3, VAR_8, VAR_6->size) == 0;
    FUNC_10(VAR_7);

    if (!VAR_9) {
        FUNC_9("Copying fatfs.img into test partition...\n");
        FUNC_3(VAR_6, 0, VAR_6->size);
        for (int VAR_10 = 0; VAR_10 < VAR_6->size; VAR_10+= VAR_1) {
            FUNC_0( FUNC_5(VAR_6, VAR_10, VAR_3 + VAR_10, VAR_1) );
        }
    }

    FUNC_2(FUNC_6("/spiflash", "flash_test", &VAR_5));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int spi_flash_mmap_handle_t ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_select_entry_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int ,int ,int ,void const**,int *) ;
 int FUNC_3 (int *,void const*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static const esp_partition_t *FUNC_5(esp_ota_select_entry_t *VAR_6)
{
    const esp_partition_t *VAR_7 = FUNC_1(VAR_2, VAR_1, ((void*)0));

    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_5, "not found otadata");
        return ((void*)0);
    }

    spi_flash_mmap_handle_t VAR_8;
    const void *VAR_9 = ((void*)0);
    esp_err_t VAR_10 = FUNC_2(VAR_7, 0, VAR_7->size, VAR_3, &VAR_9, &VAR_8);
    if (VAR_10 != VAR_0) {
        FUNC_0(VAR_5, "mmap otadata filed. Err=0x%8x", VAR_10);
        return ((void*)0);
    } else {
        FUNC_3(&VAR_6[0], VAR_9, sizeof(esp_ota_select_entry_t));
        FUNC_3(&VAR_6[1], VAR_9 + VAR_4, sizeof(esp_ota_select_entry_t));
        FUNC_4(VAR_8);
    }
    return VAR_7;
}

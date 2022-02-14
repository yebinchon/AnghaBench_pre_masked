
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spi_flash_mmap_handle_t ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (TYPE_1__ const*,int ,int ,int ,void const**,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(esp_ota_handle_t VAR_1, const esp_partition_t *VAR_2)
{
    const void *VAR_3 = ((void*)0);
    spi_flash_mmap_handle_t VAR_4;
    FUNC_0(FUNC_2(VAR_2, 0, VAR_2->size, VAR_0, &VAR_3, &VAR_4));
    FUNC_0(FUNC_1(VAR_1, (const void *)VAR_3, VAR_2->size));
    FUNC_3(VAR_4);
}

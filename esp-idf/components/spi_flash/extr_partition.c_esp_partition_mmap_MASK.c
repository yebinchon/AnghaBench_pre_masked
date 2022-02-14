
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spi_flash_mmap_memory_t ;
typedef int spi_flash_mmap_handle_t ;
typedef size_t ptrdiff_t ;
struct TYPE_3__ {size_t size; scalar_t__ flash_chip; size_t address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (size_t,size_t,int ,void const**,int *) ;

esp_err_t FUNC_2(const esp_partition_t* VAR_5, size_t VAR_6, size_t VAR_7,
                             spi_flash_mmap_memory_t VAR_8,
                             const void** VAR_9, spi_flash_mmap_handle_t* VAR_10)
{
    FUNC_0(VAR_5 != ((void*)0));
    if (VAR_6 > VAR_5->size) {
        return VAR_0;
    }
    if (VAR_6 + VAR_7 > VAR_5->size) {
        return VAR_1;
    }
    if (VAR_5->flash_chip != VAR_4) {
        return VAR_2;
    }
    size_t VAR_11 = VAR_5->address + VAR_6;

    size_t VAR_12 = VAR_11 & 0xffff;
    size_t VAR_13 = VAR_11 & 0xffff0000;
    esp_err_t VAR_14 = FUNC_1(VAR_13, VAR_7+VAR_12, VAR_8, VAR_9, VAR_10);

    if (VAR_14 == VAR_3) {
        *VAR_9 = (void*) (((ptrdiff_t) *VAR_9) + VAR_12);
    }
    return VAR_14;
}

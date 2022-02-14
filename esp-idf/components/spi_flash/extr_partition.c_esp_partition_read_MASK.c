
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spi_flash_mmap_handle_t ;
struct TYPE_4__ {size_t size; scalar_t__ flash_chip; scalar_t__ address; int encrypted; } ;
typedef TYPE_1__ esp_partition_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,void*,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,size_t,size_t,int ,void const**,int *) ;
 int FUNC_3 (void*,void const*,size_t) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,void*,size_t) ;

esp_err_t FUNC_6(const esp_partition_t* VAR_6,
        size_t VAR_7, void* VAR_8, size_t VAR_9)
{
    FUNC_0(VAR_6 != ((void*)0));
    if (VAR_7 > VAR_6->size) {
        return VAR_0;
    }
    if (VAR_7 + VAR_9 > VAR_6->size) {
        return VAR_1;
    }

    if (!VAR_6->encrypted) {

        return FUNC_1(VAR_6->flash_chip, VAR_8, VAR_6->address + VAR_7, VAR_9);



    } else {
        return VAR_2;

    }
}

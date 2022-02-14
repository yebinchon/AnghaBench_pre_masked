
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; size_t address; scalar_t__ flash_chip; int encrypted; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,void const*,size_t,size_t) ;
 int FUNC_2 (size_t,void const*,size_t) ;
 int FUNC_3 (size_t,void const*,size_t) ;

esp_err_t FUNC_4(const esp_partition_t* VAR_4,
                             size_t VAR_5, const void* VAR_6, size_t VAR_7)
{
    FUNC_0(VAR_4 != ((void*)0));
    if (VAR_5 > VAR_4->size) {
        return VAR_0;
    }
    if (VAR_5 + VAR_7 > VAR_4->size) {
        return VAR_1;
    }
    VAR_5 = VAR_4->address + VAR_5;
    if (!VAR_4->encrypted) {

        return FUNC_1(VAR_4->flash_chip, VAR_6, VAR_5, VAR_7);



    } else {






        return VAR_2;

    }
}

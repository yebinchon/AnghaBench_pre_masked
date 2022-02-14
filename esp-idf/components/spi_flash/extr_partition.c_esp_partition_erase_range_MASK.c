
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; scalar_t__ address; int flash_chip; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,size_t) ;
 int FUNC_2 (scalar_t__,size_t) ;

esp_err_t FUNC_3(const esp_partition_t* VAR_3,
                                    size_t VAR_4, size_t VAR_5)
{
    FUNC_0(VAR_3 != ((void*)0));
    if (VAR_4 > VAR_3->size) {
        return VAR_0;
    }
    if (VAR_4 + VAR_5 > VAR_3->size) {
        return VAR_1;
    }
    if (VAR_5 % VAR_2 != 0) {
        return VAR_1;
    }
    if (VAR_4 % VAR_2 != 0) {
        return VAR_0;
    }

    return FUNC_1(VAR_3->flash_chip, VAR_3->address + VAR_4, VAR_5);



}

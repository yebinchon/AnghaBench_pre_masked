
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int extrafield_size; int const* extrafield; } ;
struct TYPE_4__ {TYPE_1__ file_info; } ;
typedef TYPE_2__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    mz_zip *VAR_5 = (mz_zip *)VAR_2;

    if (VAR_5 == ((void*)0) || FUNC_0(VAR_2) != VAR_0)
        return VAR_1;

    VAR_5->file_info.extrafield = VAR_3;
    VAR_5->file_info.extrafield_size = VAR_4;
    return VAR_0;
}

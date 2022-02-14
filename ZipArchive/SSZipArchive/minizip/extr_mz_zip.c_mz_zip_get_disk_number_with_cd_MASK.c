
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int disk_number_with_cd; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2, uint32_t *VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_2;
    if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
        return VAR_1;
    *VAR_3 = VAR_4->disk_number_with_cd;
    return VAR_0;
}

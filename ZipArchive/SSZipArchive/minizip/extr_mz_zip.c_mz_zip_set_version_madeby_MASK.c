
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int version_madeby; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2, uint16_t VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_2;
    if (VAR_4 == ((void*)0))
        return VAR_1;
    VAR_4->version_madeby = VAR_3;
    return VAR_0;
}

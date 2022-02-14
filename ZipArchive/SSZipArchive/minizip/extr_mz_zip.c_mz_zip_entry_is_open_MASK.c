
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_opened; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t FUNC_0(void *VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_3;
    if (VAR_4 == ((void*)0))
        return VAR_2;
    if (VAR_4->entry_opened == 0)
        return VAR_0;
    return VAR_1;
}

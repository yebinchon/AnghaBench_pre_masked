
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cd_current_pos; } ;
typedef TYPE_1__ mz_zip ;
typedef int int64_t ;


 int VAR_0 ;

int64_t FUNC_0(void *VAR_1)
{
    mz_zip *VAR_2 = (mz_zip *)VAR_1;

    if (VAR_2 == ((void*)0))
        return VAR_0;

    return VAR_2->cd_current_pos;
}

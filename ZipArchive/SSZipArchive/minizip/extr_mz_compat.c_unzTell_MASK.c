
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_2__ {int total_out; } ;
typedef TYPE_1__ mz_compat ;
typedef int int32_t ;


 int VAR_0 ;

int32_t FUNC_0(unzFile VAR_1)
{
    mz_compat *VAR_2 = (mz_compat *)VAR_1;
    if (VAR_2 == ((void*)0))
        return VAR_0;
    return (int32_t)VAR_2->total_out;
}

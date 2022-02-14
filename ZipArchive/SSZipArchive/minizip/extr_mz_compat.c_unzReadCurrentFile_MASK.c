
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int total_out; int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;

int FUNC_1(unzFile VAR_3, void *VAR_4, uint32_t VAR_5)
{
    mz_compat *VAR_6 = (mz_compat *)VAR_3;
    int32_t VAR_7 = VAR_1;
    if (VAR_6 == ((void*)0) || VAR_5 >= VAR_0)
        return VAR_2;
    VAR_7 = FUNC_0(VAR_6->handle, VAR_4, (int32_t)VAR_5);
    if (VAR_7 > 0)
        VAR_6->total_out += (uint32_t)VAR_7;
    return VAR_7;
}

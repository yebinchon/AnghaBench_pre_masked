
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zipFile ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,void const*,scalar_t__) ;

int FUNC_1(zipFile VAR_4, const void *VAR_5, uint32_t VAR_6)
{
    mz_compat *VAR_7 = (mz_compat *)VAR_4;
    int32_t VAR_8 = 0;
    if (VAR_7 == ((void*)0) || VAR_6 >= VAR_0)
        return VAR_3;
    VAR_8 = FUNC_0(VAR_7->handle, VAR_5, (int32_t)VAR_6);
    if ((VAR_8 < 0) || ((uint32_t)VAR_8 != VAR_6))
        return VAR_1;
    return VAR_2;
}

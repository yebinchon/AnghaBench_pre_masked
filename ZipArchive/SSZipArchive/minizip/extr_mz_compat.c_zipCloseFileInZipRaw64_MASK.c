
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zipFile ;
typedef int uint32_t ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(zipFile VAR_1, int64_t VAR_2, uint32_t VAR_3)
{
    mz_compat *VAR_4 = (mz_compat *)VAR_1;
    if (VAR_4 == ((void*)0))
        return VAR_0;
    return FUNC_0(VAR_4->handle, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zipFile ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ mz_compat ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(zipFile VAR_1)
{
    mz_compat *VAR_2 = (mz_compat *)VAR_1;
    if (VAR_2 == ((void*)0))
        return VAR_0;
    return FUNC_0(VAR_2->handle);
}

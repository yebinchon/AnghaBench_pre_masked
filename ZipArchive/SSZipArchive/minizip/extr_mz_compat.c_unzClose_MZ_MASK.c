
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(unzFile VAR_2)
{
    mz_compat *VAR_3 = (mz_compat *)VAR_2;
    int32_t VAR_4 = VAR_0;

    if (VAR_3 == ((void*)0))
        return VAR_1;

    VAR_4 = FUNC_0(VAR_3->handle);
    FUNC_1(&VAR_3->handle);

    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(unzFile VAR_1, int64_t VAR_2)
{
    mz_compat *VAR_3 = (mz_compat *)VAR_1;
    if (VAR_3 == ((void*)0))
        return VAR_0;
    return (int)FUNC_0(VAR_3->handle, VAR_2);
}

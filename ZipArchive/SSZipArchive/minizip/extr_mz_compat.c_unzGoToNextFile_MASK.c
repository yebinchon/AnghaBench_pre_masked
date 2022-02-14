
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_2__ {int entry_index; int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(unzFile VAR_3)
{
    mz_compat *VAR_4 = (mz_compat *)VAR_3;
    int32_t VAR_5 = VAR_1;
    if (VAR_4 == ((void*)0))
        return VAR_2;
    VAR_5 = FUNC_0(VAR_4->handle);
    if (VAR_5 != VAR_0)
        VAR_4->entry_index += 1;
    return VAR_5;
}

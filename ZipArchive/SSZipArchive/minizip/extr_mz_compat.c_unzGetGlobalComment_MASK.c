
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const**) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;

int FUNC_2(unzFile VAR_2, char *VAR_3, uint16_t VAR_4)
{
    mz_compat *VAR_5 = (mz_compat *)VAR_2;
    const char *VAR_6 = ((void*)0);
    int32_t VAR_7 = VAR_0;

    if (VAR_3 == ((void*)0) || VAR_4 == 0)
        return VAR_1;
    VAR_7 = FUNC_0(VAR_5->handle, &VAR_6);
    if (VAR_7 == VAR_0)
    {
        FUNC_1(VAR_3, VAR_6, VAR_4 - 1);
        VAR_3[VAR_4 - 1] = 0;
    }
    return VAR_7;
}

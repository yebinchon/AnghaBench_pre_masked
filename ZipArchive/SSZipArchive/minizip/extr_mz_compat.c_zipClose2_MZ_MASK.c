
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zipFile ;
typedef int uint16_t ;
struct TYPE_2__ {int * handle; } ;
typedef TYPE_1__ mz_compat ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(zipFile VAR_2, const char *VAR_3, uint16_t VAR_4)
{
    mz_compat *VAR_5 = (mz_compat *)VAR_2;
    int32_t VAR_6 = VAR_0;

    if (VAR_5 == ((void*)0))
        return VAR_1;
    if (VAR_5->handle == ((void*)0))
        return VAR_6;

    if (VAR_3 != ((void*)0))
        FUNC_2(VAR_5->handle, VAR_3);

    FUNC_3(VAR_5->handle, VAR_4);
    VAR_6 = FUNC_0(VAR_5->handle);
    FUNC_1(&VAR_5->handle);

    return VAR_6;
}

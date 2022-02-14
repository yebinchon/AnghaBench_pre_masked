
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zipFile ;
typedef int uint16_t ;
struct TYPE_3__ {int * stream; int * handle; } ;
typedef TYPE_1__ mz_compat ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (scalar_t__,char const*,int ) ;

int FUNC_4(zipFile VAR_1, const char *VAR_2, uint16_t VAR_3)
{
    mz_compat *VAR_4 = (mz_compat *)VAR_1;
    int32_t VAR_5 = VAR_0;

    if (VAR_4->handle != ((void*)0))
        VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);

    if (VAR_4->stream != ((void*)0))
    {
        FUNC_1(VAR_4->stream);
        FUNC_2(&VAR_4->stream);
    }

    FUNC_0(VAR_4);

    return VAR_5;
}

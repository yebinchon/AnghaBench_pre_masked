
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * zipFile ;
struct TYPE_2__ {void* stream; void* handle; } ;
typedef TYPE_1__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void*,char const**) ;
 scalar_t__ FUNC_4 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

zipFile FUNC_6(void *VAR_1, int VAR_2, const char **VAR_3)
{
    mz_compat *VAR_4 = ((void*)0);
    int32_t VAR_5 = VAR_0;
    int32_t VAR_6 = FUNC_5(VAR_2);
    void *VAR_7 = ((void*)0);

    FUNC_1(&VAR_7);
    VAR_5 = FUNC_4(VAR_7, VAR_1, VAR_6);

    if (VAR_5 != VAR_0)
    {
        FUNC_2(&VAR_7);
        return ((void*)0);
    }

    if (VAR_3 != ((void*)0))
        FUNC_3(VAR_7, VAR_3);

    VAR_4 = (mz_compat *)FUNC_0(sizeof(mz_compat));
    if (VAR_4 != ((void*)0))
    {
        VAR_4->handle = VAR_7;
        VAR_4->stream = VAR_1;
    }
    else
    {
        FUNC_2(&VAR_7);
    }

    return (zipFile)VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * unzFile ;
struct TYPE_2__ {void* handle; void* stream; } ;
typedef TYPE_1__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,void*,int ) ;

unzFile FUNC_5(void *VAR_2)
{
    mz_compat *VAR_3 = ((void*)0);
    int32_t VAR_4 = VAR_0;
    void *VAR_5 = ((void*)0);

    FUNC_1(&VAR_5);
    VAR_4 = FUNC_4(VAR_5, VAR_2, VAR_1);

    if (VAR_4 != VAR_0)
    {
        FUNC_2(&VAR_5);
        return ((void*)0);
    }

    VAR_3 = (mz_compat *)FUNC_0(sizeof(mz_compat));
    if (VAR_3 != ((void*)0))
    {
        VAR_3->handle = VAR_5;
        VAR_3->stream = VAR_2;

        FUNC_3(VAR_3->handle);
    }
    else
    {
        FUNC_2(&VAR_5);
    }

    return (unzFile)VAR_3;
}

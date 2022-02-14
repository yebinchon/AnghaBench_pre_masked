
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* path_disk; struct TYPE_3__* path_cd; } ;
typedef TYPE_1__ mz_stream_split ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(void **VAR_0)
{
    mz_stream_split *VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0))
        return;
    VAR_1 = (mz_stream_split *)*VAR_0;
    if (VAR_1 != ((void*)0))
    {
        if (VAR_1->path_cd)
            FUNC_0(VAR_1->path_cd);
        if (VAR_1->path_disk)
            FUNC_0(VAR_1->path_disk);

        FUNC_0(VAR_1);
    }
    *VAR_0 = ((void*)0);
}

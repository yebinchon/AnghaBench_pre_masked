
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; struct TYPE_3__* buffer; } ;
typedef TYPE_1__ mz_stream_mem ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(void **VAR_1)
{
    mz_stream_mem *VAR_2 = ((void*)0);
    if (VAR_1 == ((void*)0))
        return;
    VAR_2 = (mz_stream_mem *)*VAR_1;
    if (VAR_2 != ((void*)0))
    {
        if ((VAR_2->mode & VAR_0) && (VAR_2->buffer != ((void*)0)))
            FUNC_0(VAR_2->buffer);
        FUNC_0(VAR_2);
    }
    *VAR_1 = ((void*)0);
}

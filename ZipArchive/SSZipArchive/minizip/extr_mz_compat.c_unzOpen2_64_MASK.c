
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zlib_filefunc64_def ;
typedef int * unzFile ;
typedef int mz_stream_vtbl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (void**,int *) ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void*,void const*,int ) ;
 int * FUNC_3 (void**) ;
 int * FUNC_4 (void*) ;

unzFile FUNC_5(const void *VAR_2, zlib_filefunc64_def *VAR_3)
{
    unzFile VAR_4 = ((void*)0);
    void *VAR_5 = ((void*)0);

    if (VAR_3)
    {
        if (FUNC_0(&VAR_5, (mz_stream_vtbl *)*VAR_3) == ((void*)0))
            return ((void*)0);
    }
    else
    {
        if (FUNC_3(&VAR_5) == ((void*)0))
            return ((void*)0);
    }

    if (FUNC_2(VAR_5, VAR_2, VAR_1) != VAR_0)
    {
        FUNC_1(&VAR_5);
        return ((void*)0);
    }

    VAR_4 = FUNC_4(VAR_5);
    if (VAR_4 == ((void*)0))
    {
        FUNC_1(&VAR_5);
        return ((void*)0);
    }
    return VAR_4;
}

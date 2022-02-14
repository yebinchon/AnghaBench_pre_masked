
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zlib_filefunc64_def ;
typedef int * zipFile ;
typedef int mz_stream_vtbl ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (void**,int *) ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void*,void const*,int ) ;
 int * FUNC_3 (void**) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (void*,int,char const**) ;

zipFile FUNC_6(const void *VAR_1, int VAR_2, const char **VAR_3,
    zlib_filefunc64_def *VAR_4)
{
    zipFile VAR_5 = ((void*)0);
    int32_t VAR_6 = FUNC_4(VAR_2);
    void *VAR_7 = ((void*)0);

    if (VAR_4)
    {
        if (FUNC_0(&VAR_7, (mz_stream_vtbl *)*VAR_4) == ((void*)0))
            return ((void*)0);
    }
    else
    {
        if (FUNC_3(&VAR_7) == ((void*)0))
            return ((void*)0);
    }

    if (FUNC_2(VAR_7, VAR_1, VAR_6) != VAR_0)
    {
        FUNC_1(&VAR_7);
        return ((void*)0);
    }

    VAR_5 = FUNC_5(VAR_7, VAR_2, VAR_3);

    if (VAR_5 == ((void*)0))
    {
        FUNC_1(&VAR_7);
        return ((void*)0);
    }

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mem_stream; int * file_stream; int * buffered_stream; int * split_stream; int * zip_handle; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;

int32_t FUNC_8(void *VAR_1)
{
    mz_zip_reader *VAR_2 = (mz_zip_reader *)VAR_1;
    int32_t VAR_3 = VAR_0;

    if (VAR_2->zip_handle != ((void*)0))
    {
        VAR_3 = FUNC_6(VAR_2->zip_handle);
        FUNC_7(&VAR_2->zip_handle);
    }

    if (VAR_2->split_stream != ((void*)0))
    {
        FUNC_4(VAR_2->split_stream);
        FUNC_5(&VAR_2->split_stream);
    }

    if (VAR_2->buffered_stream != ((void*)0))
        FUNC_0(&VAR_2->buffered_stream);

    if (VAR_2->file_stream != ((void*)0))
        FUNC_3(&VAR_2->file_stream);

    if (VAR_2->mem_stream != ((void*)0))
    {
        FUNC_1(VAR_2->mem_stream);
        FUNC_2(&VAR_2->mem_stream);
    }

    return VAR_3;
}

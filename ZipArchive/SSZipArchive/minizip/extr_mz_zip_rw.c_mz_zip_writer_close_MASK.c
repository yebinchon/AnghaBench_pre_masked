
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mem_stream; int * file_stream; int * buffered_stream; int * split_stream; int * zip_handle; scalar_t__ zip_cd; scalar_t__ comment; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;

int32_t FUNC_11(void *VAR_2)
{
    mz_zip_writer *VAR_3 = (mz_zip_writer *)VAR_2;
    int32_t VAR_4 = VAR_0;


    if (VAR_3->zip_handle != ((void*)0))
    {
        FUNC_9(VAR_3->zip_handle, VAR_1);
        if (VAR_3->comment)
            FUNC_8(VAR_3->zip_handle, VAR_3->comment);
        if (VAR_3->zip_cd)
            FUNC_10(VAR_3);

        VAR_4 = FUNC_6(VAR_3->zip_handle);
        FUNC_7(&VAR_3->zip_handle);
    }

    if (VAR_3->split_stream != ((void*)0))
    {
        FUNC_4(VAR_3->split_stream);
        FUNC_5(&VAR_3->split_stream);
    }

    if (VAR_3->buffered_stream != ((void*)0))
        FUNC_0(&VAR_3->buffered_stream);

    if (VAR_3->file_stream != ((void*)0))
        FUNC_3(&VAR_3->file_stream);

    if (VAR_3->mem_stream != ((void*)0))
    {
        FUNC_1(VAR_3->mem_stream);
        FUNC_2(&VAR_3->mem_stream);
    }

    return VAR_4;
}

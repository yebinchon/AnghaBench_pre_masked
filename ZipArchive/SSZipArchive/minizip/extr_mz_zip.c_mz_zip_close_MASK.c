
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int open_mode; int * cd_stream; int * stream; int * comment; int * local_file_info_stream; int * file_info_stream; int * cd_mem_stream; } ;
typedef TYPE_1__ mz_zip ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (void*) ;

int32_t FUNC_9(void *VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_3;
    int32_t VAR_5 = VAR_0;

    if (VAR_4 == ((void*)0))
        return VAR_2;

    FUNC_7("Zip - Close\n");

    if (FUNC_6(VAR_3) == VAR_0)
        VAR_5 = FUNC_5(VAR_3);

    if ((VAR_5 == VAR_0) && (VAR_4->open_mode & VAR_1))
        VAR_5 = FUNC_8(VAR_3);

    if (VAR_4->cd_mem_stream != ((void*)0))
    {
        FUNC_1(VAR_4->cd_mem_stream);
        FUNC_2(&VAR_4->cd_mem_stream);
    }

    if (VAR_4->file_info_stream != ((void*)0))
    {
        FUNC_3(VAR_4->file_info_stream);
        FUNC_4(&VAR_4->file_info_stream);
    }
    if (VAR_4->local_file_info_stream != ((void*)0))
    {
        FUNC_3(VAR_4->local_file_info_stream);
        FUNC_4(&VAR_4->local_file_info_stream);
    }

    if (VAR_4->comment)
    {
        FUNC_0(VAR_4->comment);
        VAR_4->comment = ((void*)0);
    }

    VAR_4->stream = ((void*)0);
    VAR_4->cd_stream = ((void*)0);

    return VAR_5;
}

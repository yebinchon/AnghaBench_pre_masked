
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ progress_cb_interval_ms; int * file_info; int progress_userdata; int (* progress_cb ) (void*,int ,int *,scalar_t__) ;} ;
typedef TYPE_1__ mz_zip_reader ;
typedef int mz_stream_write_cb ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*,int ,int *,scalar_t__) ;
 int FUNC_4 (void*,int ,int *,scalar_t__) ;
 int FUNC_5 (void*,int ,int *,scalar_t__) ;

int32_t FUNC_6(void *VAR_3, void *VAR_4, mz_stream_write_cb VAR_5)
{
    mz_zip_reader *VAR_6 = (mz_zip_reader *)VAR_3;
    uint64_t VAR_7 = 0;
    uint64_t VAR_8 = 0;
    int64_t VAR_9 = 0;
    int64_t VAR_10 = 0;
    int32_t VAR_11 = VAR_1;
    int32_t VAR_12 = 0;

    if (FUNC_2(VAR_6) != VAR_1)
        return VAR_2;
    if (VAR_6->file_info == ((void*)0))
        return VAR_2;


    if (VAR_6->progress_cb != ((void*)0))
        VAR_6->progress_cb(VAR_3, VAR_6->progress_userdata, VAR_6->file_info, VAR_9);


    while (VAR_11 == VAR_1)
    {
        VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_5);
        if (VAR_12 == VAR_0)
            break;
        if (VAR_12 > 0)
            VAR_9 += VAR_12;
        if (VAR_12 < 0)
            VAR_11 = VAR_12;


        VAR_7 = FUNC_0();
        if ((VAR_7 - VAR_8) > VAR_6->progress_cb_interval_ms)
        {
            if (VAR_6->progress_cb != ((void*)0))
                VAR_6->progress_cb(VAR_3, VAR_6->progress_userdata, VAR_6->file_info, VAR_9);

            VAR_10 = VAR_9;
            VAR_8 = VAR_7;
        }
    }


    if (VAR_6->progress_cb != ((void*)0) && VAR_10 != VAR_9)
        VAR_6->progress_cb(VAR_3, VAR_6->progress_userdata, VAR_6->file_info, VAR_9);

    return VAR_11;
}

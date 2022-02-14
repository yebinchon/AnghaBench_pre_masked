
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ progress_cb_interval_ms; int file_info; int progress_userdata; int (* progress_cb ) (void*,int ,int *,scalar_t__) ;} ;
typedef TYPE_1__ mz_zip_writer ;
typedef int mz_stream_read_cb ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,int ,int *,scalar_t__) ;
 int FUNC_3 (void*,int ,int *,scalar_t__) ;
 int FUNC_4 (void*,int ,int *,scalar_t__) ;

int32_t FUNC_5(void *VAR_2, void *VAR_3, mz_stream_read_cb VAR_4)
{
    mz_zip_writer *VAR_5 = (mz_zip_writer *)VAR_2;
    uint64_t VAR_6 = 0;
    uint64_t VAR_7 = 0;
    int64_t VAR_8 = 0;
    int64_t VAR_9 = 0;
    int32_t VAR_10 = VAR_1;
    int32_t VAR_11 = 0;


    if (VAR_5->progress_cb != ((void*)0))
        VAR_5->progress_cb(VAR_2, VAR_5->progress_userdata, &VAR_5->file_info, VAR_8);


    while (VAR_10 == VAR_1)
    {
        VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4);
        if (VAR_11 == VAR_0)
            break;
        if (VAR_11 > 0)
            VAR_8 += VAR_11;
        if (VAR_11 < 0)
            VAR_10 = VAR_11;


        VAR_6 = FUNC_0();
        if ((VAR_6 - VAR_7) > VAR_5->progress_cb_interval_ms)
        {
            if (VAR_5->progress_cb != ((void*)0))
                VAR_5->progress_cb(VAR_2, VAR_5->progress_userdata, &VAR_5->file_info, VAR_8);

            VAR_9 = VAR_8;
            VAR_7 = VAR_6;
        }
    }


    if (VAR_5->progress_cb != ((void*)0) && VAR_9 != VAR_8)
        VAR_5->progress_cb(VAR_2, VAR_5->progress_userdata, &VAR_5->file_info, VAR_8);

    return VAR_10;
}

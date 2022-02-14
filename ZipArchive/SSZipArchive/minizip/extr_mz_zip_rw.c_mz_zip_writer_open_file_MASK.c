
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ (* overwrite_cb ) (void*,int ,char const*) ;int split_stream; int buffered_stream; int file_stream; int overwrite_userdata; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int directory ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char const*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (void*,int ,scalar_t__) ;
 int * FUNC_11 (char const*,char) ;
 int FUNC_12 (char*,char const*,int) ;
 int * FUNC_13 (char const*,char) ;
 scalar_t__ FUNC_14 (void*,int ,char const*) ;

int32_t FUNC_15(void *VAR_6, const char *VAR_7, int64_t VAR_8, uint8_t VAR_9)
{
    mz_zip_writer *VAR_10 = (mz_zip_writer *)VAR_6;
    int32_t VAR_11 = VAR_4;
    int32_t VAR_12 = VAR_1;
    int32_t VAR_13 = 0;
    char VAR_14[320];

    FUNC_9(VAR_6);

    if (FUNC_1(VAR_7) != VAR_1)
    {

        VAR_11 |= VAR_3;


        if (FUNC_11(VAR_7, '/') != ((void*)0) || FUNC_13(VAR_7, '\\') != ((void*)0))
        {
            FUNC_12(VAR_14, VAR_7, sizeof(VAR_14));
            FUNC_2(VAR_14);
            if (FUNC_1(VAR_14) != VAR_1)
                FUNC_0(VAR_14);
        }
    }
    else if (VAR_9)
    {
        VAR_11 |= VAR_2;
    }
    else
    {
        if (VAR_10->overwrite_cb != ((void*)0))
            VAR_13 = VAR_10->overwrite_cb(VAR_6, VAR_10->overwrite_userdata, VAR_7);

        if (VAR_13 == VAR_0)
            return VAR_12;

        if (VAR_13 == VAR_1)
            VAR_11 |= VAR_3;
        else
            VAR_11 |= VAR_2;
    }

    FUNC_5(&VAR_10->file_stream);
    FUNC_3(&VAR_10->buffered_stream);
    FUNC_7(&VAR_10->split_stream);

    FUNC_6(VAR_10->buffered_stream, VAR_10->file_stream);
    FUNC_6(VAR_10->split_stream, VAR_10->buffered_stream);

    FUNC_8(VAR_10->split_stream, VAR_5, VAR_8);

    VAR_12 = FUNC_4(VAR_10->split_stream, VAR_7, VAR_11);
    if (VAR_12 == VAR_1)
        VAR_12 = FUNC_10(VAR_6, VAR_10->split_stream, VAR_11);

    return VAR_12;
}

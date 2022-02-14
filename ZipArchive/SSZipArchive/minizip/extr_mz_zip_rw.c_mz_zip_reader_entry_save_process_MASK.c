
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; int zip_handle; int * file_info; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ (* mz_stream_write_cb ) (void*,int ,scalar_t__) ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

int32_t FUNC_5(void *VAR_4, void *VAR_5, mz_stream_write_cb VAR_6)
{
    mz_zip_reader *VAR_7 = (mz_zip_reader *)VAR_4;
    int32_t VAR_8 = VAR_1;
    int32_t VAR_9 = 0;
    int32_t VAR_10 = 0;


    if (FUNC_4(VAR_7) != VAR_1)
        return VAR_2;
    if (VAR_7->file_info == ((void*)0))
        return VAR_2;
    if (VAR_6 == ((void*)0))
        return VAR_2;


    if (FUNC_0(VAR_7->zip_handle) != VAR_1)
        VAR_8 = FUNC_2(VAR_4);

    if (VAR_8 != VAR_1)
        return VAR_8;


    VAR_9 = FUNC_3(VAR_4, VAR_7->buffer, sizeof(VAR_7->buffer));

    if (VAR_9 == 0)
    {

        VAR_8 = FUNC_1(VAR_4);
        if (VAR_8 != VAR_1)
            return VAR_8;

        return VAR_0;
    }

    if (VAR_9 > 0)
    {

        VAR_10 = VAR_6(VAR_5, VAR_7->buffer, VAR_9);
        if (VAR_10 != VAR_9)
            return VAR_3;
    }

    return VAR_9;
}

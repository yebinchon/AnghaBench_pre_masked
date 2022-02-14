
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; int zip_handle; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef scalar_t__ (* mz_stream_read_cb ) (void*,int ,int) ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int32_t FUNC_3(void *VAR_4, void *VAR_5, mz_stream_read_cb VAR_6)
{
    mz_zip_writer *VAR_7 = (mz_zip_writer *)VAR_4;
    int32_t VAR_8 = 0;
    int32_t VAR_9 = 0;
    int32_t VAR_10 = VAR_1;

    if (FUNC_2(VAR_7) != VAR_1)
        return VAR_2;

    if (FUNC_0(VAR_7->zip_handle) != VAR_1)
        return VAR_2;
    if (VAR_6 == ((void*)0))
        return VAR_2;

    VAR_8 = VAR_6(VAR_5, VAR_7->buffer, sizeof(VAR_7->buffer));
    if (VAR_8 == 0)
        return VAR_0;
    if (VAR_8 < 0)
    {
        VAR_10 = VAR_8;
        return VAR_10;
    }

    VAR_9 = FUNC_1(VAR_4, VAR_7->buffer, VAR_8);
    if (VAR_9 != VAR_8)
        return VAR_3;

    return VAR_9;
}

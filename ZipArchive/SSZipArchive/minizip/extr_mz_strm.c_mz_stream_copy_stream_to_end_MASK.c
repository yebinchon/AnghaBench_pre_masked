
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ (* mz_stream_write_cb ) (void*,int *,scalar_t__) ;
typedef scalar_t__ (* mz_stream_read_cb ) (void*,int *,int) ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*,int *,int) ;
 scalar_t__ FUNC_1 (void*,int *,scalar_t__) ;

int32_t FUNC_2(void *VAR_2, mz_stream_write_cb VAR_3, void *VAR_4,
    mz_stream_read_cb VAR_5)
{
    uint8_t VAR_6[16384];
    int32_t VAR_7 = 0;
    int32_t VAR_8 = 0;

    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_1;
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_0;

    VAR_7 = VAR_5(VAR_4, VAR_6, sizeof(VAR_6));
    while (VAR_7 > 0)
    {
        VAR_8 = VAR_3(VAR_2, VAR_6, VAR_7);
        if (VAR_8 != VAR_7)
            return VAR_1;
        VAR_7 = VAR_5(VAR_4, VAR_6, sizeof(VAR_6));
    }

    if (VAR_7 < 0)
        return VAR_1;

    return VAR_0;
}

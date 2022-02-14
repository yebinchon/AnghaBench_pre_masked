
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ (* mz_stream_write_cb ) (void*,int *,scalar_t__) ;
typedef scalar_t__ (* mz_stream_read_cb ) (void*,int *,scalar_t__) ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,int *,scalar_t__) ;

int32_t FUNC_2(void *VAR_2, mz_stream_write_cb VAR_3, void *VAR_4,
    mz_stream_read_cb VAR_5, int32_t VAR_6)
{
    uint8_t VAR_7[16384];
    int32_t VAR_8 = 0;
    int32_t VAR_9 = 0;
    int32_t VAR_10 = 0;

    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_1;
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_0;

    while (VAR_6 > 0)
    {
        VAR_8 = VAR_6;
        if (VAR_8 > (int32_t)sizeof(VAR_7))
            VAR_8 = sizeof(VAR_7);
        VAR_9 = VAR_5(VAR_4, VAR_7, VAR_8);
        if (VAR_9 <= 0)
            return VAR_1;
        VAR_10 = VAR_3(VAR_2, VAR_7, VAR_9);
        if (VAR_10 != VAR_9)
            return VAR_1;
        VAR_6 -= VAR_9;
    }

    return VAR_0;
}

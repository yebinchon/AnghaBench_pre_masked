
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {int total_out; int * buffer; TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_pkcrypt ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int const,int ) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__) ;

int32_t FUNC_2(void *VAR_1, const void *VAR_2, int32_t VAR_3)
{
    mz_stream_pkcrypt *VAR_4 = (mz_stream_pkcrypt *)VAR_1;
    const uint8_t *VAR_5 = (const uint8_t *)VAR_2;
    int32_t VAR_6 = sizeof(VAR_4->buffer);
    int32_t VAR_7 = 0;
    int32_t VAR_8 = 0;
    int32_t VAR_9 = 0;
    uint16_t VAR_10 = 0;

    if (VAR_3 < 0)
        return VAR_0;

    do
    {
        if (VAR_6 > (VAR_3 - VAR_7))
            VAR_6 = (VAR_3 - VAR_7);

        for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 1)
        {
            VAR_4->buffer[VAR_9] = FUNC_0(VAR_1, *VAR_5, VAR_10);
            VAR_5 += 1;
        }

        VAR_8 = FUNC_1(VAR_4->stream.base, VAR_4->buffer, VAR_6);
        if (VAR_8 < 0)
            return VAR_8;

        VAR_7 += VAR_8;
    }
    while (VAR_7 < VAR_3 && VAR_8 > 0);

    VAR_4->total_out += VAR_7;
    return VAR_7;
}

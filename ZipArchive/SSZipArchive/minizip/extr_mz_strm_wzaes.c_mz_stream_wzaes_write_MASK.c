
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {int total_out; scalar_t__ buffer; TYPE_1__ stream; int hmac; } ;
typedef TYPE_2__ mz_stream_wzaes ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (void*,int *,scalar_t__) ;

int32_t FUNC_4(void *VAR_1, const void *VAR_2, int32_t VAR_3)
{
    mz_stream_wzaes *VAR_4 = (mz_stream_wzaes *)VAR_1;
    const uint8_t *VAR_5 = (const uint8_t *)VAR_2;
    int32_t VAR_6 = sizeof(VAR_4->buffer);
    int32_t VAR_7 = 0;
    int32_t VAR_8 = 0;

    if (VAR_3 < 0)
        return VAR_0;

    do
    {
        if (VAR_6 > (VAR_3 - VAR_7))
            VAR_6 = (VAR_3 - VAR_7);

        FUNC_0(VAR_4->buffer, VAR_5, VAR_6);
        VAR_5 += VAR_6;

        FUNC_3(VAR_1, (uint8_t *)VAR_4->buffer, VAR_6);
        FUNC_1(VAR_4->hmac, VAR_4->buffer, VAR_6);

        VAR_8 = FUNC_2(VAR_4->stream.base, VAR_4->buffer, VAR_6);
        if (VAR_8 < 0)
            return VAR_8;

        VAR_7 += VAR_8;
    }
    while (VAR_7 < VAR_3 && VAR_8 > 0);

    VAR_4->total_out += VAR_7;
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {scalar_t__ max_total_in; scalar_t__ total_in; int hmac; TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_wzaes ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,void*,scalar_t__) ;
 int FUNC_2 (void*,int *,scalar_t__) ;

int32_t FUNC_3(void *VAR_1, void *VAR_2, int32_t VAR_3)
{
    mz_stream_wzaes *VAR_4 = (mz_stream_wzaes *)VAR_1;
    int64_t VAR_5 = 0;
    int32_t VAR_6 = VAR_3;
    int32_t VAR_7 = 0;

    VAR_5 = VAR_4->max_total_in - VAR_0;
    if ((int64_t)VAR_6 > (VAR_5 - VAR_4->total_in))
        VAR_6 = (int32_t)(VAR_5 - VAR_4->total_in);

    VAR_7 = FUNC_1(VAR_4->stream.base, VAR_2, VAR_6);

    if (VAR_7 > 0)
    {
        FUNC_0(VAR_4->hmac, (uint8_t *)VAR_2, VAR_7);
        FUNC_2(VAR_1, (uint8_t *)VAR_2, VAR_7);

        VAR_4->total_in += VAR_7;
    }

    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct TYPE_4__ {scalar_t__ max_total_in; scalar_t__ total_in; int total_out; TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_raw ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;

int32_t FUNC_1(void *VAR_0, void *VAR_1, int32_t VAR_2)
{
    mz_stream_raw *VAR_3 = (mz_stream_raw *)VAR_0;
    int32_t VAR_4 = VAR_2;
    int32_t VAR_5 = 0;

    if (VAR_3->max_total_in > 0)
    {
        if ((int64_t)VAR_4 > (VAR_3->max_total_in - VAR_3->total_in))
            VAR_4 = (int32_t)(VAR_3->max_total_in - VAR_3->total_in);
    }

    VAR_5 = FUNC_0(VAR_3->stream.base, VAR_1, VAR_4);

    if (VAR_5 > 0)
    {
        VAR_3->total_in += VAR_5;
        VAR_3->total_out += VAR_5;
    }

    return VAR_5;
}

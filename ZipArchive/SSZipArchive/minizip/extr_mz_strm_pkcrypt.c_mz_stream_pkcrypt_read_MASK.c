
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {scalar_t__ max_total_in; scalar_t__ total_in; TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_pkcrypt ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;


 int FUNC_0 (void*,int ) ;
 size_t FUNC_1 (int ,void*,size_t) ;

int32_t FUNC_2(void *VAR_0, void *VAR_1, int32_t VAR_2)
{
    mz_stream_pkcrypt *VAR_3 = (mz_stream_pkcrypt *)VAR_0;
    uint8_t *VAR_4 = (uint8_t *)VAR_1;
    int32_t VAR_5 = VAR_2;
    int32_t VAR_6 = 0;
    int32_t VAR_7 = 0;


    if ((int64_t)VAR_5 > (VAR_3->max_total_in - VAR_3->total_in))
        VAR_5 = (int32_t)(VAR_3->max_total_in - VAR_3->total_in);

    VAR_6 = FUNC_1(VAR_3->stream.base, VAR_1, VAR_5);

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        VAR_4[VAR_7] = FUNC_0(VAR_0, VAR_4[VAR_7]);

    if (VAR_6 > 0)
        VAR_3->total_in += VAR_6;

    return VAR_6;
}

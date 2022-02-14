
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_total_in; int total_out; int total_in; } ;
typedef TYPE_1__ mz_stream_pkcrypt ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






int32_t FUNC_0(void *VAR_3, int32_t VAR_4, int64_t *VAR_5)
{
    mz_stream_pkcrypt *VAR_6 = (mz_stream_pkcrypt *)VAR_3;
    switch (VAR_4)
    {
    case 130:
        *VAR_5 = VAR_6->total_in;
        break;
    case 128:
        *VAR_5 = VAR_6->total_out;
        break;
    case 129:
        *VAR_5 = VAR_6->max_total_in;
        break;
    case 131:
        *VAR_5 = VAR_2;
        break;
    case 132:
        *VAR_5 = 0;
        break;
    default:
        return VAR_0;
    }
    return VAR_1;
}

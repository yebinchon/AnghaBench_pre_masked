
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encryption_mode; scalar_t__ max_total_in; scalar_t__ total_out; scalar_t__ total_in; } ;
typedef TYPE_1__ mz_stream_wzaes ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;






int32_t FUNC_1(void *VAR_4, int32_t VAR_5, int64_t *VAR_6)
{
    mz_stream_wzaes *VAR_7 = (mz_stream_wzaes *)VAR_4;
    switch (VAR_5)
    {
    case 130:
        *VAR_6 = VAR_7->total_in;
        break;
    case 128:
        *VAR_6 = VAR_7->total_out;
        break;
    case 129:
        *VAR_6 = VAR_7->max_total_in;
        break;
    case 131:
        *VAR_6 = FUNC_0((int64_t)VAR_7->encryption_mode) + VAR_1;
        break;
    case 132:
        *VAR_6 = VAR_0;
        break;
    default:
        return VAR_2;
    }
    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int window_bits; int max_total_in; int level; } ;
typedef TYPE_1__ mz_stream_zlib ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;




int32_t FUNC_0(void *VAR_2, int32_t VAR_3, int64_t VAR_4)
{
    mz_stream_zlib *VAR_5 = (mz_stream_zlib *)VAR_2;
    switch (VAR_3)
    {
    case 130:
        VAR_5->level = (int16_t)VAR_4;
        break;
    case 128:
        VAR_5->max_total_in = VAR_4;
        break;
    case 129:
        VAR_5->window_bits = (int32_t)VAR_4;
        break;
    default:
        return VAR_0;
    }
    return VAR_1;
}

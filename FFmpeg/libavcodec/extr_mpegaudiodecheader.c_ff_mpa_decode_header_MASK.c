
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int layer; int sample_rate; int nb_channels; int bit_rate; int frame_size; int lsf; } ;
typedef TYPE_1__ MPADecodeHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(uint32_t VAR_4, int *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8, enum AVCodecID *VAR_9)
{
    MPADecodeHeader VAR_10, *VAR_11 = &VAR_10;

    if (FUNC_0(VAR_11, VAR_4) != 0) {
        return -1;
    }

    switch(VAR_11->layer) {
    case 1:
        *VAR_9 = VAR_0;
        *VAR_7 = 384;
        break;
    case 2:
        *VAR_9 = VAR_1;
        *VAR_7 = 1152;
        break;
    default:
    case 3:
        if (*VAR_9 != VAR_3)
            *VAR_9 = VAR_2;
        if (VAR_11->lsf)
            *VAR_7 = 576;
        else
            *VAR_7 = 1152;
        break;
    }

    *VAR_5 = VAR_11->sample_rate;
    *VAR_6 = VAR_11->nb_channels;
    *VAR_8 = VAR_11->bit_rate;
    return VAR_11->frame_size;
}

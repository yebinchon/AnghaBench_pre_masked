
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int frame_size; int block_align; int sample_rate; scalar_t__ codec_type; int bit_rate; } ;
struct TYPE_6__ {int num; int den; } ;
struct TYPE_7__ {TYPE_1__ time_base; TYPE_3__* codecpar; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;

void FUNC_2(AVStream *VAR_3, int *VAR_4,
                              int *VAR_5, int *VAR_6)
{
    AVCodecParameters *VAR_7 = VAR_3->codecpar;
    int VAR_8;
    int VAR_9;

    VAR_9 = FUNC_1(VAR_7, 0);
    if (!VAR_9)
        VAR_9 = VAR_7->frame_size;

    *VAR_5 = VAR_7->block_align;
    if (VAR_9 && VAR_7->sample_rate) {
        *VAR_6 = VAR_9;
        *VAR_4 = VAR_7->sample_rate;
    } else if (VAR_7->codec_type == VAR_2 ||
               VAR_7->codec_type == VAR_0 ||
               VAR_7->codec_type == VAR_1) {
        *VAR_6 = VAR_3->time_base.num;
        *VAR_4 = VAR_3->time_base.den;
    } else {
        *VAR_6 = VAR_7->block_align ? VAR_7->block_align * 8 : 8;
        *VAR_4 = VAR_7->bit_rate ? VAR_7->bit_rate :
                    8 * VAR_7->sample_rate;
    }
    VAR_8 = FUNC_0(*VAR_6, *VAR_4);
    *VAR_6 /= VAR_8;
    *VAR_4 /= VAR_8;
}

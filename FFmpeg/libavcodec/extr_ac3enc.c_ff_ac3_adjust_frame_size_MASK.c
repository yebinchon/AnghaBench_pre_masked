
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits_written; int bit_rate; int samples_written; int sample_rate; int frame_size; int frame_size_min; int num_blocks; } ;
typedef TYPE_1__ AC3EncodeContext ;


 int VAR_0 ;

void FUNC_0(AC3EncodeContext *VAR_1)
{
    while (VAR_1->bits_written >= VAR_1->bit_rate && VAR_1->samples_written >= VAR_1->sample_rate) {
        VAR_1->bits_written -= VAR_1->bit_rate;
        VAR_1->samples_written -= VAR_1->sample_rate;
    }
    VAR_1->frame_size = VAR_1->frame_size_min +
                    2 * (VAR_1->bits_written * VAR_1->sample_rate < VAR_1->samples_written * VAR_1->bit_rate);
    VAR_1->bits_written += VAR_1->frame_size * 8;
    VAR_1->samples_written += VAR_0 * VAR_1->num_blocks;
}

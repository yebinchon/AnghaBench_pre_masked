
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {unsigned int number_of_frames; unsigned int starting_frame_index; unsigned int max_restart_interval; unsigned int one_sample_buffer_size; unsigned int* frame_size; TYPE_1__* avctx; int * inout_buffer; int * sample_buffer; } ;
struct TYPE_4__ {unsigned int channels; } ;
typedef TYPE_2__ MLPEncodeContext ;



__attribute__((used)) static void FUNC_0(MLPEncodeContext *VAR_0)
{
    int32_t *VAR_1 = VAR_0->sample_buffer;
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->number_of_frames; VAR_2++) {
        unsigned int VAR_3 = (VAR_0->starting_frame_index + VAR_2) % VAR_0->max_restart_interval;
        int32_t *VAR_4 = VAR_0->inout_buffer + VAR_3 * VAR_0->one_sample_buffer_size;
        unsigned int VAR_5, VAR_6;

        for (VAR_5 = 0; VAR_5 < VAR_0->frame_size[VAR_3]; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < VAR_0->avctx->channels; VAR_6++)
                *VAR_1++ = *VAR_4++;
            VAR_1 += 2;
            VAR_4 += 2;
        }
    }
}

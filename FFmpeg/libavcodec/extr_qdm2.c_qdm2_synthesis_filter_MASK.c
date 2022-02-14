
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sub_sampling; int channels; int nb_channels; float* samples; int frame_size; int* output_buffer; scalar_t__*** sb_samples; int * synth_buf_offset; int * synth_buf; int mpadsp; } ;
typedef TYPE_1__ QDM2Context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *,int ,int*,float*,int,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(QDM2Context *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0;


    VAR_7 = FUNC_0(VAR_2->sub_sampling);

    for (VAR_6 = 0; VAR_6 < VAR_2->channels; VAR_6++)
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            for (VAR_5 = VAR_7; VAR_5 < VAR_0; VAR_5++)
                VAR_2->sb_samples[VAR_6][(8 * VAR_3) + VAR_4][VAR_5] = 0;

    for (VAR_6 = 0; VAR_6 < VAR_2->nb_channels; VAR_6++) {
        float *VAR_10 = VAR_2->samples + VAR_6;

        for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
            FUNC_1(&VAR_2->mpadsp,
                                      VAR_2->synth_buf[VAR_6], &(VAR_2->synth_buf_offset[VAR_6]),
                                      VAR_1, &VAR_9,
                                      VAR_10, VAR_2->nb_channels,
                                      VAR_2->sb_samples[VAR_6][(8 * VAR_3) + VAR_4]);
            VAR_10 += 32 * VAR_2->nb_channels;
        }
    }


    VAR_8 = (4 >> VAR_2->sub_sampling);

    for (VAR_6 = 0; VAR_6 < VAR_2->channels; VAR_6++)
        for (VAR_4 = 0; VAR_4 < VAR_2->frame_size; VAR_4++)
            VAR_2->output_buffer[VAR_2->channels * VAR_4 + VAR_6] += (1 << 23) * VAR_2->samples[VAR_2->nb_channels * VAR_8 * VAR_4 + VAR_6];
}

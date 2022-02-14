
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* log2_blocksize; int have_saved; int channels; float* samples; float const* saved; float* scratch; int bufqueue; } ;
typedef TYPE_1__ vorbis_enc_context ;
struct TYPE_7__ {int nb_samples; scalar_t__* extended_data; } ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (float*,float const*,size_t const) ;
 int FUNC_3 (float*,int ,int) ;

__attribute__((used)) static void FUNC_4(vorbis_enc_context *VAR_0, int VAR_1)
{
    AVFrame *VAR_2 = ((void*)0);
    int VAR_3 = 1 << (VAR_0->log2_blocksize[1] - 1);
    int VAR_4 = VAR_3 / VAR_1;
    int VAR_5, VAR_6;


    if (VAR_0->have_saved)
        for (VAR_6 = 0; VAR_6 < VAR_0->channels; VAR_6++)
            FUNC_2(VAR_0->samples + 2 * VAR_6 * VAR_3,
                   VAR_0->saved + VAR_6 * VAR_3, sizeof(float) * VAR_3);
    else
        for (VAR_6 = 0; VAR_6 < VAR_0->channels; VAR_6++)
            FUNC_3(VAR_0->samples + 2 * VAR_6 * VAR_3, 0, sizeof(float) * VAR_3);

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_2 = FUNC_1(&VAR_0->bufqueue);

        for (VAR_6 = 0; VAR_6 < VAR_0->channels; VAR_6++) {
            float *VAR_7 = VAR_0->samples + 2 * VAR_6 * VAR_3 + VAR_3;
            float *VAR_8 = VAR_0->saved + VAR_6 * VAR_3;
            const float *VAR_9 = (float *) VAR_2->extended_data[VAR_6];
            const size_t VAR_10 = VAR_2->nb_samples * sizeof(float);

            FUNC_2(VAR_7 + VAR_5*VAR_1, VAR_9, VAR_10);
            FUNC_2(VAR_8 + VAR_5*VAR_1, VAR_9, VAR_10);
        }
        FUNC_0(&VAR_2);
    }
    VAR_0->have_saved = 1;
    FUNC_2(VAR_0->scratch, VAR_0->samples, 2 * VAR_0->channels * VAR_3);
}

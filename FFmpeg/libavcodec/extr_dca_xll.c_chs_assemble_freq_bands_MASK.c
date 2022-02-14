
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int nfreqbands; int nchannels; size_t* ch_remap; int * deci_history; TYPE_1__* bands; int ** sample_buffer; int * sample_size; } ;
struct TYPE_9__ {int nframesamples; int ** output_samples; TYPE_2__* dcadsp; } ;
struct TYPE_8__ {int (* assemble_freq_bands ) (int *,int *,int *,int ,int) ;} ;
struct TYPE_7__ {int ** msb_sample_buffer; } ;
typedef TYPE_3__ DCAXllDecoder ;
typedef TYPE_4__ DCAXllChSet ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int *,int ,int) ;

__attribute__((used)) static int FUNC_5(DCAXllDecoder *VAR_3, DCAXllChSet *VAR_4)
{
    int VAR_5, VAR_6 = VAR_3->nframesamples;
    int32_t *VAR_7;

    FUNC_1(VAR_4->nfreqbands > 1);


    FUNC_2(&VAR_4->sample_buffer[2], &VAR_4->sample_size[2],
                   2 * VAR_6 * VAR_4->nchannels * sizeof(int32_t));
    if (!VAR_4->sample_buffer[2])
        return FUNC_0(VAR_1);


    VAR_7 = VAR_4->sample_buffer[2];
    for (VAR_5 = 0; VAR_5 < VAR_4->nchannels; VAR_5++) {
        int32_t *VAR_8 = VAR_4->bands[0].msb_sample_buffer[VAR_5];
        int32_t *VAR_9 = VAR_4->bands[1].msb_sample_buffer[VAR_5];


        FUNC_3(VAR_8 - VAR_0,
               VAR_4->deci_history[VAR_5], sizeof(VAR_4->deci_history[0]));


        VAR_3->dcadsp->assemble_freq_bands(VAR_7, VAR_8, VAR_9,
                                       VAR_2,
                                       VAR_6);


        VAR_3->output_samples[VAR_4->ch_remap[VAR_5]] = VAR_7;
        VAR_7 += VAR_6 * 2;
    }

    return 0;
}

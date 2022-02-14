
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int nfreqbands; int nchannels; TYPE_1__* bands; int ** sample_buffer; int * sample_size; } ;
struct TYPE_7__ {int nframesamples; } ;
struct TYPE_6__ {int ** msb_sample_buffer; } ;
typedef TYPE_2__ DCAXllDecoder ;
typedef TYPE_3__ DCAXllChSet ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int *,int) ;

__attribute__((used)) static int FUNC_2(DCAXllDecoder *VAR_2, DCAXllChSet *VAR_3)
{
    int VAR_4 = VAR_3->nfreqbands > 1 ? VAR_0 : 0;
    int VAR_5 = VAR_2->nframesamples + VAR_4;
    int VAR_6, VAR_7, VAR_8 = VAR_5 * VAR_3->nchannels * VAR_3->nfreqbands;
    int32_t *VAR_9;


    FUNC_1(&VAR_3->sample_buffer[0], &VAR_3->sample_size[0], VAR_8 * sizeof(int32_t));
    if (!VAR_3->sample_buffer[0])
        return FUNC_0(VAR_1);

    VAR_9 = VAR_3->sample_buffer[0] + VAR_4;
    for (VAR_6 = 0; VAR_6 < VAR_3->nfreqbands; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_3->nchannels; VAR_7++) {
            VAR_3->bands[VAR_6].msb_sample_buffer[VAR_7] = VAR_9;
            VAR_9 += VAR_5;
        }
    }

    return 0;
}

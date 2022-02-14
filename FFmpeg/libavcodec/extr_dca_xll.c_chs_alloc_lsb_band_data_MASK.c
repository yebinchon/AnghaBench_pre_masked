
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
struct TYPE_6__ {int ** lsb_sample_buffer; scalar_t__ lsb_section_size; } ;
typedef TYPE_2__ DCAXllDecoder ;
typedef TYPE_3__ DCAXllChSet ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,int *,int) ;

__attribute__((used)) static int FUNC_2(DCAXllDecoder *VAR_1, DCAXllChSet *VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;
    int32_t *VAR_6;


    for (VAR_3 = 0; VAR_3 < VAR_2->nfreqbands; VAR_3++)
        if (VAR_2->bands[VAR_3].lsb_section_size)
            VAR_5 += VAR_1->nframesamples * VAR_2->nchannels;
    if (!VAR_5)
        return 0;


    FUNC_1(&VAR_2->sample_buffer[1], &VAR_2->sample_size[1], VAR_5 * sizeof(int32_t));
    if (!VAR_2->sample_buffer[1])
        return FUNC_0(VAR_0);

    VAR_6 = VAR_2->sample_buffer[1];
    for (VAR_3 = 0; VAR_3 < VAR_2->nfreqbands; VAR_3++) {
        if (VAR_2->bands[VAR_3].lsb_section_size) {
            for (VAR_4 = 0; VAR_4 < VAR_2->nchannels; VAR_4++) {
                VAR_2->bands[VAR_3].lsb_sample_buffer[VAR_4] = VAR_6;
                VAR_6 += VAR_1->nframesamples;
            }
        } else {
            for (VAR_4 = 0; VAR_4 < VAR_2->nchannels; VAR_4++)
                VAR_2->bands[VAR_3].lsb_sample_buffer[VAR_4] = ((void*)0);
        }
    }

    return 0;
}

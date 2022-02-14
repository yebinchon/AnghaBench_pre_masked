
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int** msb_sample_buffer; int** lsb_sample_buffer; int* bit_width_adjust; scalar_t__* nscalablelsbs; } ;
struct TYPE_9__ {int nchannels; TYPE_3__* bands; } ;
struct TYPE_8__ {int nframesamples; } ;
typedef int SUINT ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAXllChSet ;
typedef TYPE_3__ DCAXllBand ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_1(DCAXllDecoder *VAR_0, DCAXllChSet *VAR_1, int VAR_2)
{
    DCAXllBand *VAR_3 = &VAR_1->bands[VAR_2];
    int VAR_4, VAR_5, VAR_6 = VAR_0->nframesamples;

    for (VAR_5 = 0; VAR_5 < VAR_1->nchannels; VAR_5++) {
        int VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
        if (VAR_7) {
            int32_t *VAR_8 = VAR_3->msb_sample_buffer[VAR_5];
            if (VAR_3->nscalablelsbs[VAR_5]) {
                int32_t *VAR_9 = VAR_3->lsb_sample_buffer[VAR_5];
                int VAR_10 = VAR_3->bit_width_adjust[VAR_5];
                for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
                    VAR_8[VAR_4] = VAR_8[VAR_4] * (SUINT)(1 << VAR_7) + (VAR_9[VAR_4] << VAR_10);
            } else {
                for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
                    VAR_8[VAR_4] = VAR_8[VAR_4] * (SUINT)(1 << VAR_7);
            }
        }
    }
}

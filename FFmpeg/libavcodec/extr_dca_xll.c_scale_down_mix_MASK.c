
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nfreqbands; int nchannels; int* dmix_scale; int hier_ofs; int * deci_history; TYPE_1__* bands; int hier_chset; } ;
struct TYPE_9__ {int nactivechsets; TYPE_2__* dcadsp; int nframesamples; TYPE_4__* chset; } ;
struct TYPE_8__ {int (* dmix_scale ) (int ,int,int ) ;} ;
struct TYPE_7__ {int * msb_sample_buffer; } ;
typedef TYPE_3__ DCAXllDecoder ;
typedef TYPE_4__ DCAXllChSet ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(DCAXllDecoder *VAR_1, DCAXllChSet *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = 0;
    DCAXllChSet *VAR_7;

    for (VAR_4 = 0, VAR_7 = VAR_1->chset; VAR_4 < VAR_1->nactivechsets; VAR_4++, VAR_7++) {
        if (!VAR_7->hier_chset)
            continue;

        FUNC_0(VAR_3 < VAR_7->nfreqbands);
        for (VAR_5 = 0; VAR_5 < VAR_7->nchannels; VAR_5++) {
            int VAR_8 = VAR_2->dmix_scale[VAR_6++];
            if (VAR_8 != (1 << 15)) {
                VAR_1->dcadsp->dmix_scale(VAR_7->bands[VAR_3].msb_sample_buffer[VAR_5],
                                      VAR_8, VAR_1->nframesamples);
                if (VAR_3)
                    VAR_1->dcadsp->dmix_scale(VAR_7->deci_history[VAR_5],
                                          VAR_8, VAR_0);
            }
        }

        if (VAR_6 >= VAR_2->hier_ofs)
            break;
    }
}

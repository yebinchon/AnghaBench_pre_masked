
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* out; int output_channels; int out_size; scalar_t__ redundancy_idx; scalar_t__* redundancy_output; int * celt_output; TYPE_1__* fdsp; int celt_delay; int avctx; int swr; } ;
struct TYPE_4__ {int (* vector_fmac_scalar ) (int,int ,double,int) ;} ;
typedef TYPE_2__ OpusStreamContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void**,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int ,double,int) ;
 int FUNC_5 (int ,int **,int,int *,int ) ;

__attribute__((used)) static int FUNC_6(OpusStreamContext *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_1(VAR_3->celt_delay);
    int VAR_6, VAR_7;
    VAR_6 = FUNC_5(VAR_3->swr,
                      (uint8_t**)VAR_3->out, VAR_4,
                      ((void*)0), 0);
    if (VAR_6 < 0)
        return VAR_6;
    else if (VAR_6 != VAR_4) {
        FUNC_2(VAR_3->avctx, VAR_1, "Wrong number of flushed samples: %d\n",
               VAR_6);
        return VAR_0;
    }

    if (VAR_5) {
        if (VAR_5 != VAR_4) {
            FUNC_2(VAR_3->avctx, VAR_1, "Wrong number of CELT delay samples.\n");
            return VAR_0;
        }
        FUNC_0(VAR_3->celt_delay, (void**)VAR_3->celt_output, VAR_4);
        for (VAR_7 = 0; VAR_7 < VAR_3->output_channels; VAR_7++) {
            VAR_3->fdsp->vector_fmac_scalar(VAR_3->out[VAR_7],
                                        VAR_3->celt_output[VAR_7], 1.0,
                                        VAR_4);
        }
    }

    if (VAR_3->redundancy_idx) {
        for (VAR_7 = 0; VAR_7 < VAR_3->output_channels; VAR_7++)
            FUNC_3(VAR_3->out[VAR_7], VAR_3->out[VAR_7],
                      VAR_3->redundancy_output[VAR_7] + 120 + VAR_3->redundancy_idx,
                      VAR_2 + VAR_3->redundancy_idx, 120 - VAR_3->redundancy_idx);
        VAR_3->redundancy_idx = 0;
    }

    VAR_3->out[0] += VAR_4;
    VAR_3->out[1] += VAR_4;
    VAR_3->out_size -= VAR_4 * sizeof(float);

    return 0;
}

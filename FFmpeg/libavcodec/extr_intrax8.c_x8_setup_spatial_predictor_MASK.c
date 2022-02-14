
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* setup_spatial_compensation ) (int ,int ,int ,int*,int*,int) ;} ;
struct TYPE_8__ {int edges; int orient; int chroma_orient; int quant_dc_chroma; int quant; int flat_dc; int predicted_dc; int raw_orient; TYPE_2__* frame; int scratchpad; int * dest; TYPE_1__ dsp; } ;
struct TYPE_7__ {int * linesize; } ;
typedef TYPE_3__ IntraX8Context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int*,int*,int) ;
 int FUNC_2 (TYPE_3__* const) ;

__attribute__((used)) static int FUNC_3(IntraX8Context *const VAR_0, const int VAR_1)
{
    int VAR_2;
    int VAR_3;
    int VAR_4;

    VAR_0->dsp.setup_spatial_compensation(VAR_0->dest[VAR_1], VAR_0->scratchpad,
                                      VAR_0->frame->linesize[VAR_1 > 0],
                                      &VAR_2, &VAR_3, VAR_0->edges);
    if (VAR_1) {
        VAR_0->orient = VAR_0->chroma_orient;
        VAR_4 = VAR_0->quant_dc_chroma;
    } else {
        VAR_4 = VAR_0->quant;
    }

    VAR_0->flat_dc = 0;
    if (VAR_2 < VAR_4 || VAR_2 < 3) {
        VAR_0->orient = 0;


        if (VAR_2 < 3) {
            VAR_0->flat_dc = 1;
            VAR_3 += 9;

            VAR_0->predicted_dc = VAR_3 * 6899 >> 17;
        }
    }
    if (VAR_1)
        return 0;

    FUNC_0(VAR_0->orient < 3);
    if (VAR_2 < 2 * VAR_0->quant) {
        if ((VAR_0->edges & 3) == 0) {
            if (VAR_0->orient == 1)
                VAR_0->orient = 11;
            if (VAR_0->orient == 2)
                VAR_0->orient = 10;
        } else {
            VAR_0->orient = 0;
        }
        VAR_0->raw_orient = 0;
    } else {
        static const uint8_t VAR_5[3][12] = {
            { 0, 8, 4, 10, 11, 2, 6, 9, 1, 3, 5, 7 },
            { 4, 0, 8, 11, 10, 3, 5, 2, 6, 9, 1, 7 },
            { 8, 0, 4, 10, 11, 1, 7, 2, 6, 9, 3, 5 },
        };
        VAR_0->raw_orient = FUNC_2(VAR_0);
        if (VAR_0->raw_orient < 0)
            return -1;
        FUNC_0(VAR_0->raw_orient < 12);
        FUNC_0(VAR_0->orient < 3);
        VAR_0->orient=VAR_5[VAR_0->orient][VAR_0->raw_orient];
    }
    return 0;
}

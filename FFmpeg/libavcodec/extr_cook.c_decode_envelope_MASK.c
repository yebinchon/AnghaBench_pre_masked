
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int avctx; TYPE_1__* envelope_quant_index; int gb; } ;
struct TYPE_7__ {int total_subbands; int js_subband_start; } ;
struct TYPE_6__ {int bits; int table; } ;
typedef TYPE_2__ COOKSubpacket ;
typedef TYPE_3__ COOKContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(COOKContext *VAR_2, COOKSubpacket *VAR_3,
                           int *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    VAR_4[0] = FUNC_1(&VAR_2->gb, 6) - 6;

    for (VAR_5 = 1; VAR_5 < VAR_3->total_subbands; VAR_5++) {
        VAR_7 = VAR_5;
        if (VAR_5 >= VAR_3->js_subband_start * 2) {
            VAR_7 -= VAR_3->js_subband_start;
        } else {
            VAR_7 /= 2;
            if (VAR_7 < 1)
                VAR_7 = 1;
        }
        if (VAR_7 > 13)
            VAR_7 = 13;

        VAR_6 = FUNC_2(&VAR_2->gb, VAR_2->envelope_quant_index[VAR_7 - 1].table,
                     VAR_2->envelope_quant_index[VAR_7 - 1].bits, 2);
        VAR_4[VAR_5] = VAR_4[VAR_5 - 1] + VAR_6 - 12;
        if (VAR_4[VAR_5] > 63 || VAR_4[VAR_5] < -63) {
            FUNC_0(VAR_2->avctx, VAR_1,
                   "Invalid quantizer %d at position %d, outside [-63, 63] range\n",
                   VAR_4[VAR_5], VAR_5);
            return VAR_0;
        }
    }

    return 0;
}

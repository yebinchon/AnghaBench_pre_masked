
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef enum dirac_subband { ____Placeholder_dirac_subband } dirac_subband ;
struct TYPE_20__ {scalar_t__ buffer; } ;
struct TYPE_19__ {int (* execute ) (TYPE_4__*,int ,TYPE_2__**,int*,int,int) ;} ;
struct TYPE_18__ {int wavelet_depth; scalar_t__ is_arith; TYPE_1__* plane; TYPE_9__ gb; TYPE_4__* avctx; } ;
struct TYPE_17__ {int length; int quant; scalar_t__ coeff_data; } ;
struct TYPE_16__ {TYPE_2__*** band; } ;
typedef TYPE_2__ SubBand ;
typedef TYPE_3__ DiracContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 void* FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,int) ;
 int FUNC_7 (TYPE_4__*,int ,TYPE_2__**,int*,int,int) ;
 int FUNC_8 (TYPE_4__*,int ,TYPE_2__**,int*,int,int) ;

__attribute__((used)) static int FUNC_9(DiracContext *VAR_6, int VAR_7)
{
    AVCodecContext *VAR_8 = VAR_6->avctx;
    SubBand *VAR_9[3*VAR_3+1];
    enum dirac_subband VAR_10;
    int VAR_11, VAR_12 = 0;
    int VAR_13[3*VAR_3+1];
    int VAR_14;
    int VAR_15 = 0;


    for (VAR_11 = 0; VAR_11 < VAR_6->wavelet_depth; VAR_11++) {
        for (VAR_10 = !!VAR_11; VAR_10 < 4; VAR_10++) {
            SubBand *VAR_16 = VAR_6->plane[VAR_7].band[VAR_11][VAR_10];
            VAR_9[VAR_12++] = VAR_16;

            FUNC_1(&VAR_6->gb);

            VAR_16->length = FUNC_5(&VAR_6->gb);
            if (VAR_16->length) {
                VAR_16->quant = FUNC_5(&VAR_6->gb);
                if (VAR_16->quant > (VAR_2 - 1)) {
                    FUNC_2(VAR_6->avctx, VAR_1, "Unsupported quant %d\n", VAR_16->quant);
                    VAR_16->quant = 0;
                    return VAR_0;
                }
                FUNC_1(&VAR_6->gb);
                VAR_16->coeff_data = VAR_6->gb.buffer + FUNC_3(&VAR_6->gb)/8;
                if (VAR_16->length > FUNC_0(FUNC_4(&VAR_6->gb)/8, 0)) {
                    VAR_16->length = FUNC_0(FUNC_4(&VAR_6->gb)/8, 0);
                    VAR_15 ++;
                }
                FUNC_6(&VAR_6->gb, VAR_16->length*8);
            }
        }

        if (VAR_6->is_arith)
            VAR_8->execute(VAR_8, VAR_4, &VAR_6->plane[VAR_7].band[VAR_11][!!VAR_11],
                           VAR_13 + 3*VAR_11 + !!VAR_11, 4-!!VAR_11, sizeof(SubBand));
    }

    if (!VAR_6->is_arith)
        VAR_8->execute(VAR_8, VAR_5, VAR_9, VAR_13, VAR_12, sizeof(SubBand*));

    for (VAR_14 = 0; VAR_14 < VAR_6->wavelet_depth * 3 + 1; VAR_14++) {
        if (VAR_13[VAR_14] < 0)
            VAR_15++;
    }
    if (VAR_15 > (VAR_6->wavelet_depth * 3 + 1) /2)
        return VAR_0;

    return 0;
}

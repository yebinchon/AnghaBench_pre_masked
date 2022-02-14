
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_channels; int* cdlms_ttl; int bits_per_sample; TYPE_1__** cdlms; int gb; int avctx; } ;
typedef TYPE_2__ WmallDecodeCtx ;
struct TYPE_4__ {int order; int scaling; int coefsend; int bitsend; int* coefs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int*,int ,int ) ;

__attribute__((used)) static int FUNC_7(WmallDecodeCtx *VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = FUNC_4(&VAR_4->gb);

    for (VAR_5 = 0; VAR_5 < VAR_4->num_channels; VAR_5++) {
        VAR_4->cdlms_ttl[VAR_5] = FUNC_3(&VAR_4->gb, 3) + 1;
        for (VAR_6 = 0; VAR_6 < VAR_4->cdlms_ttl[VAR_5]; VAR_6++) {
            VAR_4->cdlms[VAR_5][VAR_6].order = (FUNC_3(&VAR_4->gb, 7) + 1) * 8;
            if (VAR_4->cdlms[VAR_5][VAR_6].order > VAR_2) {
                FUNC_0(VAR_4->avctx, VAR_1,
                       "Order[%d][%d] %d > max (%d), not supported\n",
                       VAR_5, VAR_6, VAR_4->cdlms[VAR_5][VAR_6].order, VAR_2);
                VAR_4->cdlms[0][0].order = 0;
                return VAR_0;
            }
            if(VAR_4->cdlms[VAR_5][VAR_6].order & 8 && VAR_4->bits_per_sample == 16) {
                static int VAR_8;
                if(!VAR_8)
                    FUNC_2(VAR_4->avctx, "CDLMS of order %d",
                                          VAR_4->cdlms[VAR_5][VAR_6].order);
                VAR_8 = 1;
            }
        }

        for (VAR_6 = 0; VAR_6 < VAR_4->cdlms_ttl[VAR_5]; VAR_6++)
            VAR_4->cdlms[VAR_5][VAR_6].scaling = FUNC_3(&VAR_4->gb, 4);

        if (VAR_7) {
            for (VAR_6 = 0; VAR_6 < VAR_4->cdlms_ttl[VAR_5]; VAR_6++) {
                int VAR_9, VAR_10, VAR_11, VAR_12;
                VAR_9 = FUNC_1(VAR_4->cdlms[VAR_5][VAR_6].order);
                if ((1 << VAR_9) < VAR_4->cdlms[VAR_5][VAR_6].order)
                    VAR_9++;
                VAR_4->cdlms[VAR_5][VAR_6].coefsend = FUNC_3(&VAR_4->gb, VAR_9) + 1;

                VAR_9 = FUNC_1(VAR_4->cdlms[VAR_5][VAR_6].scaling + 1);
                if ((1 << VAR_9) < VAR_4->cdlms[VAR_5][VAR_6].scaling + 1)
                    VAR_9++;

                VAR_4->cdlms[VAR_5][VAR_6].bitsend = FUNC_5(&VAR_4->gb, VAR_9) + 2;
                VAR_10 = 32 - VAR_4->cdlms[VAR_5][VAR_6].bitsend;
                VAR_11 = 32 - VAR_4->cdlms[VAR_5][VAR_6].scaling - 2;
                for (VAR_12 = 0; VAR_12 < VAR_4->cdlms[VAR_5][VAR_6].coefsend; VAR_12++)
                    VAR_4->cdlms[VAR_5][VAR_6].coefs[VAR_12] =
                        (FUNC_3(&VAR_4->gb, VAR_4->cdlms[VAR_5][VAR_6].bitsend) << VAR_10) >> VAR_11;
            }
        }

        for (VAR_6 = 0; VAR_6 < VAR_4->cdlms_ttl[VAR_5]; VAR_6++)
            FUNC_6(VAR_4->cdlms[VAR_5][VAR_6].coefs + VAR_4->cdlms[VAR_5][VAR_6].order,
                   0, VAR_3);
    }

    return 0;
}

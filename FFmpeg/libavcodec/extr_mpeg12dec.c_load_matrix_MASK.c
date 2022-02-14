
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int* idct_permutation; } ;
struct TYPE_5__ {int avctx; int gb; TYPE_1__ idsp; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 size_t* VAR_3 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(MpegEncContext *VAR_4, uint16_t VAR_5[64],
                       uint16_t VAR_6[64], int VAR_7)
{
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
        int VAR_9 = VAR_4->idsp.idct_permutation[VAR_3[VAR_8]];
        int VAR_10 = FUNC_1(&VAR_4->gb, 8);
        if (VAR_10 == 0) {
            FUNC_0(VAR_4->avctx, VAR_2, "matrix damaged\n");
            return VAR_0;
        }
        if (VAR_7 && VAR_8 == 0 && VAR_10 != 8) {
            FUNC_0(VAR_4->avctx, VAR_1, "intra matrix specifies invalid DC quantizer %d, ignoring\n", VAR_10);
            VAR_10 = 8;
        }
        VAR_5[VAR_9] = VAR_10;
        if (VAR_6)
            VAR_6[VAR_9] = VAR_10;
    }
    return 0;
}

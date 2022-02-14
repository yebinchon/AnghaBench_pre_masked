
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int num_x; int num_y; scalar_t__ pshift; int avctx; } ;
struct TYPE_6__ {int width; int height; int stride; int * ibuf; } ;
typedef TYPE_1__ SubBand ;
typedef int GetBitContext ;
typedef TYPE_2__ DiracContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int,int *,int *) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(DiracContext *VAR_6, GetBitContext *VAR_7, int VAR_8,
                           int VAR_9, int VAR_10, int VAR_11,
                           SubBand *VAR_12, SubBand *VAR_13)
{
    int VAR_14 = VAR_12->width * VAR_9 / VAR_6->num_x;
    int VAR_15 = VAR_12->width *(VAR_9+1) / VAR_6->num_x;
    int VAR_16 = VAR_12->height * VAR_10 / VAR_6->num_y;
    int VAR_17 = VAR_12->height *(VAR_10+1) / VAR_6->num_y;

    int VAR_18, VAR_19;

    uint8_t *VAR_20 = VAR_12->ibuf + VAR_16 * VAR_12->stride;
    uint8_t *VAR_21 = VAR_13 ? VAR_13->ibuf + VAR_16 * VAR_13->stride: ((void*)0);
    int VAR_22, VAR_23;

    if (VAR_8 > (VAR_1 - 1)) {
        FUNC_1(VAR_6->avctx, VAR_0, "Unsupported quant %d\n", VAR_8);
        return;
    }
    VAR_18 = VAR_3[VAR_8];
    VAR_19 = VAR_2[VAR_8] + 2;


    if (FUNC_2(VAR_7) >= VAR_11)
        return;

    if (VAR_6->pshift) {
        for (VAR_23 = VAR_16; VAR_23 < VAR_17; VAR_23++) {
            for (VAR_22 = VAR_14; VAR_22 < VAR_15; VAR_22++) {
                FUNC_0(VAR_5, VAR_22, VAR_7, VAR_11, VAR_20, VAR_21);
            }
            VAR_20 += VAR_12->stride;
            if (VAR_21)
                VAR_21 += VAR_13->stride;
        }
    }
    else {
        for (VAR_23 = VAR_16; VAR_23 < VAR_17; VAR_23++) {
            for (VAR_22 = VAR_14; VAR_22 < VAR_15; VAR_22++) {
                FUNC_0(VAR_4, VAR_22, VAR_7, VAR_11, VAR_20, VAR_21);
            }
            VAR_20 += VAR_12->stride;
            if (VAR_21)
                VAR_21 += VAR_13->stride;
        }
    }
}

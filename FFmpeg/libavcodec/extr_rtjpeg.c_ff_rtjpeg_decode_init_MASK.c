
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* idct_permutation; } ;
struct TYPE_5__ {int w; int h; int * cquant; int * lquant; TYPE_1__ idsp; } ;
typedef TYPE_2__ RTJpegContext ;



void FUNC_0(RTJpegContext *VAR_0, int VAR_1, int VAR_2,
                           const uint32_t *VAR_3, const uint32_t *VAR_4) {
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
        int VAR_6 = VAR_0->idsp.idct_permutation[VAR_5];
        VAR_0->lquant[VAR_6] = VAR_3[VAR_5];
        VAR_0->cquant[VAR_6] = VAR_4[VAR_5];
    }
    VAR_0->w = VAR_1;
    VAR_0->h = VAR_2;
}

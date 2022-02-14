
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int me_cmp_func ;
struct TYPE_3__ {int * w97; int * w53; int * nsse; int * vsse; int * vsad; int * rd; int * bit; int * quant_psnr; int * dct_max; int * dct264_sad; int * dct_sad; int * sse; int * hadamard8_diff; int * median_sad; int * sad; } ;
typedef TYPE_1__ MECmpContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_1 ;

void FUNC_2(MECmpContext *VAR_2, me_cmp_func *VAR_3, int VAR_4)
{
    int VAR_5;

    FUNC_1(VAR_3, 0, sizeof(void *) * 6);

    for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
        switch (VAR_4 & 0xFF) {
        case 135:
            VAR_3[VAR_5] = VAR_2->sad[VAR_5];
            break;
        case 139:
            VAR_3[VAR_5] = VAR_2->median_sad[VAR_5];
            break;
        case 134:
            VAR_3[VAR_5] = VAR_2->hadamard8_diff[VAR_5];
            break;
        case 133:
            VAR_3[VAR_5] = VAR_2->sse[VAR_5];
            break;
        case 142:
            VAR_3[VAR_5] = VAR_2->dct_sad[VAR_5];
            break;
        case 141:
            VAR_3[VAR_5] = VAR_2->dct264_sad[VAR_5];
            break;
        case 140:
            VAR_3[VAR_5] = VAR_2->dct_max[VAR_5];
            break;
        case 137:
            VAR_3[VAR_5] = VAR_2->quant_psnr[VAR_5];
            break;
        case 143:
            VAR_3[VAR_5] = VAR_2->bit[VAR_5];
            break;
        case 136:
            VAR_3[VAR_5] = VAR_2->rd[VAR_5];
            break;
        case 132:
            VAR_3[VAR_5] = VAR_2->vsad[VAR_5];
            break;
        case 131:
            VAR_3[VAR_5] = VAR_2->vsse[VAR_5];
            break;
        case 128:
            VAR_3[VAR_5] = VAR_1;
            break;
        case 138:
            VAR_3[VAR_5] = VAR_2->nsse[VAR_5];
            break;
        default:
            FUNC_0(((void*)0), VAR_0,
                   "internal error in cmp function selection\n");
        }
    }
}

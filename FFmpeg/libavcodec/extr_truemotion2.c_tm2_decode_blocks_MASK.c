
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


typedef int uint8_t ;
struct TYPE_23__ {int * linesize; int ** data; } ;
struct TYPE_22__ {int* tok_lens; int* Y2; int* Y1; int* U2; int* U1; int* V2; int* V1; int y_stride; int uv_stride; scalar_t__ cur; scalar_t__ error; TYPE_19__* avctx; int CD; int D; int clast; int last; scalar_t__* tok_ptrs; } ;
struct TYPE_21__ {int width; int height; } ;
typedef TYPE_1__ TM2Context ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t) ;





 int VAR_2 ;

 size_t VAR_3 ;

 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_19__*,int ,char*,int,...) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_12(TM2Context *VAR_4, AVFrame *VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = VAR_4->avctx->width, VAR_9 = VAR_4->avctx->height, VAR_10 = VAR_8 >> 2, VAR_11 = VAR_9 >> 2, VAR_12 = VAR_8 >> 1;
    int VAR_13;
    int VAR_14 = 1;
    int *VAR_15, *VAR_16, *VAR_17;
    uint8_t *VAR_18;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
        VAR_4->tok_ptrs[VAR_6] = 0;

    if (VAR_4->tok_lens[VAR_3]<VAR_10*VAR_11) {
        FUNC_2(VAR_4->avctx,VAR_1,"Got %i tokens for %i blocks\n",VAR_4->tok_lens[VAR_3],VAR_10*VAR_11);
        return VAR_0;
    }

    FUNC_4(VAR_4->last, 0, 4 * VAR_10 * sizeof(int));
    FUNC_4(VAR_4->clast, 0, 4 * VAR_10 * sizeof(int));

    for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
        FUNC_4(VAR_4->D, 0, 4 * sizeof(int));
        FUNC_4(VAR_4->CD, 0, 4 * sizeof(int));
        for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
            VAR_13 = FUNC_0(VAR_4, VAR_3);
            switch(VAR_13) {
            case 134:
                FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
                break;
            case 132:
                FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
                break;
            case 133:
                FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
                break;
            case 130:
                FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
                break;
            case 128:
                FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7);
                VAR_14 = 0;
                break;
            case 129:
                FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7);
                VAR_14 = 0;
                break;
            case 131:
                FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7);
                VAR_14 = 0;
                break;
            default:
                FUNC_2(VAR_4->avctx, VAR_1, "Skipping unknown block type %i\n", VAR_13);
            }
            if (VAR_4->error)
                return VAR_0;
        }
    }


    VAR_15 = (VAR_4->cur?VAR_4->Y2:VAR_4->Y1);
    VAR_16 = (VAR_4->cur?VAR_4->U2:VAR_4->U1);
    VAR_17 = (VAR_4->cur?VAR_4->V2:VAR_4->V1);
    VAR_18 = VAR_5->data[0];
    for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
            unsigned VAR_19 = VAR_15[VAR_6], VAR_20 = VAR_16[VAR_6 >> 1], VAR_21 = VAR_17[VAR_6 >> 1];
            VAR_18[3*VAR_6+0] = FUNC_1(VAR_19 + VAR_21);
            VAR_18[3*VAR_6+1] = FUNC_1(VAR_19);
            VAR_18[3*VAR_6+2] = FUNC_1(VAR_19 + VAR_20);
        }


        VAR_15[-4] = VAR_15[-3] = VAR_15[-2] = VAR_15[-1] = VAR_15[0];
        VAR_15[VAR_8 + 3] = VAR_15[VAR_8 + 2] = VAR_15[VAR_8 + 1] = VAR_15[VAR_8] = VAR_15[VAR_8 - 1];


        if (VAR_7 == 0) {
            FUNC_3(VAR_15 - 4 - 1 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
            FUNC_3(VAR_15 - 4 - 2 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
            FUNC_3(VAR_15 - 4 - 3 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
            FUNC_3(VAR_15 - 4 - 4 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
        } else if (VAR_7 == VAR_9 - 1) {
            FUNC_3(VAR_15 - 4 + 1 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
            FUNC_3(VAR_15 - 4 + 2 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
            FUNC_3(VAR_15 - 4 + 3 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
            FUNC_3(VAR_15 - 4 + 4 * VAR_4->y_stride, VAR_15 - 4, VAR_4->y_stride);
        }

        VAR_15 += VAR_4->y_stride;
        if (VAR_7 & 1) {

            VAR_16[-2] = VAR_16[-1] = VAR_16[0];
            VAR_17[-2] = VAR_17[-1] = VAR_17[0];
            VAR_16[VAR_12 + 1] = VAR_16[VAR_12] = VAR_16[VAR_12 - 1];
            VAR_17[VAR_12 + 1] = VAR_17[VAR_12] = VAR_17[VAR_12 - 1];


            if (VAR_7 == 1) {
                FUNC_3(VAR_16 - 2 - 1 * VAR_4->uv_stride, VAR_16 - 2, VAR_4->uv_stride);
                FUNC_3(VAR_17 - 2 - 1 * VAR_4->uv_stride, VAR_17 - 2, VAR_4->uv_stride);
                FUNC_3(VAR_16 - 2 - 2 * VAR_4->uv_stride, VAR_16 - 2, VAR_4->uv_stride);
                FUNC_3(VAR_17 - 2 - 2 * VAR_4->uv_stride, VAR_17 - 2, VAR_4->uv_stride);
            } else if (VAR_7 == VAR_9 - 1) {
                FUNC_3(VAR_16 - 2 + 1 * VAR_4->uv_stride, VAR_16 - 2, VAR_4->uv_stride);
                FUNC_3(VAR_17 - 2 + 1 * VAR_4->uv_stride, VAR_17 - 2, VAR_4->uv_stride);
                FUNC_3(VAR_16 - 2 + 2 * VAR_4->uv_stride, VAR_16 - 2, VAR_4->uv_stride);
                FUNC_3(VAR_17 - 2 + 2 * VAR_4->uv_stride, VAR_17 - 2, VAR_4->uv_stride);
            }

            VAR_16 += VAR_4->uv_stride;
            VAR_17 += VAR_4->uv_stride;
        }
        VAR_18 += VAR_5->linesize[0];
    }

    return VAR_14;
}

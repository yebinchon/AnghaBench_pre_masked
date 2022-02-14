
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int width; int height; TYPE_3__* priv_data; } ;
struct TYPE_12__ {TYPE_2__* run_model3; TYPE_1__* op_model3; int rc; int gb; } ;
struct TYPE_11__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_10__ {int dectab; int cnts; int * freqs; int cntsum; } ;
typedef TYPE_3__ SCPRContext ;
typedef int RangeCoder ;
typedef int GetByteContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_4__*,int,int,int*,int*,int,int*,int,int*,int*,int,int,int*,int*) ;
 int FUNC_2 (TYPE_3__*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (TYPE_3__*,int,int *,int ,int ,int ,int ,int*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_1, uint32_t *VAR_2, int VAR_3)
{
    SCPRContext *VAR_4 = VAR_1->priv_data;
    GetByteContext *VAR_5 = &VAR_4->gb;
    RangeCoder *VAR_6 = &VAR_4->rc;
    int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    int VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14;
    uint32_t VAR_15 = VAR_3 - VAR_1->width;
    uint32_t VAR_16 = 0, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    FUNC_0(VAR_5, 1);
    FUNC_4(VAR_6, VAR_5);
    FUNC_5(VAR_4);

    while (VAR_9 < VAR_1->width + 1) {
        VAR_14 = FUNC_2(VAR_4, &VAR_20, &VAR_21, &VAR_22, &VAR_7, &VAR_8);
        if (VAR_14 < 0)
            return VAR_14;
        VAR_14 = FUNC_3(VAR_4, 255, &VAR_4->run_model3[0].cntsum,
                            VAR_4->run_model3[0].freqs[0],
                            VAR_4->run_model3[0].freqs[1],
                            VAR_4->run_model3[0].cnts,
                            VAR_4->run_model3[0].dectab, &VAR_10);
        if (VAR_14 < 0)
            return VAR_14;
        if (VAR_10 <= 0)
            return VAR_0;

        VAR_16 = (VAR_22 << 16) + (VAR_21 << 8) + VAR_20;
        VAR_9 += VAR_10;
        while (VAR_10-- > 0) {
            if (VAR_12 >= VAR_1->height)
                return VAR_0;

            VAR_2[VAR_12 * VAR_3 + VAR_13] = VAR_16;
            VAR_17 = VAR_13;
            VAR_18 = VAR_12;
            VAR_13++;
            if (VAR_13 >= VAR_1->width) {
                VAR_13 = 0;
                VAR_12++;
            }
        }
    }
    VAR_11 = -VAR_3 - 1;
    VAR_19 = 0;

    while (VAR_13 < VAR_1->width && VAR_12 < VAR_1->height) {
        VAR_14 = FUNC_3(VAR_4, 5, &VAR_4->op_model3[VAR_19].cntsum,
                            VAR_4->op_model3[VAR_19].freqs[0],
                            VAR_4->op_model3[VAR_19].freqs[1],
                            VAR_4->op_model3[VAR_19].cnts,
                            VAR_4->op_model3[VAR_19].dectab, &VAR_19);
        if (VAR_14 < 0)
            return VAR_14;
        if (VAR_19 == 0) {
            VAR_14 = FUNC_2(VAR_4, &VAR_20, &VAR_21, &VAR_22, &VAR_7, &VAR_8);
            if (VAR_14 < 0)
                return VAR_14;
            VAR_16 = (VAR_22 << 16) + (VAR_21 << 8) + VAR_20;
        }
        if (VAR_19 > 5)
            return VAR_0;
        VAR_14 = FUNC_3(VAR_4, 255, &VAR_4->run_model3[VAR_19].cntsum,
                            VAR_4->run_model3[VAR_19].freqs[0],
                            VAR_4->run_model3[VAR_19].freqs[1],
                            VAR_4->run_model3[VAR_19].cnts,
                            VAR_4->run_model3[VAR_19].dectab, &VAR_10);
        if (VAR_14 < 0)
            return VAR_14;
        if (VAR_10 <= 0)
            return VAR_0;

        VAR_14 = FUNC_1(VAR_1, VAR_19, VAR_10, &VAR_13, &VAR_12, VAR_16,
                           VAR_2, VAR_3, &VAR_17, &VAR_18,
                           VAR_15, VAR_11, &VAR_7, &VAR_8);
        if (VAR_14 < 0)
            return VAR_14;
    }

    return 0;
}

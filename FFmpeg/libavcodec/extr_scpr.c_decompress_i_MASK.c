
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int * run_model; int * op_model; int rc; int gb; } ;
typedef TYPE_1__ SCPRContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int*,int*,int,int*,int,int*,int*,int,int,int*,int*) ;
 int FUNC_2 (TYPE_1__*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_1, uint32_t *VAR_2, int VAR_3)
{
    SCPRContext *VAR_4 = VAR_1->priv_data;
    GetByteContext *VAR_5 = &VAR_4->gb;
    int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
    int VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13;
    uint32_t VAR_14 = 0, VAR_15, VAR_16, VAR_17, VAR_18 = VAR_3 - VAR_1->width;
    uint32_t VAR_19, VAR_20, VAR_21;

    FUNC_5(VAR_4);
    FUNC_0(VAR_5, 2);
    FUNC_4(&VAR_4->rc, VAR_5);

    while (VAR_8 < VAR_1->width + 1) {
        VAR_13 = FUNC_2(VAR_4, &VAR_15, &VAR_16, &VAR_17, &VAR_6, &VAR_7);
        if (VAR_13 < 0)
            return VAR_13;

        VAR_13 = FUNC_3(VAR_4, VAR_4->run_model[0], 256, 400, &VAR_9);
        if (VAR_13 < 0)
            return VAR_13;
        if (VAR_9 <= 0)
            return VAR_0;

        VAR_14 = (VAR_17 << 16) + (VAR_16 << 8) + VAR_15;
        VAR_8 += VAR_9;
        while (VAR_9-- > 0) {
            if (VAR_11 >= VAR_1->height)
                return VAR_0;

            VAR_2[VAR_11 * VAR_3 + VAR_12] = VAR_14;
            VAR_19 = VAR_12;
            VAR_20 = VAR_11;
            VAR_12++;
            if (VAR_12 >= VAR_1->width) {
                VAR_12 = 0;
                VAR_11++;
            }
        }
    }
    VAR_10 = -VAR_3 - 1;
    VAR_21 = 0;

    while (VAR_12 < VAR_1->width && VAR_11 < VAR_1->height) {
        VAR_13 = FUNC_3(VAR_4, VAR_4->op_model[VAR_21], 6, 1000, &VAR_21);
        if (VAR_13 < 0)
            return VAR_13;
        if (VAR_21 == 0) {
            VAR_13 = FUNC_2(VAR_4, &VAR_15, &VAR_16, &VAR_17, &VAR_6, &VAR_7);
            if (VAR_13 < 0)
                return VAR_13;

            VAR_14 = (VAR_17 << 16) + (VAR_16 << 8) + VAR_15;
        }
        if (VAR_21 > 5)
            return VAR_0;
        VAR_13 = FUNC_3(VAR_4, VAR_4->run_model[VAR_21], 256, 400, &VAR_9);
        if (VAR_13 < 0)
            return VAR_13;
        if (VAR_9 <= 0)
            return VAR_0;

        VAR_13 = FUNC_1(VAR_1, VAR_21, VAR_9, &VAR_12, &VAR_11, VAR_14,
                           VAR_2, VAR_3, &VAR_19, &VAR_20,
                           VAR_18, VAR_10, &VAR_6, &VAR_7);
        if (VAR_13 < 0)
            return VAR_13;
    }

    return 0;
}

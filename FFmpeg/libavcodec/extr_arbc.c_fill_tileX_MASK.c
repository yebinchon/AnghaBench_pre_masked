
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int gb; } ;
struct TYPE_7__ {int height; int width; TYPE_3__* priv_data; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ ARBCContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0, int VAR_1, int VAR_2,
                       int VAR_3, AVFrame *VAR_4)
{
    ARBCContext *VAR_5 = VAR_0->priv_data;
    GetByteContext *VAR_6 = &VAR_5->gb;
    const int VAR_7 = VAR_2 / 4;
    const int VAR_8 = VAR_1 / 4;
    int VAR_9 = FUNC_3(VAR_6);
    int VAR_10 = VAR_0->height - 1;
    int VAR_11 = 0;

    if ((VAR_0->width / VAR_1 + 1) * (VAR_0->height / VAR_2 + 1) < VAR_9)
        return 0;

    for (int VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
        int VAR_13 = FUNC_2(VAR_6);
        int VAR_14 = FUNC_2(VAR_6);
        uint16_t VAR_15 = FUNC_3(VAR_6);
        int VAR_16 = VAR_13 * VAR_2, VAR_17 = VAR_14 * VAR_1;
        int VAR_18 = VAR_16 + VAR_2, VAR_19 = VAR_17 + VAR_1;

        if (VAR_17 >= VAR_0->width || VAR_16 >= VAR_0->height)
            continue;

        for (int VAR_20 = VAR_16; VAR_20 < VAR_18; VAR_20 += VAR_7) {
            for (int VAR_21 = VAR_17; VAR_21 < VAR_19; VAR_21 += VAR_8) {
                if (VAR_15 & 0x8000U) {
                    for (int VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
                        for (int VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
                            if (VAR_20 + VAR_22 >= VAR_0->height || VAR_21 + VAR_23 >= VAR_0->width)
                                continue;
                            FUNC_0(&VAR_4->data[0][VAR_4->linesize[0] * (VAR_10 - (VAR_20 + VAR_22)) + 3 * (VAR_21 + VAR_23)], VAR_3);
                        }
                    }
                    VAR_11 += FUNC_1(VAR_7, VAR_0->height - VAR_20) * FUNC_1(VAR_8, VAR_0->width - VAR_21);
                }
                VAR_15 = VAR_15 << 1;
            }
        }
    }
    return VAR_11;
}

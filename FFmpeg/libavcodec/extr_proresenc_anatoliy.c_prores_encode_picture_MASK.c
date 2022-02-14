
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int width; int height; size_t profile; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int is_interlaced; } ;
typedef TYPE_1__ ProresContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int**,int) ;
 int FUNC_4 (TYPE_2__*,int const*,int,int,int,int*,int,int,int*,int ,int const) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2, const AVFrame *VAR_3,
        uint8_t *VAR_4, const int VAR_5, const int VAR_6, const int VAR_7)
{
    ProresContext *VAR_8 = VAR_2->priv_data;
    int VAR_9 = (VAR_2->width + 15) >> 4;
    int VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20;
    uint8_t *VAR_21, *VAR_22;
    int VAR_23 = 0, VAR_24 = VAR_9;

    if (!VAR_8->is_interlaced) {
        VAR_16 = (VAR_2->height + 15) >> 4;
        VAR_18 = VAR_16;
    } else {
        if (VAR_7) {
            VAR_17 = (VAR_2->height + 1) / 2;
        } else {
            VAR_17 = VAR_2->height / 2;
        }
        VAR_16 = (VAR_17 + 15) >> 4;
        VAR_18 = VAR_16;
    }

    for (VAR_12 = FUNC_2(VAR_0); VAR_12 >= 0; --VAR_12) {
        VAR_23 += VAR_24 >> VAR_12;
        VAR_24 &= (1 << VAR_12) - 1;
    }

    VAR_15 = VAR_1[VAR_2->profile];
    VAR_10 = 8; VAR_14 = VAR_5 - VAR_10;
    VAR_22 = VAR_4 + VAR_10;
    VAR_21 = VAR_22 + (VAR_23 * VAR_16 * 2);
    for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
        int VAR_25 = 0;
        int VAR_26 = VAR_0;
        while (VAR_25 < VAR_9) {
            while (VAR_9 - VAR_25 < VAR_26)
                VAR_26 >>= 1;

            VAR_19 = (VAR_2->height & 0xf) && (VAR_13 == VAR_18 - 1);
            VAR_20 = (VAR_2->width & 0xf) && (VAR_25 + VAR_26 == VAR_9);

            VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_25, VAR_13, VAR_26,
                    VAR_21, VAR_14, VAR_19 || VAR_20, &VAR_15, VAR_8->is_interlaced, VAR_7);
            if (VAR_11 < 0){
                return VAR_11;
            }

            FUNC_3(&VAR_22, VAR_11);
            VAR_21 += VAR_11;
            VAR_14 -= VAR_11;
            VAR_25 += VAR_26;
        }
    }

    VAR_4[0] = VAR_10 << 3;
    FUNC_1(VAR_4 + 1, VAR_21 - VAR_4);
    FUNC_0(VAR_4 + 5, VAR_23 * VAR_16);
    VAR_4[7] = FUNC_2(VAR_0) << 4;

    return VAR_21 - VAR_4;
}

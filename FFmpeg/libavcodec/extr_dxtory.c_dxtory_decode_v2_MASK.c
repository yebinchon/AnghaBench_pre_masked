
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int (* setup_lru_func ) (int **) ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef scalar_t__ (* decode_slice_func ) (int *,int *,int,int,int **) ;
struct TYPE_7__ {int height; int width; int discard_damaged_percentage; int pix_fmt; } ;
typedef int GetByteContext ;
typedef int GetBitContext ;
typedef int AVFrame ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int const*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_1__*,int const*,int,int *,int*,int*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_1, AVFrame *VAR_2,
                            const uint8_t *VAR_3, int VAR_4,
                            decode_slice_func VAR_5,
                            setup_lru_func VAR_6,
                            enum AVPixelFormat VAR_7)
{
    GetByteContext VAR_8, VAR_9;
    GetBitContext VAR_10;
    int VAR_11, VAR_12, VAR_13 = 0;
    uint32_t VAR_14, VAR_15;
    uint64_t VAR_16;
    uint8_t VAR_17[3][8];
    int VAR_18;

    VAR_18 = FUNC_5(VAR_1, VAR_3, VAR_4, &VAR_8, &VAR_11, &VAR_14);
    if (VAR_18 < 0)
        return VAR_18;

    VAR_16 = VAR_14;
    VAR_9 = VAR_8;
    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        VAR_15 = FUNC_1(&VAR_9);

        if (VAR_15 <= 16 + (VAR_1->height * VAR_1->width / (8 * VAR_11)))
            return VAR_0;
        VAR_16 += VAR_15;
    }

    if (VAR_16 - VAR_1->discard_damaged_percentage*VAR_16/100 > VAR_4)
        return VAR_0;

    VAR_1->pix_fmt = VAR_7;
    if ((VAR_18 = FUNC_3(VAR_1, VAR_2, 0)) < 0)
        return VAR_18;

    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        VAR_15 = FUNC_1(&VAR_8);

        VAR_6(VAR_17);

        VAR_18 = FUNC_2(VAR_1, VAR_3, VAR_4, VAR_15, VAR_14);
        if (VAR_18 < 0)
            return VAR_18;

        if ((VAR_18 = FUNC_4(&VAR_10, VAR_3 + VAR_14 + 16, VAR_15 - 16)) < 0)
            return VAR_18;

        VAR_13 += VAR_5(&VAR_10, VAR_2, VAR_13, VAR_1->height - VAR_13, VAR_17);

        VAR_14 += VAR_15;
    }

    if (VAR_1->height - VAR_13) {
        FUNC_0(VAR_1, "Not enough slice data available");
    }

    return 0;
}

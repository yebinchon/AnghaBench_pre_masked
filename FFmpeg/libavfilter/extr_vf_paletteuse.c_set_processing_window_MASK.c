
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef enum diff_mode { ____Placeholder_diff_mode } diff_mode ;
struct TYPE_6__ {int width; int height; int* linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_1 (int *,int const*,int const) ;

__attribute__((used)) static void FUNC_2(enum diff_mode VAR_1,
                                  const AVFrame *VAR_2, const AVFrame *VAR_3,
                                  const AVFrame *VAR_4, AVFrame *VAR_5,
                                  int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
    int VAR_10 = 0, VAR_11 = 0;
    int VAR_12 = VAR_3->width;
    int VAR_13 = VAR_3->height;

    if (VAR_2->data[0] && VAR_1 == VAR_0) {
        int VAR_14;
        int VAR_15 = VAR_3->width - 1,
            VAR_16 = VAR_3->height - 1;
        const uint32_t *VAR_17 = (const uint32_t *)VAR_2->data[0];
        const uint32_t *VAR_18 = (const uint32_t *)VAR_3->data[0];
        const uint8_t *VAR_19 = VAR_4->data[0];
        uint8_t *VAR_20 = VAR_5->data[0];

        const int VAR_21 = VAR_2->linesize[0] >> 2;
        const int VAR_22 = VAR_3->linesize[0] >> 2;
        const int VAR_23 = VAR_4->linesize[0];
        const int VAR_24 = VAR_5->linesize[0];


        while (VAR_11 < VAR_16 && !FUNC_0(VAR_17 + VAR_11*VAR_21,
                                          VAR_18 + VAR_11*VAR_22,
                                          VAR_3->width * 4)) {
            FUNC_1(VAR_20 + VAR_11*VAR_24,
                   VAR_19 + VAR_11*VAR_23,
                   VAR_5->width);
            VAR_11++;
        }
        while (VAR_16 > VAR_11 && !FUNC_0(VAR_17 + VAR_16*VAR_21,
                                          VAR_18 + VAR_16*VAR_22,
                                          VAR_3->width * 4)) {
            FUNC_1(VAR_20 + VAR_16*VAR_24,
                   VAR_19 + VAR_16*VAR_23,
                   VAR_5->width);
            VAR_16--;
        }

        VAR_13 = VAR_16 + 1 - VAR_11;


        while (VAR_10 < VAR_15) {
            int VAR_25 = 1;
            for (VAR_14 = VAR_11; VAR_14 <= VAR_16; VAR_14++) {
                if (VAR_17[VAR_14*VAR_21 + VAR_10] != VAR_18[VAR_14*VAR_22 + VAR_10]) {
                    VAR_25 = 0;
                    break;
                }
            }
            if (!VAR_25)
                break;
            VAR_10++;
        }
        while (VAR_15 > VAR_10) {
            int VAR_26 = 1;
            for (VAR_14 = VAR_11; VAR_14 <= VAR_16; VAR_14++) {
                if (VAR_17[VAR_14*VAR_21 + VAR_15] != VAR_18[VAR_14*VAR_22 + VAR_15]) {
                    VAR_26 = 0;
                    break;
                }
            }
            if (!VAR_26)
                break;
            VAR_15--;
        }
        VAR_12 = VAR_15 + 1 - VAR_10;

        if (VAR_10) {
            for (VAR_14 = VAR_11; VAR_14 <= VAR_16; VAR_14++)
                FUNC_1(VAR_20 + VAR_14*VAR_24,
                       VAR_19 + VAR_14*VAR_23, VAR_10);
        }
        if (VAR_15 != VAR_3->width - 1) {
            const int VAR_27 = VAR_3->width - 1 - VAR_15;
            for (VAR_14 = VAR_11; VAR_14 <= VAR_16; VAR_14++)
                FUNC_1(VAR_20 + VAR_14*VAR_24 + VAR_15 + 1,
                       VAR_19 + VAR_14*VAR_23 + VAR_15 + 1,
                       VAR_27);
        }
    }
    *VAR_6 = VAR_10;
    *VAR_7 = VAR_11;
    *VAR_8 = VAR_12;
    *VAR_9 = VAR_13;
}

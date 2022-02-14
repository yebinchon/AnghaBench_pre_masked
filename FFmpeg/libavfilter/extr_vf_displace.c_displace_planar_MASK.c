
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_8__ {int nb_planes; int* height; int* width; int edge; int * blank; } ;
typedef TYPE_1__ DisplaceContext ;
typedef TYPE_2__ AVFrame ;






 int FUNC_0 (int ,int ,int const) ;

__attribute__((used)) static void FUNC_1(DisplaceContext *VAR_0, const AVFrame *VAR_1,
                            const AVFrame *VAR_2, const AVFrame *VAR_3,
                            AVFrame *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_0->nb_planes; VAR_5++) {
        const int VAR_8 = VAR_0->height[VAR_5];
        const int VAR_9 = VAR_0->width[VAR_5];
        const int VAR_10 = VAR_4->linesize[VAR_5];
        const int VAR_11 = VAR_1->linesize[VAR_5];
        const int VAR_12 = VAR_2->linesize[VAR_5];
        const int VAR_13 = VAR_3->linesize[VAR_5];
        const uint8_t *VAR_14 = VAR_1->data[VAR_5];
        const uint8_t *VAR_15 = VAR_3->data[VAR_5];
        const uint8_t *VAR_16 = VAR_2->data[VAR_5];
        uint8_t *VAR_17 = VAR_4->data[VAR_5];
        const uint8_t VAR_18 = VAR_0->blank[VAR_5];

        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
            switch (VAR_0->edge) {
            case 131:
                for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
                    int VAR_19 = VAR_7 + VAR_15[VAR_6] - 128;
                    int VAR_20 = VAR_6 + VAR_16[VAR_6] - 128;

                    if (VAR_19 < 0 || VAR_19 >= VAR_8 || VAR_20 < 0 || VAR_20 >= VAR_9)
                        VAR_17[VAR_6] = VAR_18;
                    else
                        VAR_17[VAR_6] = VAR_14[VAR_19 * VAR_11 + VAR_20];
                }
                break;
            case 129:
                for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
                    int VAR_21 = FUNC_0(VAR_7 + VAR_15[VAR_6] - 128, 0, VAR_8 - 1);
                    int VAR_22 = FUNC_0(VAR_6 + VAR_16[VAR_6] - 128, 0, VAR_9 - 1);
                    VAR_17[VAR_6] = VAR_14[VAR_21 * VAR_11 + VAR_22];
                }
                break;
            case 128:
                for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
                    int VAR_23 = (VAR_7 + VAR_15[VAR_6] - 128) % VAR_8;
                    int VAR_24 = (VAR_6 + VAR_16[VAR_6] - 128) % VAR_9;

                    if (VAR_23 < 0)
                        VAR_23 += VAR_8;
                    if (VAR_24 < 0)
                        VAR_24 += VAR_9;
                    VAR_17[VAR_6] = VAR_14[VAR_23 * VAR_11 + VAR_24];
                }
                break;
            case 130:
                for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
                    int VAR_25 = VAR_7 + VAR_15[VAR_6] - 128;
                    int VAR_26 = VAR_6 + VAR_16[VAR_6] - 128;

                    if (VAR_25 < 0)
                        VAR_25 = (-VAR_25) % VAR_8;
                    if (VAR_26 < 0)
                        VAR_26 = (-VAR_26) % VAR_9;
                    if (VAR_25 >= VAR_8)
                        VAR_25 = VAR_8 - (VAR_25 % VAR_8) - 1;
                    if (VAR_26 >= VAR_9)
                        VAR_26 = VAR_9 - (VAR_26 % VAR_9) - 1;
                    VAR_17[VAR_6] = VAR_14[VAR_25 * VAR_11 + VAR_26];
                }
                break;
            }

            VAR_15 += VAR_13;
            VAR_16 += VAR_12;
            VAR_17 += VAR_10;
        }
    }
}

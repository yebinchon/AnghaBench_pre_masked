
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_8__ {int step; int* height; int* width; int edge; int nb_components; int * blank; } ;
typedef TYPE_1__ DisplaceContext ;
typedef TYPE_2__ AVFrame ;






 int FUNC_0 (int ,int ,int const) ;

__attribute__((used)) static void FUNC_1(DisplaceContext *VAR_0, const AVFrame *VAR_1,
                            const AVFrame *VAR_2, const AVFrame *VAR_3,
                            AVFrame *VAR_4)
{
    const int VAR_5 = VAR_0->step;
    const int VAR_6 = VAR_0->height[0];
    const int VAR_7 = VAR_0->width[0];
    const int VAR_8 = VAR_4->linesize[0];
    const int VAR_9 = VAR_1->linesize[0];
    const int VAR_10 = VAR_2->linesize[0];
    const int VAR_11 = VAR_3->linesize[0];
    const uint8_t *VAR_12 = VAR_1->data[0];
    const uint8_t *VAR_13 = VAR_3->data[0];
    const uint8_t *VAR_14 = VAR_2->data[0];
    const uint8_t *VAR_15 = VAR_0->blank;
    uint8_t *VAR_16 = VAR_4->data[0];
    int VAR_17, VAR_18, VAR_19;

    for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
        switch (VAR_0->edge) {
        case 131:
            for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
                for (VAR_17 = 0; VAR_17 < VAR_0->nb_components; VAR_17++) {
                    int VAR_20 = VAR_19 + (VAR_13[VAR_18 * VAR_5 + VAR_17] - 128);
                    int VAR_21 = VAR_18 + (VAR_14[VAR_18 * VAR_5 + VAR_17] - 128);

                    if (VAR_20 < 0 || VAR_20 >= VAR_6 || VAR_21 < 0 || VAR_21 >= VAR_7)
                        VAR_16[VAR_18 * VAR_5 + VAR_17] = VAR_15[VAR_17];
                    else
                        VAR_16[VAR_18 * VAR_5 + VAR_17] = VAR_12[VAR_20 * VAR_9 + VAR_21 * VAR_5 + VAR_17];
                }
            }
            break;
        case 129:
            for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
                for (VAR_17 = 0; VAR_17 < VAR_0->nb_components; VAR_17++) {
                    int VAR_22 = FUNC_0(VAR_19 + (VAR_13[VAR_18 * VAR_5 + VAR_17] - 128), 0, VAR_6 - 1);
                    int VAR_23 = FUNC_0(VAR_18 + (VAR_14[VAR_18 * VAR_5 + VAR_17] - 128), 0, VAR_7 - 1);

                    VAR_16[VAR_18 * VAR_5 + VAR_17] = VAR_12[VAR_22 * VAR_9 + VAR_23 * VAR_5 + VAR_17];
                }
            }
            break;
        case 128:
            for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
                for (VAR_17 = 0; VAR_17 < VAR_0->nb_components; VAR_17++) {
                    int VAR_24 = (VAR_19 + (VAR_13[VAR_18 * VAR_5 + VAR_17] - 128)) % VAR_6;
                    int VAR_25 = (VAR_18 + (VAR_14[VAR_18 * VAR_5 + VAR_17] - 128)) % VAR_7;

                    if (VAR_24 < 0)
                        VAR_24 += VAR_6;
                    if (VAR_25 < 0)
                        VAR_25 += VAR_7;
                    VAR_16[VAR_18 * VAR_5 + VAR_17] = VAR_12[VAR_24 * VAR_9 + VAR_25 * VAR_5 + VAR_17];
                }
            }
            break;
        case 130:
            for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
                for (VAR_17 = 0; VAR_17 < VAR_0->nb_components; VAR_17++) {
                    int VAR_26 = VAR_19 + VAR_13[VAR_18 * VAR_5 + VAR_17] - 128;
                    int VAR_27 = VAR_18 + VAR_14[VAR_18 * VAR_5 + VAR_17] - 128;

                    if (VAR_26 < 0)
                        VAR_26 = (-VAR_26) % VAR_6;
                    if (VAR_27 < 0)
                        VAR_27 = (-VAR_27) % VAR_7;
                    if (VAR_26 >= VAR_6)
                        VAR_26 = VAR_6 - (VAR_26 % VAR_6) - 1;
                    if (VAR_27 >= VAR_7)
                        VAR_27 = VAR_7 - (VAR_27 % VAR_7) - 1;
                    VAR_16[VAR_18 * VAR_5 + VAR_17] = VAR_12[VAR_26 * VAR_9 + VAR_27 * VAR_5 + VAR_17];
                }
            }
            break;
        }

        VAR_13 += VAR_11;
        VAR_14 += VAR_10;
        VAR_16 += VAR_8;
    }
}

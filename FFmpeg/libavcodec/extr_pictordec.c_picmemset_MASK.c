
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_6__ {unsigned int** data; int* linesize; } ;
struct TYPE_5__ {int width; int height; int nb_planes; } ;
typedef TYPE_1__ PicContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (unsigned int*,int,int) ;

__attribute__((used)) static void FUNC_1(PicContext *VAR_0, AVFrame *VAR_1, unsigned VAR_2, int VAR_3,
                      int *VAR_4, int *VAR_5, int *VAR_6, int VAR_7)
{
    uint8_t *VAR_8;
    int VAR_9 = *VAR_6 * VAR_7;
    unsigned VAR_10 = ((1U << VAR_7) - 1) << VAR_9;
    int VAR_11 = *VAR_4;
    int VAR_12 = *VAR_5;
    int VAR_13 = *VAR_6;
    int VAR_14 = 8/VAR_7;
    VAR_2 <<= VAR_9;

    VAR_8 = VAR_1->data[0] + VAR_12 * VAR_1->linesize[0];
    while (VAR_3 > 0) {
        int VAR_15;
        for (VAR_15 = 8-VAR_7; VAR_15 >= 0; VAR_15 -= VAR_7) {
            VAR_8[VAR_11] |= (VAR_2 >> VAR_15) & VAR_10;
            VAR_11 += 1;
            while (VAR_11 == VAR_0->width) {
                VAR_12 -= 1;
                VAR_11 = 0;
                if (VAR_12 < 0) {
                   VAR_12 = VAR_0->height - 1;
                   VAR_13 += 1;
                   if (VAR_13 >= VAR_0->nb_planes)
                       goto end;
                   VAR_2 <<= VAR_7;
                   VAR_10 <<= VAR_7;
                }
                VAR_8 = VAR_1->data[0] + VAR_12 * VAR_1->linesize[0];
                if (VAR_0->nb_planes == 1 &&
                    VAR_3*VAR_14 >= VAR_0->width &&
                    VAR_14 < VAR_0->width &&
                    VAR_0->width % VAR_14 == 0
                    ) {
                    for (; VAR_11 < VAR_14; VAR_11 ++) {
                        VAR_15 = (VAR_15 < VAR_7 ? 8 : VAR_15) - VAR_7;
                        VAR_8[VAR_11] |= (VAR_2 >> VAR_15) & VAR_10;
                    }
                    FUNC_0(VAR_8+VAR_11, VAR_14, VAR_0->width - VAR_11);
                    VAR_3 -= VAR_0->width / VAR_14;
                    VAR_11 = VAR_0->width;
                }
            }
        }
        VAR_3--;
    }
end:
    *VAR_4 = VAR_11;
    *VAR_5 = VAR_12;
    *VAR_6 = VAR_13;
}

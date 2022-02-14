
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int depth; int pixel_depth; int*** plane; int linesize; } ;
typedef TYPE_1__ OWDenoiseContext ;


 int FUNC_0 (double*,double**,double**,int,int,int,int) ;
 int FUNC_1 (int**,int*,int**,int,int,int,int) ;
 double** VAR_0 ;

__attribute__((used)) static void FUNC_2(OWDenoiseContext *VAR_1,
                   uint8_t *VAR_2, int VAR_3,
                   const uint8_t *VAR_4, int VAR_5,
                   int VAR_6, int VAR_7, double VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = VAR_1->depth;

    while (1<<VAR_13 > VAR_6 || 1<<VAR_13 > VAR_7)
        VAR_13--;

    if (VAR_1->pixel_depth <= 8) {
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
            for(VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
                VAR_1->plane[0][0][VAR_10*VAR_1->linesize + VAR_9] = VAR_4[VAR_10*VAR_5 + VAR_9];
    } else {
        const uint16_t *VAR_14 = (const uint16_t *)VAR_4;

        VAR_5 /= 2;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
            for(VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
                VAR_1->plane[0][0][VAR_10*VAR_1->linesize + VAR_9] = VAR_14[VAR_10*VAR_5 + VAR_9];
    }

    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
        FUNC_1(VAR_1->plane[VAR_11 + 1], VAR_1->plane[VAR_11][0], VAR_1->plane[0] + 1, VAR_1->linesize, 1<<VAR_11, VAR_6, VAR_7);

    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
        for (VAR_12 = 1; VAR_12 < 4; VAR_12++) {
            for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
                for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
                    double VAR_15 = VAR_1->plane[VAR_11 + 1][VAR_12][VAR_10*VAR_1->linesize + VAR_9];
                    if (VAR_15 > VAR_8) VAR_15 -= VAR_8;
                    else if (VAR_15 < -VAR_8) VAR_15 += VAR_8;
                    else VAR_15 = 0;
                    VAR_1->plane[VAR_11 + 1][VAR_12][VAR_9 + VAR_10*VAR_1->linesize] = VAR_15;
                }
            }
        }
    }
    for (VAR_11 = VAR_13-1; VAR_11 >= 0; VAR_11--)
        FUNC_0(VAR_1->plane[VAR_11][0], VAR_1->plane[VAR_11 + 1], VAR_1->plane[0] + 1, VAR_1->linesize, 1<<VAR_11, VAR_6, VAR_7);

    if (VAR_1->pixel_depth <= 8) {
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
                VAR_11 = VAR_1->plane[0][0][VAR_10*VAR_1->linesize + VAR_9] + VAR_0[VAR_9&7][VAR_10&7]*(1.0/64) + 1.0/128;
                if ((unsigned)VAR_11 > 255U) VAR_11 = ~(VAR_11 >> 31);
                VAR_2[VAR_10*VAR_3 + VAR_9] = VAR_11;
            }
        }
    } else {
        uint16_t *VAR_16 = (uint16_t *)VAR_2;

        VAR_3 /= 2;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
                VAR_11 = VAR_1->plane[0][0][VAR_10*VAR_1->linesize + VAR_9];
                VAR_16[VAR_10*VAR_3 + VAR_9] = VAR_11;
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* x; int* y; int n; } ;
typedef int SiprMode ;
typedef TYPE_1__ AMRFixed ;






__attribute__((used)) static void FUNC_0(AMRFixed *VAR_0, const int16_t *VAR_1,
                                SiprMode VAR_2, int VAR_3)
{
    int VAR_4;

    switch (VAR_2) {
    case 129:
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
            VAR_0->x[VAR_4] = 3 * (VAR_1[VAR_4] & 0xf) + VAR_4;
            VAR_0->y[VAR_4] = VAR_1[VAR_4] & 0x10 ? -1 : 1;
        }
        VAR_0->n = 3;
        break;
    case 128:
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
            VAR_0->x[2*VAR_4 ] = 3 * ((VAR_1[VAR_4] >> 4) & 0xf) + VAR_4;
            VAR_0->x[2*VAR_4 + 1] = 3 * ( VAR_1[VAR_4] & 0xf) + VAR_4;

            VAR_0->y[2*VAR_4 ] = (VAR_1[VAR_4] & 0x100) ? -1.0: 1.0;

            VAR_0->y[2*VAR_4 + 1] =
                (VAR_0->x[2*VAR_4 + 1] < VAR_0->x[2*VAR_4]) ?
                -VAR_0->y[2*VAR_4 ] : VAR_0->y[2*VAR_4];
        }

        VAR_0->n = 6;
        break;
    case 130:
    default:
        if (VAR_3) {
            int VAR_5 = (VAR_1[0] & 0x200) ? 2 : 0;
            int VAR_6 = VAR_1[0];

            for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
                int VAR_7 = (VAR_6 & 0x7) * 6 + 4 - VAR_4*2;

                VAR_0->y[VAR_4] = (VAR_5 + VAR_7) & 0x3 ? -1 : 1;
                VAR_0->x[VAR_4] = VAR_7;

                VAR_6 >>= 3;
            }
            VAR_0->n = 3;
        } else {
            int VAR_8 = (VAR_1[0] >> 8) & 1;

            VAR_0->x[0] = ((VAR_1[0] >> 4) & 15) * 3 + VAR_8;
            VAR_0->x[1] = ( VAR_1[0] & 15) * 3 + VAR_8 + 1;

            VAR_0->y[0] = VAR_1[0] & 0x200 ? -1 : 1;
            VAR_0->y[1] = -VAR_0->y[0];
            VAR_0->n = 2;
        }
        break;
    }
}

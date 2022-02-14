
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_5__ {int* x; int n; double* y; } ;
typedef TYPE_1__ AMRFixed ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,TYPE_1__*) ;
 int FUNC_2 (int const*,TYPE_1__*,int*,int,int) ;
 int* VAR_6 ;
 int const* VAR_7 ;

__attribute__((used)) static void FUNC_3(AMRFixed *VAR_8, const uint16_t *VAR_9,
                                const enum Mode VAR_10, const int VAR_11)
{
    FUNC_0(VAR_2 <= (signed)VAR_10 && VAR_10 <= VAR_1);

    if (VAR_10 == VAR_1) {
        FUNC_2(VAR_9, VAR_8, VAR_6, 5, 3);
    } else if (VAR_10 == VAR_0) {
        FUNC_1(VAR_9, VAR_8);
    } else {
        int *VAR_12 = VAR_8->x;
        int VAR_13, VAR_14;
        const int VAR_15 = VAR_9[0];

        if (VAR_10 <= VAR_3) {
            VAR_14 = ((VAR_15 >> 3) & 8) + (VAR_11 << 1);
            VAR_12[0] = ( VAR_15 & 7) * 5 + VAR_7[VAR_14];
            VAR_12[1] = ((VAR_15 >> 3) & 7) * 5 + VAR_7[VAR_14 + 1];
            VAR_8->n = 2;
        } else if (VAR_10 == VAR_4) {
            VAR_14 = ((VAR_15 & 1) << 1) + 1;
            VAR_12[0] = ((VAR_15 >> 1) & 7) * 5 + VAR_14;
            VAR_14 = (VAR_15 >> 4) & 3;
            VAR_12[1] = ((VAR_15 >> 6) & 7) * 5 + VAR_14 + (VAR_14 == 3 ? 1 : 0);
            VAR_8->n = VAR_12[0] == VAR_12[1] ? 1 : 2;
        } else if (VAR_10 == VAR_5) {
            VAR_12[0] = (VAR_15 & 7) * 5;
            VAR_14 = (VAR_15 >> 2) & 2;
            VAR_12[1] = ((VAR_15 >> 4) & 7) * 5 + VAR_14 + 1;
            VAR_14 = (VAR_15 >> 6) & 2;
            VAR_12[2] = ((VAR_15 >> 8) & 7) * 5 + VAR_14 + 2;
            VAR_8->n = 3;
        } else {
            VAR_12[0] = VAR_6[ VAR_15 & 7];
            VAR_12[1] = VAR_6[(VAR_15 >> 3) & 7] + 1;
            VAR_12[2] = VAR_6[(VAR_15 >> 6) & 7] + 2;
            VAR_14 = (VAR_15 >> 9) & 1;
            VAR_12[3] = VAR_6[(VAR_15 >> 10) & 7] + VAR_14 + 3;
            VAR_8->n = 4;
        }
        for (VAR_13 = 0; VAR_13 < VAR_8->n; VAR_13++)
            VAR_8->y[VAR_13] = (VAR_9[1] >> VAR_13) & 1 ? 1.0 : -1.0;
    }
}

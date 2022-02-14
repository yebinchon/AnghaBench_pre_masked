
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int n; int* x; float* y; } ;
typedef TYPE_1__ AMRFixed ;


 int FUNC_0 (int const,int*,int,int,int) ;

__attribute__((used)) static void FUNC_1(const int16_t *VAR_0,
                                   AMRFixed *VAR_1)
{
    int VAR_2[8];
    int VAR_3, VAR_4;

    FUNC_0(VAR_0[4], VAR_2, 0, 4, 1);
    FUNC_0(VAR_0[5], VAR_2, 2, 6, 5);



    VAR_4 = ((VAR_0[6] >> 2) * 25 + 12) >> 5;
    VAR_2[3] = VAR_4 % 5;
    VAR_2[7] = VAR_4 / 5;
    if (VAR_2[7] & 1)
        VAR_2[3] = 4 - VAR_2[3];
    VAR_2[3] = (VAR_2[3] << 1) + ( VAR_0[6] & 1);
    VAR_2[7] = (VAR_2[7] << 1) + ((VAR_0[6] >> 1) & 1);

    VAR_1->n = 8;
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        const int VAR_5 = (VAR_2[VAR_3] << 2) + VAR_3;
        const int VAR_6 = (VAR_2[VAR_3 + 4] << 2) + VAR_3;
        const float VAR_7 = VAR_0[VAR_3] ? -1.0 : 1.0;
        VAR_1->x[VAR_3 ] = VAR_5;
        VAR_1->x[VAR_3 + 4] = VAR_6;
        VAR_1->y[VAR_3 ] = VAR_7;
        VAR_1->y[VAR_3 + 4] = VAR_6 < VAR_5 ? -VAR_7 : VAR_7;
    }
}

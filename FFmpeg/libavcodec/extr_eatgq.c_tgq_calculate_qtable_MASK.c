
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* qtable; } ;
typedef TYPE_1__ TgqContext ;


 int const* VAR_0 ;

__attribute__((used)) static void FUNC_0(TgqContext *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    const int VAR_5 = (14 * (100 - VAR_2)) / 100 + 1;
    const int VAR_6 = (11 * (100 - VAR_2)) / 100 + 4;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            VAR_1->qtable[VAR_4 * 8 + VAR_3] = ((VAR_5 * (VAR_4 + VAR_3) / (7 + 7) + VAR_6) *
                                    VAR_0[VAR_4 * 8 + VAR_3]) >> (14 - 4);
}

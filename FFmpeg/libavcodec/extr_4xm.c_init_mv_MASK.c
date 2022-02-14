
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int* mv; } ;
typedef TYPE_1__ FourXContext ;


 int** VAR_0 ;

__attribute__((used)) static void FUNC_0(FourXContext *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        if (VAR_1->version > 1)
            VAR_1->mv[VAR_3] = VAR_0[VAR_3][0] + VAR_0[VAR_3][1] * VAR_2 / 2;
        else
            VAR_1->mv[VAR_3] = (VAR_3 & 15) - 8 + ((VAR_3 >> 4) - 8) * VAR_2 / 2;
    }
}

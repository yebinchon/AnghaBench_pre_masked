
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos_x; int pos_y; } ;
typedef TYPE_1__ SierpinskiContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(SierpinskiContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1 + VAR_0->pos_x;
    int VAR_4 = VAR_2 + VAR_0->pos_y;

    while (VAR_3 != 0 && VAR_4 != 0) {
        if (FUNC_0(VAR_3 % 3) == 1 && FUNC_0(VAR_4 % 3) == 1)
            return 1;

        VAR_3 /= 3;
        VAR_4 /= 3;
    }

    return 0;
}

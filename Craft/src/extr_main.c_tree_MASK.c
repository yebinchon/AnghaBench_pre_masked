
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int z; } ;
typedef TYPE_1__ Block ;


 int FUNC_0 (int,int,int,int) ;

void FUNC_1(Block *VAR_0) {
    int VAR_1 = VAR_0->x;
    int VAR_2 = VAR_0->y;
    int VAR_3 = VAR_0->z;
    for (int VAR_4 = VAR_2 + 3; VAR_4 < VAR_2 + 8; VAR_4++) {
        for (int VAR_5 = -3; VAR_5 <= 3; VAR_5++) {
            for (int VAR_6 = -3; VAR_6 <= 3; VAR_6++) {
                int VAR_7 = VAR_4 - (VAR_2 + 4);
                int VAR_8 = (VAR_5 * VAR_5) + (VAR_7 * VAR_7) + (VAR_6 * VAR_6);
                if (VAR_8 < 11) {
                    FUNC_0(VAR_1 + VAR_5, VAR_4, VAR_3 + VAR_6, 15);
                }
            }
        }
    }
    for (int VAR_9 = VAR_2; VAR_9 < VAR_2 + 7; VAR_9++) {
        FUNC_0(VAR_1, VAR_9, VAR_3, 5);
    }
}

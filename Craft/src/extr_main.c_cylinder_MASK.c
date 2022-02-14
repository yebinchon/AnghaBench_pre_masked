
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int x; int y; int z; int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_1__ Block ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int) ;

void FUNC_3(Block *VAR_0, Block *VAR_1, int VAR_2, int VAR_3) {
    if (VAR_0->w != VAR_1->w) {
        return;
    }
    int VAR_4 = VAR_0->w;
    int VAR_5 = FUNC_1(VAR_0->x, VAR_1->x);
    int VAR_6 = FUNC_1(VAR_0->y, VAR_1->y);
    int VAR_7 = FUNC_1(VAR_0->z, VAR_1->z);
    int VAR_8 = FUNC_0(VAR_0->x, VAR_1->x);
    int VAR_9 = FUNC_0(VAR_0->y, VAR_1->y);
    int VAR_10 = FUNC_0(VAR_0->z, VAR_1->z);
    int VAR_11 = VAR_5 != VAR_8;
    int VAR_12 = VAR_6 != VAR_9;
    int VAR_13 = VAR_7 != VAR_10;
    if (VAR_11 + VAR_12 + VAR_13 != 1) {
        return;
    }
    Block VAR_14 = {VAR_5, VAR_6, VAR_7, VAR_4};
    if (VAR_11) {
        for (int VAR_15 = VAR_5; VAR_15 <= VAR_8; VAR_15++) {
            VAR_14.x = VAR_15;
            FUNC_2(&VAR_14, VAR_2, VAR_3, 1, 0, 0);
        }
    }
    if (VAR_12) {
        for (int VAR_16 = VAR_6; VAR_16 <= VAR_9; VAR_16++) {
            VAR_14.y = VAR_16;
            FUNC_2(&VAR_14, VAR_2, VAR_3, 0, 1, 0);
        }
    }
    if (VAR_13) {
        for (int VAR_17 = VAR_7; VAR_17 <= VAR_10; VAR_17++) {
            VAR_14.z = VAR_17;
            FUNC_2(&VAR_14, VAR_2, VAR_3, 0, 0, 1);
        }
    }
}

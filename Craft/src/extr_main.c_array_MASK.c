
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int x; int y; int z; } ;
typedef TYPE_1__ Block ;


 int FUNC_0 (int,int,int,int) ;

void FUNC_1(Block *VAR_0, Block *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    if (VAR_0->w != VAR_1->w) {
        return;
    }
    int VAR_5 = VAR_0->w;
    int VAR_6 = VAR_1->x - VAR_0->x;
    int VAR_7 = VAR_1->y - VAR_0->y;
    int VAR_8 = VAR_1->z - VAR_0->z;
    VAR_2 = VAR_6 ? VAR_2 : 1;
    VAR_3 = VAR_7 ? VAR_3 : 1;
    VAR_4 = VAR_8 ? VAR_4 : 1;
    for (int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
        int VAR_10 = VAR_0->x + VAR_6 * VAR_9;
        for (int VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
            int VAR_12 = VAR_0->y + VAR_7 * VAR_11;
            for (int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
                int VAR_14 = VAR_0->z + VAR_8 * VAR_13;
                FUNC_0(VAR_10, VAR_12, VAR_14, VAR_5);
            }
        }
    }
}

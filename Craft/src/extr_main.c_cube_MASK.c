
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int z; int y; int x; } ;
typedef TYPE_1__ Block ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int,int,int) ;

void FUNC_3(Block *VAR_0, Block *VAR_1, int VAR_2) {
    if (VAR_0->w != VAR_1->w) {
        return;
    }
    int VAR_3 = VAR_0->w;
    int VAR_4 = FUNC_1(VAR_0->x, VAR_1->x);
    int VAR_5 = FUNC_1(VAR_0->y, VAR_1->y);
    int VAR_6 = FUNC_1(VAR_0->z, VAR_1->z);
    int VAR_7 = FUNC_0(VAR_0->x, VAR_1->x);
    int VAR_8 = FUNC_0(VAR_0->y, VAR_1->y);
    int VAR_9 = FUNC_0(VAR_0->z, VAR_1->z);
    int VAR_10 = (VAR_4 == VAR_7) + (VAR_5 == VAR_8) + (VAR_6 == VAR_9);
    for (int VAR_11 = VAR_4; VAR_11 <= VAR_7; VAR_11++) {
        for (int VAR_12 = VAR_5; VAR_12 <= VAR_8; VAR_12++) {
            for (int VAR_13 = VAR_6; VAR_13 <= VAR_9; VAR_13++) {
                if (!VAR_2) {
                    int VAR_14 = 0;
                    VAR_14 += VAR_11 == VAR_4 || VAR_11 == VAR_7;
                    VAR_14 += VAR_12 == VAR_5 || VAR_12 == VAR_8;
                    VAR_14 += VAR_13 == VAR_6 || VAR_13 == VAR_9;
                    if (VAR_14 <= VAR_10) {
                        continue;
                    }
                }
                FUNC_2(VAR_11, VAR_12, VAR_13, VAR_3);
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ z; scalar_t__ x; int ry; int rx; int y; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,scalar_t__,int ,scalar_t__,int ,int ,int*,int*,int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;

int FUNC_5(Player *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4) {
    State *VAR_5 = &VAR_0->state;
    int VAR_6 = FUNC_2(0, VAR_5->x, VAR_5->y, VAR_5->z, VAR_5->rx, VAR_5->ry, VAR_1, VAR_2, VAR_3);
    if (FUNC_3(VAR_6)) {
        int VAR_7, VAR_8, VAR_9;
        FUNC_2(1, VAR_5->x, VAR_5->y, VAR_5->z, VAR_5->rx, VAR_5->ry, &VAR_7, &VAR_8, &VAR_9);
        int VAR_10 = VAR_7 - *VAR_1;
        int VAR_11 = VAR_8 - *VAR_2;
        int VAR_12 = VAR_9 - *VAR_3;
        if (VAR_10 == -1 && VAR_11 == 0 && VAR_12 == 0) {
            *VAR_4 = 0; return 1;
        }
        if (VAR_10 == 1 && VAR_11 == 0 && VAR_12 == 0) {
            *VAR_4 = 1; return 1;
        }
        if (VAR_10 == 0 && VAR_11 == 0 && VAR_12 == -1) {
            *VAR_4 = 2; return 1;
        }
        if (VAR_10 == 0 && VAR_11 == 0 && VAR_12 == 1) {
            *VAR_4 = 3; return 1;
        }
        if (VAR_10 == 0 && VAR_11 == 1 && VAR_12 == 0) {
            int VAR_13 = FUNC_4(FUNC_0(FUNC_1(VAR_5->x - VAR_7, VAR_5->z - VAR_9)));
            if (VAR_13 < 0) {
                VAR_13 += 360;
            }
            int VAR_14 = ((VAR_13 + 45) / 90) % 4;
            *VAR_4 = 4 + VAR_14; return 1;
        }
    }
    return 0;
}

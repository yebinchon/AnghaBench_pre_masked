
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* players; } ;
struct TYPE_5__ {int ry; int rx; int z; int y; int x; } ;
struct TYPE_4__ {TYPE_2__ state; } ;
typedef TYPE_2__ State ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;

void FUNC_3() {
    State *VAR_1 = &VAR_0->players->state;
    int VAR_2, VAR_3, VAR_4;
    int VAR_5 = FUNC_0(0, VAR_1->x, VAR_1->y, VAR_1->z, VAR_1->rx, VAR_1->ry, &VAR_2, &VAR_3, &VAR_4);
    if (VAR_3 > 0 && VAR_3 < 256 && FUNC_1(VAR_5)) {
        FUNC_2(VAR_2, VAR_3, VAR_4);
    }
}

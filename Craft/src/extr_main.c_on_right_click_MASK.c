
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t item_index; TYPE_1__* players; } ;
struct TYPE_5__ {int z; int y; int x; int ry; int rx; } ;
struct TYPE_4__ {TYPE_2__ state; } ;
typedef TYPE_2__ State ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int,int ,int ,int ,int,int,int) ;
 int FUNC_3 (int,int,int,int ) ;
 int FUNC_4 (int,int,int,int ) ;

void FUNC_5() {
    State *VAR_2 = &VAR_0->players->state;
    int VAR_3, VAR_4, VAR_5;
    int VAR_6 = FUNC_0(1, VAR_2->x, VAR_2->y, VAR_2->z, VAR_2->rx, VAR_2->ry, &VAR_3, &VAR_4, &VAR_5);
    if (VAR_4 > 0 && VAR_4 < 256 && FUNC_1(VAR_6)) {
        if (!FUNC_2(2, VAR_2->x, VAR_2->y, VAR_2->z, VAR_3, VAR_4, VAR_5)) {
            FUNC_4(VAR_3, VAR_4, VAR_5, VAR_1[VAR_0->item_index]);
            FUNC_3(VAR_3, VAR_4, VAR_5, VAR_1[VAR_0->item_index]);
        }
    }
}

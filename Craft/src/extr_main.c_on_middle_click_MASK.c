
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int item_index; TYPE_1__* players; } ;
struct TYPE_5__ {int ry; int rx; int z; int y; int x; } ;
struct TYPE_4__ {TYPE_2__ state; } ;
typedef TYPE_2__ State ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int*,int*,int*) ;
 int VAR_1 ;
 int* VAR_2 ;

void FUNC_1() {
    State *VAR_3 = &VAR_0->players->state;
    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = FUNC_0(0, VAR_3->x, VAR_3->y, VAR_3->z, VAR_3->rx, VAR_3->ry, &VAR_4, &VAR_5, &VAR_6);
    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        if (VAR_2[VAR_8] == VAR_7) {
            VAR_0->item_index = VAR_8;
            break;
        }
    }
}

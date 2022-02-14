
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; float z; } ;
struct TYPE_6__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;


 float FUNC_0 (float) ;

float FUNC_1(Player *VAR_0, Player *VAR_1) {
    State *VAR_2 = &VAR_0->state;
    State *VAR_3 = &VAR_1->state;
    float VAR_4 = VAR_3->x - VAR_2->x;
    float VAR_5 = VAR_3->y - VAR_2->y;
    float VAR_6 = VAR_3->z - VAR_2->z;
    return FUNC_0(VAR_4 * VAR_4 + VAR_5 * VAR_5 + VAR_6 * VAR_6);
}

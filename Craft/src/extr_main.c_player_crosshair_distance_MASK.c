
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float x; float y; float z; int ry; int rx; } ;
struct TYPE_8__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;


 int FUNC_0 (int ,int ,float*,float*,float*) ;
 float FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 float FUNC_2 (float) ;

float FUNC_3(Player *VAR_0, Player *VAR_1) {
    State *VAR_2 = &VAR_0->state;
    State *VAR_3 = &VAR_1->state;
    float VAR_4 = FUNC_1(VAR_0, VAR_1);
    float VAR_5, VAR_6, VAR_7;
    FUNC_0(VAR_2->rx, VAR_2->ry, &VAR_5, &VAR_6, &VAR_7);
    VAR_5 *= VAR_4; VAR_6 *= VAR_4; VAR_7 *= VAR_4;
    float VAR_8, VAR_9, VAR_10;
    VAR_8 = VAR_2->x + VAR_5; VAR_9 = VAR_2->y + VAR_6; VAR_10 = VAR_2->z + VAR_7;
    float VAR_11 = VAR_3->x - VAR_8;
    float VAR_12 = VAR_3->y - VAR_9;
    float VAR_13 = VAR_3->z - VAR_10;
    return FUNC_2(VAR_11 * VAR_11 + VAR_12 * VAR_12 + VAR_13 * VAR_13);
}

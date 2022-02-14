
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float t; float x; float y; float z; float rx; float ry; } ;
struct TYPE_6__ {TYPE_1__ state2; TYPE_1__ state1; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;


 float FUNC_0 (float,double) ;
 float FUNC_1 (float,int) ;
 float FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,float,float,float,float,float,int ) ;

void FUNC_4(Player *VAR_0) {
    State *VAR_1 = &VAR_0->state1;
    State *VAR_2 = &VAR_0->state2;
    float VAR_3 = VAR_2->t - VAR_1->t;
    float VAR_4 = FUNC_2() - VAR_2->t;
    VAR_3 = FUNC_1(VAR_3, 1);
    VAR_3 = FUNC_0(VAR_3, 0.1);
    float VAR_5 = FUNC_1(VAR_4 / VAR_3, 1);
    FUNC_3(
        VAR_0,
        VAR_1->x + (VAR_2->x - VAR_1->x) * VAR_5,
        VAR_1->y + (VAR_2->y - VAR_1->y) * VAR_5,
        VAR_1->z + (VAR_2->z - VAR_1->z) * VAR_5,
        VAR_1->rx + (VAR_2->rx - VAR_1->rx) * VAR_5,
        VAR_1->ry + (VAR_2->ry - VAR_1->ry) * VAR_5,
        0);
}

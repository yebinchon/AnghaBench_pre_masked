
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; float z; float rx; float ry; int t; } ;
struct TYPE_7__ {int buffer; TYPE_1__ state; TYPE_1__ state2; TYPE_1__ state1; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float,float,float,float,float) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

void FUNC_4(Player *VAR_1,
    float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, int VAR_7)
{
    if (VAR_7) {
        State *VAR_8 = &VAR_1->state1;
        State *VAR_9 = &VAR_1->state2;
        FUNC_3(VAR_8, VAR_9, sizeof(State));
        VAR_9->x = VAR_2; VAR_9->y = VAR_3; VAR_9->z = VAR_4; VAR_9->rx = VAR_5; VAR_9->ry = VAR_6;
        VAR_9->t = FUNC_2();
        if (VAR_9->rx - VAR_8->rx > VAR_0) {
            VAR_8->rx += 2 * VAR_0;
        }
        if (VAR_8->rx - VAR_9->rx > VAR_0) {
            VAR_8->rx -= 2 * VAR_0;
        }
    }
    else {
        State *VAR_10 = &VAR_1->state;
        VAR_10->x = VAR_2; VAR_10->y = VAR_3; VAR_10->z = VAR_4; VAR_10->rx = VAR_5; VAR_10->ry = VAR_6;
        FUNC_0(VAR_1->buffer);
        VAR_1->buffer = FUNC_1(VAR_10->x, VAR_10->y, VAR_10->z, VAR_10->rx, VAR_10->ry);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int window; TYPE_1__* players; } ;
struct TYPE_5__ {scalar_t__ rx; double ry; } ;
struct TYPE_4__ {TYPE_2__ state; } ;
typedef TYPE_2__ State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double FUNC_0 (double,scalar_t__) ;
 double FUNC_1 (double,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (int ,double*,double*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5() {
    int VAR_4 =
        FUNC_4(VAR_3->window, VAR_0) == VAR_1;
    static double VAR_5 = 0;
    static double VAR_6 = 0;
    State *VAR_7 = &VAR_3->players->state;
    if (VAR_4 && (VAR_5 || VAR_6)) {
        double VAR_8, VAR_9;
        FUNC_3(VAR_3->window, &VAR_8, &VAR_9);
        float VAR_10 = 0.0025;
        VAR_7->rx += (VAR_8 - VAR_5) * VAR_10;
        if (VAR_2) {
            VAR_7->ry += (VAR_9 - VAR_6) * VAR_10;
        }
        else {
            VAR_7->ry -= (VAR_9 - VAR_6) * VAR_10;
        }
        if (VAR_7->rx < 0) {
            VAR_7->rx += FUNC_2(360);
        }
        if (VAR_7->rx >= FUNC_2(360)){
            VAR_7->rx -= FUNC_2(360);
        }
        VAR_7->ry = FUNC_0(VAR_7->ry, -FUNC_2(90));
        VAR_7->ry = FUNC_1(VAR_7->ry, FUNC_2(90));
        VAR_5 = VAR_8;
        VAR_6 = VAR_9;
    }
    else {
        FUNC_3(VAR_3->window, &VAR_5, &VAR_6);
    }
}

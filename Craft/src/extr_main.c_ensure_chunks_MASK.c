
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int mtx; } ;
typedef TYPE_1__ Worker ;
struct TYPE_5__ {TYPE_1__* workers; } ;
typedef int Player ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(Player *VAR_3) {
    FUNC_0();
    FUNC_2(VAR_3);
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        Worker *VAR_5 = VAR_2->workers + VAR_4;
        FUNC_3(&VAR_5->mtx);
        if (VAR_5->state == VAR_1) {
            FUNC_1(VAR_3, VAR_5);
        }
        FUNC_4(&VAR_5->mtx);
    }
}

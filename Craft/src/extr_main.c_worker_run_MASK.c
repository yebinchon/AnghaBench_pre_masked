
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ load; } ;
typedef TYPE_1__ WorkerItem ;
struct TYPE_6__ {scalar_t__ state; int mtx; TYPE_1__ item; int cnd; } ;
typedef TYPE_2__ Worker ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(void *VAR_2) {
    Worker *VAR_3 = (Worker *)VAR_2;
    int VAR_4 = 1;
    while (VAR_4) {
        FUNC_3(&VAR_3->mtx);
        while (VAR_3->state != VAR_0) {
            FUNC_0(&VAR_3->cnd, &VAR_3->mtx);
        }
        FUNC_4(&VAR_3->mtx);
        WorkerItem *VAR_5 = &VAR_3->item;
        if (VAR_5->load) {
            FUNC_2(VAR_5);
        }
        FUNC_1(VAR_5);
        FUNC_3(&VAR_3->mtx);
        VAR_3->state = VAR_1;
        FUNC_4(&VAR_3->mtx);
    }
    return 0;
}

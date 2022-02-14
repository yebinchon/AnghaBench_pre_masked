
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_11__ {TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int*) ;

void FUNC_6(redisAsyncContext *VAR_3) {
    redisContext *VAR_4 = &(VAR_3->c);
    int VAR_5 = 0;

    if (!(VAR_4->flags & VAR_0)) {

        if (FUNC_4(VAR_3) != VAR_2)
            return;

        if (!(VAR_4->flags & VAR_0))
            return;
    }

    if (FUNC_5(VAR_4,&VAR_5) == VAR_1) {
        FUNC_3(VAR_3);
    } else {

        if (!VAR_5)
            FUNC_1(VAR_3);
        else
            FUNC_2(VAR_3);


        FUNC_0(VAR_3);
    }
}

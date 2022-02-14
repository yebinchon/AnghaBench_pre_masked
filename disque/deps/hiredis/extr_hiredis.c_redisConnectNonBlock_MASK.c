
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int,int *) ;
 TYPE_1__* FUNC_1 () ;

redisContext *FUNC_2(const char *VAR_1, int VAR_2) {
    redisContext *VAR_3;

    VAR_3 = FUNC_1();
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_3->flags &= ~VAR_0;
    FUNC_0(VAR_3,VAR_1,VAR_2,((void*)0));
    return VAR_3;
}

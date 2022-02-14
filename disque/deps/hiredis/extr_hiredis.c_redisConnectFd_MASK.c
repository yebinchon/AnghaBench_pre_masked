
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int flags; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;

redisContext *FUNC_1(int VAR_2) {
    redisContext *VAR_3;

    VAR_3 = FUNC_0();
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_3->fd = VAR_2;
    VAR_3->flags |= VAR_0 | VAR_1;
    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; int * reader; int * obuf; } ;
typedef TYPE_1__ redisContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(redisContext *VAR_0) {
    if (VAR_0->fd > 0)
        FUNC_0(VAR_0->fd);
    if (VAR_0->obuf != ((void*)0))
        FUNC_3(VAR_0->obuf);
    if (VAR_0->reader != ((void*)0))
        FUNC_2(VAR_0->reader);
    FUNC_1(VAR_0);
}

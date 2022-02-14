
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* errstr; int ridx; int * buf; int maxbuf; int * fn; scalar_t__ err; } ;
typedef TYPE_1__ redisReader ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 () ;

redisReader *FUNC_3(void) {
    redisReader *VAR_2;

    VAR_2 = FUNC_0(sizeof(redisReader),1);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_2->err = 0;
    VAR_2->errstr[0] = '\0';
    VAR_2->fn = &VAR_1;
    VAR_2->buf = FUNC_2();
    VAR_2->maxbuf = VAR_0;
    if (VAR_2->buf == ((void*)0)) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_2->ridx = -1;
    return VAR_2;
}

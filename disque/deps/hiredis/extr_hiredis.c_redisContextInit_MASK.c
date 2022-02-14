
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* errstr; int reader; int obuf; scalar_t__ err; } ;
typedef TYPE_1__ redisContext ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static redisContext *FUNC_3(void) {
    redisContext *VAR_0;

    VAR_0 = FUNC_0(1,sizeof(redisContext));
    if (VAR_0 == ((void*)0))
        return ((void*)0);

    VAR_0->err = 0;
    VAR_0->errstr[0] = '\0';
    VAR_0->obuf = FUNC_2();
    VAR_0->reader = FUNC_1();
    return VAR_0;
}

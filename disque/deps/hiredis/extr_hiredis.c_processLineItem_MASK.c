
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t ridx; void* reply; TYPE_1__* fn; TYPE_3__* rstack; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_3__ redisReadTask ;
struct TYPE_10__ {void* (* createString ) (TYPE_3__*,char*,int) ;void* (* createInteger ) (TYPE_3__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (TYPE_3__*,int ) ;
 void* FUNC_5 (TYPE_3__*,char*,int) ;

__attribute__((used)) static int FUNC_6(redisReader *VAR_3) {
    redisReadTask *VAR_4 = &(VAR_3->rstack[VAR_3->ridx]);
    void *VAR_5;
    char *VAR_6;
    int VAR_7;

    if ((VAR_6 = FUNC_2(VAR_3,&VAR_7)) != ((void*)0)) {
        if (VAR_4->type == VAR_2) {
            if (VAR_3->fn && VAR_3->fn->createInteger)
                VAR_5 = VAR_3->fn->createInteger(VAR_4,FUNC_3(VAR_6));
            else
                VAR_5 = (void*)VAR_2;
        } else {

            if (VAR_3->fn && VAR_3->fn->createString)
                VAR_5 = VAR_3->fn->createString(VAR_4,VAR_6,VAR_7);
            else
                VAR_5 = (void*)(size_t)(VAR_4->type);
        }

        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_3);
            return VAR_0;
        }


        if (VAR_3->ridx == 0) VAR_3->reply = VAR_5;
        FUNC_1(VAR_3);
        return VAR_1;
    }

    return VAR_0;
}

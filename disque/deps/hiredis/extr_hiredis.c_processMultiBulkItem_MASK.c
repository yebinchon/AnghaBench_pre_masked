
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t ridx; void* reply; int privdata; TYPE_3__* rstack; TYPE_1__* fn; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_13__ {long elements; int type; int privdata; struct TYPE_13__* parent; int * obj; scalar_t__ idx; } ;
typedef TYPE_3__ redisReadTask ;
struct TYPE_11__ {void* (* createArray ) (TYPE_3__*,long) ;void* (* createNil ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (TYPE_2__*,int *) ;
 long FUNC_4 (char*) ;
 void* FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (TYPE_3__*,long) ;

__attribute__((used)) static int FUNC_7(redisReader *VAR_5) {
    redisReadTask *VAR_6 = &(VAR_5->rstack[VAR_5->ridx]);
    void *VAR_7;
    char *VAR_8;
    long VAR_9;
    int VAR_10 = 0;


    if (VAR_5->ridx == 8) {
        FUNC_0(VAR_5,VAR_1,
            "No support for nested multi bulk replies with depth > 7");
        return VAR_0;
    }

    if ((VAR_8 = FUNC_3(VAR_5,((void*)0))) != ((void*)0)) {
        VAR_9 = FUNC_4(VAR_8);
        VAR_10 = (VAR_5->ridx == 0);

        if (VAR_9 == -1) {
            if (VAR_5->fn && VAR_5->fn->createNil)
                VAR_7 = VAR_5->fn->createNil(VAR_6);
            else
                VAR_7 = (void*)VAR_4;

            if (VAR_7 == ((void*)0)) {
                FUNC_1(VAR_5);
                return VAR_0;
            }

            FUNC_2(VAR_5);
        } else {
            if (VAR_5->fn && VAR_5->fn->createArray)
                VAR_7 = VAR_5->fn->createArray(VAR_6,VAR_9);
            else
                VAR_7 = (void*)VAR_3;

            if (VAR_7 == ((void*)0)) {
                FUNC_1(VAR_5);
                return VAR_0;
            }


            if (VAR_9 > 0) {
                VAR_6->elements = VAR_9;
                VAR_6->obj = VAR_7;
                VAR_5->ridx++;
                VAR_5->rstack[VAR_5->ridx].type = -1;
                VAR_5->rstack[VAR_5->ridx].elements = -1;
                VAR_5->rstack[VAR_5->ridx].idx = 0;
                VAR_5->rstack[VAR_5->ridx].obj = ((void*)0);
                VAR_5->rstack[VAR_5->ridx].parent = VAR_6;
                VAR_5->rstack[VAR_5->ridx].privdata = VAR_5->privdata;
            } else {
                FUNC_2(VAR_5);
            }
        }


        if (VAR_10) VAR_5->reply = VAR_7;
        return VAR_2;
    }

    return VAR_0;
}

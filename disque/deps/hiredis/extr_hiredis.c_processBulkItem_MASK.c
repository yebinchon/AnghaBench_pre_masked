
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t ridx; char* buf; int pos; int len; void* reply; TYPE_1__* fn; int * rstack; } ;
typedef TYPE_2__ redisReader ;
typedef int redisReadTask ;
struct TYPE_6__ {void* (* createString ) (int *,char*,long) ;void* (* createNil ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 long FUNC_2 (char*) ;
 char* FUNC_3 (char*,int) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *,char*,long) ;

__attribute__((used)) static int FUNC_6(redisReader *VAR_4) {
    redisReadTask *VAR_5 = &(VAR_4->rstack[VAR_4->ridx]);
    void *VAR_6 = ((void*)0);
    char *VAR_7, *VAR_8;
    long VAR_9;
    unsigned long VAR_10;
    int VAR_11 = 0;

    VAR_7 = VAR_4->buf+VAR_4->pos;
    VAR_8 = FUNC_3(VAR_7,VAR_4->len-VAR_4->pos);
    if (VAR_8 != ((void*)0)) {
        VAR_7 = VAR_4->buf+VAR_4->pos;
        VAR_10 = VAR_8-(VAR_4->buf+VAR_4->pos)+2;
        VAR_9 = FUNC_2(VAR_7);

        if (VAR_9 < 0) {

            if (VAR_4->fn && VAR_4->fn->createNil)
                VAR_6 = VAR_4->fn->createNil(VAR_5);
            else
                VAR_6 = (void*)VAR_2;
            VAR_11 = 1;
        } else {

            VAR_10 += VAR_9+2;
            if (VAR_4->pos+VAR_10 <= VAR_4->len) {
                if (VAR_4->fn && VAR_4->fn->createString)
                    VAR_6 = VAR_4->fn->createString(VAR_5,VAR_8+2,VAR_9);
                else
                    VAR_6 = (void*)VAR_3;
                VAR_11 = 1;
            }
        }


        if (VAR_11) {
            if (VAR_6 == ((void*)0)) {
                FUNC_0(VAR_4);
                return VAR_0;
            }

            VAR_4->pos += VAR_10;


            if (VAR_4->ridx == 0) VAR_4->reply = VAR_6;
            FUNC_1(VAR_4);
            return VAR_1;
        }
    }

    return VAR_0;
}

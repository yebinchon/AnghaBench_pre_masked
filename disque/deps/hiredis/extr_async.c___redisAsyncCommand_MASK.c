
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sds ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ redisContext ;
typedef int redisCallbackFn ;
struct TYPE_12__ {void* privdata; int * fn; } ;
typedef TYPE_3__ redisCallback ;
struct TYPE_10__ {int invalid; int channels; int patterns; } ;
struct TYPE_13__ {int replies; TYPE_1__ sub; TYPE_2__ c; } ;
typedef TYPE_4__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 char* FUNC_5 (char*,char**,size_t*) ;
 int FUNC_6 (char*,size_t) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 char FUNC_8 (char) ;

__attribute__((used)) static int FUNC_9(redisAsyncContext *VAR_6, redisCallbackFn *VAR_7, void *VAR_8, char *VAR_9, size_t VAR_10) {
    redisContext *VAR_11 = &(VAR_6->c);
    redisCallback VAR_12;
    int VAR_13, VAR_14;
    char *VAR_15, *VAR_16;
    size_t VAR_17, VAR_18;
    char *VAR_19;
    sds VAR_20;


    if (VAR_11->flags & (VAR_0 | VAR_2)) return VAR_1;


    VAR_12.fn = VAR_7;
    VAR_12.privdata = VAR_8;


    VAR_19 = FUNC_5(VAR_9,&VAR_15,&VAR_17);
    FUNC_3(VAR_19 != ((void*)0));
    VAR_14 = (VAR_19[0] == '$');
    VAR_13 = (FUNC_8(VAR_15[0]) == 'p') ? 1 : 0;
    VAR_15 += VAR_13;
    VAR_17 -= VAR_13;

    if (VAR_14 && FUNC_7(VAR_15,"subscribe\r\n",11) == 0) {
        VAR_11->flags |= VAR_5;


        while ((VAR_19 = FUNC_5(VAR_19,&VAR_16,&VAR_18)) != ((void*)0)) {
            VAR_20 = FUNC_6(VAR_16,VAR_18);
            if (VAR_13)
                FUNC_4(VAR_6->sub.patterns,VAR_20,&VAR_12);
            else
                FUNC_4(VAR_6->sub.channels,VAR_20,&VAR_12);
        }
    } else if (FUNC_7(VAR_15,"unsubscribe\r\n",13) == 0) {


        if (!(VAR_11->flags & VAR_5)) return VAR_1;




     } else if(FUNC_7(VAR_15,"monitor\r\n",9) == 0) {

         VAR_11->flags |= VAR_3;
         FUNC_2(&VAR_6->replies,&VAR_12);
    } else {
        if (VAR_11->flags & VAR_5)


            FUNC_2(&VAR_6->sub.invalid,&VAR_12);
        else
            FUNC_2(&VAR_6->replies,&VAR_12);
    }

    FUNC_1(VAR_11,VAR_9,VAR_10);


    FUNC_0(VAR_6);

    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int sds ;
struct TYPE_13__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_14__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_3__ client ;
struct TYPE_16__ {long unixsocket; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 long FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct timeval*,int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,long,...) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;
 TYPE_4__ VAR_3 ;

void FUNC_12(client *VAR_4, list *VAR_5, robj **VAR_6, int VAR_7) {
    listNode *VAR_8;
    listIter VAR_9;
    int VAR_10;
    sds VAR_11 = FUNC_11("+");
    robj *VAR_12;
    struct timeval VAR_13;

    FUNC_4(&VAR_13,((void*)0));
    VAR_11 = FUNC_8(VAR_11,"%ld.%06ld ",(long)VAR_13.tv_sec,(long)VAR_13.tv_usec);
    if (VAR_4->flags & VAR_0) {
        VAR_11 = FUNC_8(VAR_11,"[unix:%s] ",VAR_3.unixsocket);
    } else {
        VAR_11 = FUNC_8(VAR_11,"[%s] ",FUNC_3(VAR_4));
    }

    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
        if (VAR_6[VAR_10]->encoding == VAR_1) {
            VAR_11 = FUNC_8(VAR_11, "\"%ld\"", (long)VAR_6[VAR_10]->ptr);
        } else {
            VAR_11 = FUNC_9(VAR_11,(char*)VAR_6[VAR_10]->ptr,
                        FUNC_10(VAR_6[VAR_10]->ptr));
        }
        if (VAR_10 != VAR_7-1)
            VAR_11 = FUNC_7(VAR_11," ",1);
    }
    VAR_11 = FUNC_7(VAR_11,"\r\n",2);
    VAR_12 = FUNC_1(VAR_2,VAR_11);

    FUNC_6(VAR_5,&VAR_9);
    while((VAR_8 = FUNC_5(&VAR_9))) {
        client *VAR_14 = VAR_8->value;
        FUNC_0(VAR_14,VAR_12);
    }
    FUNC_2(VAR_12);
}

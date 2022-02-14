
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* level; struct TYPE_20__* backward; int * obj; } ;
typedef TYPE_5__ skiplistNode ;
struct TYPE_21__ {TYPE_3__* sl; } ;
typedef TYPE_6__ queue ;
typedef int job ;
struct TYPE_22__ {int * argv; } ;
typedef TYPE_7__ client ;
struct TYPE_23__ {int emptymultibulk; } ;
struct TYPE_19__ {TYPE_5__* forward; } ;
struct TYPE_18__ {TYPE_2__* header; TYPE_5__* tail; } ;
struct TYPE_17__ {TYPE_1__* level; } ;
struct TYPE_16__ {TYPE_5__* forward; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ,long long*,int *) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,void*,long long) ;
 TYPE_8__ VAR_2 ;

void FUNC_6(client *VAR_3) {
    int VAR_4 = 0;
    long long VAR_5, VAR_6 = 0;

    if (FUNC_3(VAR_3,VAR_3->argv[2],&VAR_5,((void*)0)) != VAR_0)
        return;

    if (VAR_5 < 0) {
        VAR_5 = -VAR_5;
        VAR_4 = 1;
    }

    skiplistNode *VAR_7 = ((void*)0);
    queue *VAR_8 = FUNC_4(VAR_3->argv[1]);

    if (VAR_8 != ((void*)0))
        VAR_7 = VAR_4 ? VAR_8->sl->tail : VAR_8->sl->header->level[0].forward;

    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_3,VAR_2.emptymultibulk);
        return;
    }

    void *VAR_9 = FUNC_0(VAR_3);
    while(VAR_5-- && VAR_7) {
        job *VAR_10 = VAR_7->obj;
        FUNC_2(VAR_3, VAR_10, VAR_1);
        VAR_6++;
        if (VAR_4)
            VAR_7 = VAR_7->backward;
        else
            VAR_7 = VAR_7->level[0].forward;
    }
    FUNC_5(VAR_3,VAR_9,VAR_6);
}

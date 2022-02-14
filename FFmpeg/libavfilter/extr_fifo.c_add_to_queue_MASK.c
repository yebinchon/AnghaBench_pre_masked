
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * frame; struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_1__* dst; } ;
struct TYPE_7__ {TYPE_4__* last; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_2__ FifoContext ;
typedef int Buf ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 TYPE_4__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    FifoContext *VAR_3 = VAR_1->dst->priv;

    VAR_3->last->next = FUNC_2(sizeof(Buf));
    if (!VAR_3->last->next) {
        FUNC_1(&VAR_2);
        return FUNC_0(VAR_0);
    }

    VAR_3->last = VAR_3->last->next;
    VAR_3->last->frame = VAR_2;

    return 0;
}

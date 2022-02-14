
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* ifields; int length; size_t parity; scalar_t__ buffer; scalar_t__* ofields; scalar_t__ lock; } ;
struct TYPE_9__ {TYPE_1__* first; TYPE_2__ frame; } ;
struct TYPE_7__ {int affinity; size_t parity; scalar_t__ buffer; struct TYPE_7__* next; } ;
typedef TYPE_2__ PullupFrame ;
typedef TYPE_3__ PullupContext ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static PullupFrame *FUNC_4(PullupContext *VAR_0)
{
    PullupFrame *VAR_1 = &VAR_0->frame;
    int VAR_2, VAR_3 = FUNC_2(VAR_0);
    int VAR_4 = VAR_0->first->next->affinity;

    FUNC_1(VAR_3 < FUNC_0(VAR_1->ifields));
    if (!VAR_3 || VAR_1->lock)
        return ((void*)0);

    VAR_1->lock++;
    VAR_1->length = VAR_3;
    VAR_1->parity = VAR_0->first->parity;
    VAR_1->buffer = 0;

    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {

        VAR_1->ifields[VAR_2] = VAR_0->first->buffer;
        VAR_0->first->buffer = 0;
        VAR_0->first = VAR_0->first->next;
    }

    if (VAR_3 == 1) {
        VAR_1->ofields[VAR_1->parity ] = VAR_1->ifields[0];
        VAR_1->ofields[VAR_1->parity ^ 1] = 0;
    } else if (VAR_3 == 2) {
        VAR_1->ofields[VAR_1->parity ] = VAR_1->ifields[0];
        VAR_1->ofields[VAR_1->parity ^ 1] = VAR_1->ifields[1];
    } else if (VAR_3 == 3) {
        if (!VAR_4)
            VAR_4 = (VAR_1->ifields[0] == VAR_1->ifields[1]) ? -1 : 1;
        VAR_1->ofields[VAR_1->parity ] = VAR_1->ifields[1 + VAR_4];
        VAR_1->ofields[VAR_1->parity ^ 1] = VAR_1->ifields[1 ];
    }

    FUNC_3(VAR_1->ofields[0], 0);
    FUNC_3(VAR_1->ofields[1], 1);

    if (VAR_1->ofields[0] == VAR_1->ofields[1]) {
        VAR_1->buffer = VAR_1->ofields[0];
        FUNC_3(VAR_1->buffer, 2);
        return VAR_1;
    }

    return VAR_1;
}

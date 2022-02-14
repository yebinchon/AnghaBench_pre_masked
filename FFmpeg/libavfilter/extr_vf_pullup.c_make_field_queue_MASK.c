
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ PullupField ;
typedef int PullupContext ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static PullupField *FUNC_4(PullupContext *VAR_0, int VAR_1)
{
    PullupField *VAR_2, *VAR_3;

    VAR_3 = VAR_2 = FUNC_2(sizeof(*VAR_2));
    if (!VAR_3)
        return ((void*)0);

    if (FUNC_0(VAR_0, VAR_3) < 0) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }

    for (; VAR_1 > 0; VAR_1--) {
        VAR_3->next = FUNC_2(sizeof(*VAR_3->next));
        if (!VAR_3->next) {
            FUNC_3(VAR_2);
            return ((void*)0);
        }

        VAR_3->next->prev = VAR_3;
        VAR_3 = VAR_3->next;
        if (FUNC_0(VAR_0, VAR_3) < 0) {
            FUNC_3(VAR_2);
            return ((void*)0);
        }
    }

    VAR_3->next = VAR_2;
    VAR_2->prev = VAR_3;

    return VAR_2;
}

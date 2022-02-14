
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* lock; } ;
struct TYPE_7__ {int length; TYPE_3__** ofields; TYPE_3__* buffer; } ;
typedef TYPE_1__ PullupFrame ;
typedef int PullupContext ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_3(PullupContext *VAR_0, PullupFrame *VAR_1)
{
    int VAR_2;

    if (VAR_1->buffer)
        return;

    if (VAR_1->length < 2)
        return;

    for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        if (VAR_1->ofields[VAR_2]->lock[VAR_2^1])
            continue;

        VAR_1->buffer = VAR_1->ofields[VAR_2];
        FUNC_2(VAR_1->buffer, 2);
        FUNC_0(VAR_0, VAR_1->buffer, VAR_1->ofields[VAR_2^1], VAR_2^1);
        return;
    }

    VAR_1->buffer = FUNC_1(VAR_0, 2);

    FUNC_0(VAR_0, VAR_1->buffer, VAR_1->ofields[0], 0);
    FUNC_0(VAR_0, VAR_1->buffer, VAR_1->ofields[1], 1);
}

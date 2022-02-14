
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {struct TYPE_7__* next; int pixel; int rung; } ;
typedef TYPE_1__ ePICPixListElem ;
struct TYPE_8__ {TYPE_1__* list; } ;
typedef TYPE_2__ ePICPixHashElem ;
struct TYPE_9__ {int stack_pos; int * stack; int els_ctx; int hash; } ;
typedef TYPE_3__ ePICContext ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(ePICContext *VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
    ePICPixListElem *VAR_4, *VAR_5 = ((void*)0);
    ePICPixHashElem *VAR_6 = FUNC_0(&VAR_1->hash, VAR_2);

    if (!VAR_6 || !VAR_6->list)
        return 0;

    VAR_4 = VAR_6->list;
    while (VAR_4) {
        if (!FUNC_2(VAR_1, VAR_4->pixel)) {
            if (FUNC_1(&VAR_1->els_ctx, &VAR_4->rung)) {
                *VAR_3 = VAR_4->pixel;
                if (VAR_4 != VAR_6->list) {
                    VAR_5->next = VAR_4->next;
                    VAR_4->next = VAR_6->list;
                    VAR_6->list = VAR_4;
                }
                return 1;
            }
            VAR_1->stack[VAR_1->stack_pos++ & VAR_0] = VAR_4->pixel;
        }
        VAR_5 = VAR_4;
        VAR_4 = VAR_4->next;
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* vars; struct TYPE_5__* combs; struct TYPE_5__* diffs; } ;
typedef TYPE_1__ PullupField ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(PullupField *VAR_0)
{
    PullupField *VAR_1 = VAR_0;
    do {
        PullupField *VAR_2;
        if (!VAR_1)
            break;
        FUNC_0(VAR_1->diffs);
        FUNC_0(VAR_1->combs);
        FUNC_0(VAR_1->vars);
        VAR_2 = VAR_1->next;
        FUNC_1(VAR_1, 0, sizeof(*VAR_1));
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    } while (VAR_1 != VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* options; struct TYPE_6__* next; struct TYPE_6__* key; scalar_t__ val; struct TYPE_6__* front; struct TYPE_6__* type; } ;
typedef TYPE_1__ section ;
typedef TYPE_1__ node ;
typedef TYPE_1__ kvp ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(section *VAR_0)
{
    FUNC_0(VAR_0->type);
    node *VAR_1 = VAR_0->options->front;
    while(VAR_1){
        kvp *VAR_2 = (kvp *)VAR_1->val;
        FUNC_0(VAR_2->key);
        FUNC_0(VAR_2);
        node *VAR_3 = VAR_1->next;
        FUNC_0(VAR_1);
        VAR_1 = VAR_3;
    }
    FUNC_0(VAR_0->options);
    FUNC_0(VAR_0);
}

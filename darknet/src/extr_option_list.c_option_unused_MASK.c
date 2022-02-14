
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ val; } ;
typedef TYPE_1__ node ;
struct TYPE_6__ {TYPE_1__* front; } ;
typedef TYPE_2__ list ;
struct TYPE_7__ {char* key; char* val; int used; } ;
typedef TYPE_3__ kvp ;


 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_0 ;

void FUNC_1(list *VAR_1)
{
    node *VAR_2 = VAR_1->front;
    while(VAR_2){
        kvp *VAR_3 = (kvp *)VAR_2->val;
        if(!VAR_3->used){
            FUNC_0(VAR_0, "Unused field: '%s = %s'\n", VAR_3->key, VAR_3->val);
        }
        VAR_2 = VAR_2->next;
    }
}

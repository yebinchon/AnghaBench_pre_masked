
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* last_added_dialogue; int cache_size; TYPE_1__* dialogue_cache; } ;
struct TYPE_5__ {scalar_t__ readorder; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ DialogueLine ;
typedef TYPE_2__ ASSContext ;



__attribute__((used)) static void FUNC_0(ASSContext *VAR_0, DialogueLine *VAR_1)
{
    DialogueLine *VAR_2, *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);


    if (VAR_0->last_added_dialogue) {
        for (VAR_2 = VAR_0->last_added_dialogue; VAR_2; VAR_2 = VAR_2->next) {
            if (VAR_2->readorder > VAR_1->readorder)
                break;
            VAR_4 = VAR_2;
            VAR_3 = VAR_2->next;
        }
    }


    if (!VAR_4) {
        VAR_3 = VAR_0->dialogue_cache;
        for (VAR_2 = VAR_3; VAR_2 != VAR_0->last_added_dialogue; VAR_2 = VAR_2->next) {
            if (VAR_2->readorder > VAR_1->readorder)
                break;
            VAR_4 = VAR_2;
            VAR_3 = VAR_2->next;
        }
    }

    if (VAR_4) {
        VAR_4->next = VAR_1;
        VAR_1->prev = VAR_4;
    } else {
        VAR_1->prev = VAR_0->dialogue_cache;
        VAR_0->dialogue_cache = VAR_1;
    }
    if (VAR_3) {
        VAR_3->prev = VAR_1;
        VAR_1->next = VAR_3;
    }
    VAR_0->cache_size++;
    VAR_0->last_added_dialogue = VAR_1;
}

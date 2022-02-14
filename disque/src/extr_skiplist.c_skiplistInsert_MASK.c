
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* backward; TYPE_1__* level; int obj; } ;
typedef TYPE_2__ skiplistNode ;
struct TYPE_9__ {int level; scalar_t__ (* compare ) (int ,void*) ;unsigned int length; TYPE_2__* tail; TYPE_2__* header; } ;
typedef TYPE_3__ skiplist ;
struct TYPE_7__ {unsigned int span; TYPE_2__* forward; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,void*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,void*) ;
 scalar_t__ FUNC_3 (int ,void*) ;

skiplistNode *FUNC_4(skiplist *VAR_1, void *VAR_2) {
    skiplistNode *VAR_3[VAR_0], *VAR_4;
    unsigned int VAR_5[VAR_0];
    int VAR_6, VAR_7;

    VAR_4 = VAR_1->header;
    for (VAR_6 = VAR_1->level-1; VAR_6 >= 0; VAR_6--) {

        VAR_5[VAR_6] = VAR_6 == (VAR_1->level-1) ? 0 : VAR_5[VAR_6+1];
        while (VAR_4->level[VAR_6].forward &&
               VAR_1->compare(VAR_4->level[VAR_6].forward->obj,VAR_2) < 0)
        {
            VAR_5[VAR_6] += VAR_4->level[VAR_6].span;
            VAR_4 = VAR_4->level[VAR_6].forward;
        }
        VAR_3[VAR_6] = VAR_4;
    }


    if (VAR_4->level[0].forward &&
        VAR_1->compare(VAR_4->level[0].forward->obj,VAR_2) == 0) return ((void*)0);


    VAR_7 = FUNC_1();
    if (VAR_7 > VAR_1->level) {
        for (VAR_6 = VAR_1->level; VAR_6 < VAR_7; VAR_6++) {
            VAR_5[VAR_6] = 0;
            VAR_3[VAR_6] = VAR_1->header;
            VAR_3[VAR_6]->level[VAR_6].span = VAR_1->length;
        }
        VAR_1->level = VAR_7;
    }
    VAR_4 = FUNC_0(VAR_7,VAR_2);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        VAR_4->level[VAR_6].forward = VAR_3[VAR_6]->level[VAR_6].forward;
        VAR_3[VAR_6]->level[VAR_6].forward = VAR_4;


        VAR_4->level[VAR_6].span = VAR_3[VAR_6]->level[VAR_6].span - (VAR_5[0] - VAR_5[VAR_6]);
        VAR_3[VAR_6]->level[VAR_6].span = (VAR_5[0] - VAR_5[VAR_6]) + 1;
    }


    for (VAR_6 = VAR_7; VAR_6 < VAR_1->level; VAR_6++) {
        VAR_3[VAR_6]->level[VAR_6].span++;
    }

    VAR_4->backward = (VAR_3[0] == VAR_1->header) ? ((void*)0) : VAR_3[0];
    if (VAR_4->level[0].forward)
        VAR_4->level[0].forward->backward = VAR_4;
    else
        VAR_1->tail = VAR_4;
    VAR_1->length++;
    return VAR_4;
}

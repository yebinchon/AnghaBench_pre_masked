
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int obj; TYPE_1__* level; } ;
typedef TYPE_2__ skiplistNode ;
struct TYPE_11__ {int level; scalar_t__ (* compare ) (int ,void*) ;TYPE_2__* header; } ;
typedef TYPE_3__ skiplist ;
struct TYPE_9__ {TYPE_2__* forward; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,void*) ;
 scalar_t__ FUNC_3 (int ,void*) ;

int FUNC_4(skiplist *VAR_1, void *VAR_2) {
    skiplistNode *VAR_3[VAR_0], *VAR_4;
    int VAR_5;

    VAR_4 = VAR_1->header;
    for (VAR_5 = VAR_1->level-1; VAR_5 >= 0; VAR_5--) {
        while (VAR_4->level[VAR_5].forward &&
               VAR_1->compare(VAR_4->level[VAR_5].forward->obj,VAR_2) < 0)
        {
            VAR_4 = VAR_4->level[VAR_5].forward;
        }
        VAR_3[VAR_5] = VAR_4;
    }
    VAR_4 = VAR_4->level[0].forward;
    if (VAR_4 && VAR_1->compare(VAR_4->obj,VAR_2) == 0) {
        FUNC_0(VAR_1, VAR_4, VAR_3);
        FUNC_1(VAR_4);
        return 1;
    }
    return 0;
}

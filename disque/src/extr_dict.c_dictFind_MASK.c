
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; int key; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_12__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_10__ {scalar_t__ size; unsigned int sizemask; TYPE_2__** table; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,void const*,int ) ;
 unsigned int FUNC_2 (TYPE_3__*,void const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

dictEntry *FUNC_4(dict *VAR_0, const void *VAR_1)
{
    dictEntry *VAR_2;
    unsigned int VAR_3, VAR_4, VAR_5;

    if (VAR_0->ht[0].size == 0) return ((void*)0);
    if (FUNC_3(VAR_0)) FUNC_0(VAR_0);
    VAR_3 = FUNC_2(VAR_0, VAR_1);
    for (VAR_5 = 0; VAR_5 <= 1; VAR_5++) {
        VAR_4 = VAR_3 & VAR_0->ht[VAR_5].sizemask;
        VAR_2 = VAR_0->ht[VAR_5].table[VAR_4];
        while(VAR_2) {
            if (FUNC_1(VAR_0, VAR_1, VAR_2->key))
                return VAR_2;
            VAR_2 = VAR_2->next;
        }
        if (!FUNC_3(VAR_0)) return ((void*)0);
    }
    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {struct TYPE_15__* next; int key; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_16__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_14__ {scalar_t__ size; unsigned int sizemask; int used; TYPE_2__** table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,void const*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 unsigned int FUNC_4 (TYPE_3__*,void const*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(dict *VAR_2, const void *VAR_3, int VAR_4)
{
    unsigned int VAR_5, VAR_6;
    dictEntry *VAR_7, *VAR_8;
    int VAR_9;

    if (VAR_2->ht[0].size == 0) return VAR_0;
    if (FUNC_5(VAR_2)) FUNC_0(VAR_2);
    VAR_5 = FUNC_4(VAR_2, VAR_3);

    for (VAR_9 = 0; VAR_9 <= 1; VAR_9++) {
        VAR_6 = VAR_5 & VAR_2->ht[VAR_9].sizemask;
        VAR_7 = VAR_2->ht[VAR_9].table[VAR_6];
        VAR_8 = ((void*)0);
        while(VAR_7) {
            if (FUNC_1(VAR_2, VAR_3, VAR_7->key)) {

                if (VAR_8)
                    VAR_8->next = VAR_7->next;
                else
                    VAR_2->ht[VAR_9].table[VAR_6] = VAR_7->next;
                if (!VAR_4) {
                    FUNC_2(VAR_2, VAR_7);
                    FUNC_3(VAR_2, VAR_7);
                }
                FUNC_6(VAR_7);
                VAR_2->ht[VAR_9].used--;
                return VAR_1;
            }
            VAR_8 = VAR_7;
            VAR_7 = VAR_7->next;
        }
        if (!FUNC_5(VAR_2)) break;
    }
    return VAR_0;
}

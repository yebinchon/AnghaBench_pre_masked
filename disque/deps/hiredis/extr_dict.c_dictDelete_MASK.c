
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; int key; } ;
typedef TYPE_1__ dictEntry ;
struct TYPE_12__ {scalar_t__ size; unsigned int sizemask; int used; TYPE_1__** table; } ;
typedef TYPE_2__ dict ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,void const*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_2__*,void const*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(dict *VAR_2, const void *VAR_3) {
    unsigned int VAR_4;
    dictEntry *VAR_5, *VAR_6;

    if (VAR_2->size == 0)
        return VAR_0;
    VAR_4 = FUNC_3(VAR_2, VAR_3) & VAR_2->sizemask;
    VAR_5 = VAR_2->table[VAR_4];

    VAR_6 = ((void*)0);
    while(VAR_5) {
        if (FUNC_0(VAR_2,VAR_3,VAR_5->key)) {

            if (VAR_6)
                VAR_6->next = VAR_5->next;
            else
                VAR_2->table[VAR_4] = VAR_5->next;

            FUNC_1(VAR_2,VAR_5);
            FUNC_2(VAR_2,VAR_5);
            FUNC_4(VAR_5);
            VAR_2->used--;
            return VAR_1;
        }
        VAR_6 = VAR_5;
        VAR_5 = VAR_5->next;
    }
    return VAR_0;
}

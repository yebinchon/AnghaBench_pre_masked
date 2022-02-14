
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_11__ {void* (* dup ) (void*) ;int match; int free; } ;
typedef TYPE_2__ list ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,void*) ;
 TYPE_2__* FUNC_1 () ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (void*) ;

list *FUNC_7(list *VAR_1)
{
    list *VAR_2;
    listIter *VAR_3;
    listNode *VAR_4;

    if ((VAR_2 = FUNC_1()) == ((void*)0))
        return ((void*)0);
    VAR_2->dup = VAR_1->dup;
    VAR_2->free = VAR_1->free;
    VAR_2->match = VAR_1->match;
    VAR_3 = FUNC_2(VAR_1, VAR_0);
    while((VAR_4 = FUNC_3(VAR_3)) != ((void*)0)) {
        void *VAR_5;

        if (VAR_2->dup) {
            VAR_5 = VAR_2->dup(VAR_4->value);
            if (VAR_5 == ((void*)0)) {
                FUNC_4(VAR_2);
                FUNC_5(VAR_3);
                return ((void*)0);
            }
        } else
            VAR_5 = VAR_4->value;
        if (FUNC_0(VAR_2, VAR_5) == ((void*)0)) {
            FUNC_4(VAR_2);
            FUNC_5(VAR_3);
            return ((void*)0);
        }
    }
    FUNC_5(VAR_3);
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int used; TYPE_2__** table; } ;
typedef TYPE_1__ dictht ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_14__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;


 int FUNC_0 (TYPE_3__*,void*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,void*) ;
 TYPE_2__* FUNC_4 (int) ;

dictEntry *FUNC_5(dict *VAR_0, void *VAR_1)
{
    int VAR_2;
    dictEntry *VAR_3;
    dictht *VAR_4;

    if (FUNC_2(VAR_0)) FUNC_1(VAR_0);



    if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == -1)
        return ((void*)0);


    VAR_4 = FUNC_2(VAR_0) ? &VAR_0->ht[1] : &VAR_0->ht[0];
    VAR_3 = FUNC_4(sizeof(*VAR_3));
    VAR_3->next = VAR_4->table[VAR_2];
    VAR_4->table[VAR_2] = VAR_3;
    VAR_4->used++;


    FUNC_3(VAR_0, VAR_3, VAR_1);
    return VAR_3;
}

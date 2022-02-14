
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int kern_return_t ;
struct TYPE_9__ {int nitems; } ;
struct TYPE_8__ {scalar_t__ state; int key; } ;
struct TYPE_7__ {int (* hash ) (TYPE_1__ const*,void const*) ;TYPE_5__ buckets; int (* cmp ) (int ,void const*) ;} ;
typedef TYPE_1__ KXLDDict ;
typedef TYPE_2__ DictEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_1__ const*,void const*) ;
 int FUNC_3 (int ,void const*) ;

__attribute__((used)) static kern_return_t
FUNC_4(const KXLDDict *VAR_3, const void *VAR_4, u_int *VAR_5)
{
    kern_return_t VAR_6 = VAR_1;
    DictEntry *VAR_7 = ((void*)0);
    u_int VAR_8, VAR_9;

    VAR_8 = VAR_9 = VAR_3->hash(VAR_3, VAR_4);


    VAR_7 = FUNC_1(&VAR_3->buckets, VAR_9);
    while (!VAR_3->cmp(VAR_7->key, VAR_4)) {
        if (VAR_7->state == VAR_0) goto finish;

        VAR_9 = (VAR_9 + 1) % VAR_3->buckets.nitems;
        if (VAR_9 == VAR_8) goto finish;

        VAR_7 = FUNC_1(&VAR_3->buckets, VAR_9);
    }

    FUNC_0(VAR_9 < VAR_3->buckets.nitems);

    *VAR_5 = VAR_9;
    VAR_6 = VAR_2;

finish:
    return VAR_6;
}

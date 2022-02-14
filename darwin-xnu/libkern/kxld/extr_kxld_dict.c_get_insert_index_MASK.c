
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


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*,void const*) ;
 int FUNC_3 (int ,void const*) ;

__attribute__((used)) static kern_return_t
FUNC_4(const KXLDDict *VAR_4, const void *VAR_5, u_int *VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    DictEntry *VAR_8 = ((void*)0);
    u_int VAR_9, VAR_10;

    VAR_9 = VAR_10 = VAR_4->hash(VAR_4, VAR_5);




    VAR_8 = FUNC_0(&VAR_4->buckets, VAR_10);
    while (VAR_8->state == VAR_2 && !VAR_4->cmp(VAR_8->key, VAR_5)) {
        VAR_10 = (VAR_10 + 1) % VAR_4->buckets.nitems;
        FUNC_1(VAR_9 != VAR_10, VAR_3, VAR_7=VAR_0);
        VAR_8 = FUNC_0(&VAR_4->buckets, VAR_10);
    }

    *VAR_6 = VAR_10;
    VAR_7 = VAR_1;

finish:
    return VAR_7;
}

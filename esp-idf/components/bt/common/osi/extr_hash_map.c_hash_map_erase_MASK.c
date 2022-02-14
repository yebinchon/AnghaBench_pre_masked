
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_5__ {size_t (* hash_fn ) (void const*) ;size_t num_bucket; TYPE_1__* bucket; int hash_size; } ;
typedef TYPE_2__ hash_map_t ;
typedef int hash_map_entry_t ;
typedef size_t hash_index_t ;
struct TYPE_4__ {int * list; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,void const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (void const*) ;

bool FUNC_6(hash_map_t *VAR_0, const void *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));

    hash_index_t VAR_2 = VAR_0->hash_fn(VAR_1) % VAR_0->num_bucket;
    list_t *VAR_3 = VAR_0->bucket[VAR_2].list;

    hash_map_entry_t *VAR_4 = FUNC_1(VAR_3, VAR_1);
    if (VAR_4 == ((void*)0)) {
        return 0;
    }

    VAR_0->hash_size--;
    bool VAR_5 = FUNC_4(VAR_3, VAR_4);
    if(FUNC_3(VAR_0->bucket[VAR_2].list)) {
        FUNC_2(VAR_0->bucket[VAR_2].list);
        VAR_0->bucket[VAR_2].list = ((void*)0);
    }

    return VAR_5;
}

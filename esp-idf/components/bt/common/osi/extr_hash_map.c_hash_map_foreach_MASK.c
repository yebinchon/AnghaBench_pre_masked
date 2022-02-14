
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int list_node_t ;
struct TYPE_5__ {size_t num_bucket; TYPE_1__* bucket; } ;
typedef TYPE_2__ hash_map_t ;
typedef int (* hash_map_iter_cb ) (int *,void*) ;
typedef int hash_map_entry_t ;
typedef size_t hash_index_t ;
struct TYPE_4__ {int * list; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;

void FUNC_5(hash_map_t *VAR_0, hash_map_iter_cb VAR_1, void *VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    for (hash_index_t VAR_3 = 0; VAR_3 < VAR_0->num_bucket; ++VAR_3) {
        if (VAR_0->bucket[VAR_3].list == ((void*)0)) {
            continue;
        }
        for (const list_node_t *VAR_4 = FUNC_1(VAR_0->bucket[VAR_3].list);
                VAR_4 != FUNC_2(VAR_0->bucket[VAR_3].list);
                VAR_4 = FUNC_3(VAR_4)) {
            hash_map_entry_t *VAR_5 = (hash_map_entry_t *)FUNC_4(VAR_4);
            if (!VAR_1(VAR_5, VAR_2)) {
                return;
            }
        }
    }
}

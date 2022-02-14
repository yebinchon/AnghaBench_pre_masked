
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int list_t ;
typedef int list_node_t ;
struct TYPE_5__ {int key; TYPE_1__* hash_map; } ;
typedef TYPE_2__ hash_map_entry_t ;
struct TYPE_4__ {scalar_t__ (* keys_are_equal ) (int ,void const*) ;} ;


 int * FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int * FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ,void const*) ;

__attribute__((used)) static hash_map_entry_t *FUNC_5(list_t *VAR_0,
        const void *VAR_1)
{

    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }

    for (const list_node_t *VAR_2 = FUNC_0(VAR_0);
            VAR_2 != FUNC_1(VAR_0);
            VAR_2 = FUNC_2(VAR_2)) {
        hash_map_entry_t *VAR_3 = (hash_map_entry_t *)FUNC_3(VAR_2);
        if (VAR_3->hash_map->keys_are_equal(VAR_3->key, VAR_1)) {
            return VAR_3;
        }
    }
    return ((void*)0);
}

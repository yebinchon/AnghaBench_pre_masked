
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_7__ {size_t (* hash_fn ) (void const*) ;size_t num_bucket; TYPE_1__* bucket; } ;
typedef TYPE_2__ hash_map_t ;
struct TYPE_8__ {void* data; } ;
typedef TYPE_3__ hash_map_entry_t ;
typedef size_t hash_index_t ;
struct TYPE_6__ {int * list; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,void const*) ;
 size_t FUNC_2 (void const*) ;

void *FUNC_3(const hash_map_t *VAR_0, const void *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));

    hash_index_t VAR_2 = VAR_0->hash_fn(VAR_1) % VAR_0->num_bucket;
    list_t *VAR_3 = VAR_0->bucket[VAR_2].list;

    hash_map_entry_t *VAR_4 = FUNC_1(VAR_3, VAR_1);
    if (VAR_4 != ((void*)0)) {
        return VAR_4->data;
    }

    return ((void*)0);
}

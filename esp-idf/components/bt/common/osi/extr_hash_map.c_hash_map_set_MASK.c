
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_10__ {size_t (* hash_fn ) (void const*) ;size_t num_bucket; int hash_size; TYPE_1__* bucket; } ;
typedef TYPE_2__ hash_map_t ;
struct TYPE_11__ {TYPE_2__* hash_map; void* data; void const* key; } ;
typedef TYPE_3__ hash_map_entry_t ;
typedef size_t hash_index_t ;
struct TYPE_9__ {int * list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int *,void const*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int) ;
 size_t FUNC_6 (void const*) ;

bool FUNC_7(hash_map_t *VAR_1, const void *VAR_2, void *VAR_3)
{
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));

    hash_index_t VAR_4 = VAR_1->hash_fn(VAR_2) % VAR_1->num_bucket;

    if (VAR_1->bucket[VAR_4].list == ((void*)0)) {
        VAR_1->bucket[VAR_4].list = FUNC_3(VAR_0);
        if (VAR_1->bucket[VAR_4].list == ((void*)0)) {
            return 0;
        }
    }
    list_t *VAR_5 = VAR_1->bucket[VAR_4].list;

    hash_map_entry_t *VAR_6 = FUNC_1(VAR_5, VAR_2);

    if (VAR_6) {

        bool VAR_7 = FUNC_4(VAR_5, VAR_6);
        FUNC_0(VAR_7 == 1);
    } else {
        VAR_1->hash_size++;
    }
    VAR_6 = FUNC_5(sizeof(hash_map_entry_t));
    if (VAR_6 == ((void*)0)) {
        return 0;
    }

    VAR_6->key = VAR_2;
    VAR_6->data = VAR_3;
    VAR_6->hash_map = VAR_1;

    return FUNC_2(VAR_5, VAR_6);
}

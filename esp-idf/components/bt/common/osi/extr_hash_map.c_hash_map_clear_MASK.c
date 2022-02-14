
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num_bucket; TYPE_1__* bucket; } ;
typedef TYPE_2__ hash_map_t ;
typedef size_t hash_index_t ;
struct TYPE_4__ {int * list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(hash_map_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));

    for (hash_index_t VAR_1 = 0; VAR_1 < VAR_0->num_bucket; VAR_1++) {
        if (VAR_0->bucket[VAR_1].list == ((void*)0)) {
            continue;
        }
        FUNC_1(VAR_0->bucket[VAR_1].list);
        VAR_0->bucket[VAR_1].list = ((void*)0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* data_fn ) (int ) ;int (* key_fn ) (void*) ;} ;
typedef TYPE_1__ hash_map_t ;
struct TYPE_5__ {int data; scalar_t__ key; TYPE_1__* hash_map; } ;
typedef TYPE_2__ hash_map_entry_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    hash_map_entry_t *VAR_1 = (hash_map_entry_t *)VAR_0;
    const hash_map_t *VAR_2 = VAR_1->hash_map;

    if (VAR_2->key_fn) {
        VAR_2->key_fn((void *)VAR_1->key);
    }
    if (VAR_2->data_fn) {
        VAR_2->data_fn(VAR_1->data);
    }
    FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int key_free_fn ;
typedef scalar_t__ key_equality_fn ;
struct TYPE_4__ {size_t num_bucket; int * bucket; scalar_t__ keys_are_equal; int data_fn; int key_fn; int * hash_fn; } ;
typedef TYPE_1__ hash_map_t ;
typedef int hash_map_bucket_t ;
typedef int * hash_index_fn ;
typedef int data_free_fn ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

hash_map_t *FUNC_3(
    size_t VAR_1,
    hash_index_fn VAR_2,
    key_free_fn VAR_3,
    data_free_fn VAR_4,
    key_equality_fn VAR_5)
{
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_1 > 0);
    hash_map_t *VAR_6 = FUNC_1(sizeof(hash_map_t));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6->hash_fn = VAR_2;
    VAR_6->key_fn = VAR_3;
    VAR_6->data_fn = VAR_4;
    VAR_6->keys_are_equal = VAR_5 ? VAR_5 : VAR_0;

    VAR_6->num_bucket = VAR_1;
    VAR_6->bucket = FUNC_1(sizeof(hash_map_bucket_t) * VAR_1);
    if (VAR_6->bucket == ((void*)0)) {
        FUNC_2(VAR_6);
        return ((void*)0);
    }
    return VAR_6;
}

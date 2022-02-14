
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * buf; } ;
struct TYPE_8__ {int key_size; int value_size; int num_buckets; int num_empty; int bucket_size; TYPE_1__ buckets_buffer; int min_empty; int upper_limit; int lower_limit; scalar_t__ num_entries; int buckets; } ;
typedef TYPE_2__ HashIndex ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (int) ;

__attribute__((used)) static HashIndex *
FUNC_9(int VAR_0, int VAR_1, int VAR_2)
{
    HashIndex *VAR_3;
    int VAR_4;
    VAR_0 = FUNC_3(VAR_0);

    if(!(VAR_3 = FUNC_8(sizeof(HashIndex)))) {
        FUNC_1("malloc header failed");
        return ((void*)0);
    }
    if(!(VAR_3->buckets = FUNC_2(VAR_0, VAR_1 + VAR_2))) {
        FUNC_1("malloc buckets failed");
        FUNC_4(VAR_3);
        return ((void*)0);
    }
    VAR_3->num_entries = 0;
    VAR_3->key_size = VAR_1;
    VAR_3->value_size = VAR_2;
    VAR_3->num_buckets = VAR_0;
    VAR_3->num_empty = VAR_0;
    VAR_3->bucket_size = VAR_3->key_size + VAR_3->value_size;
    VAR_3->lower_limit = FUNC_5(VAR_3->num_buckets);
    VAR_3->upper_limit = FUNC_7(VAR_3->num_buckets);
    VAR_3->min_empty = FUNC_6(VAR_3->num_buckets);

    VAR_3->buckets_buffer.buf = ((void*)0);

    for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_0(VAR_3, VAR_4);
    }
    return VAR_3;
}

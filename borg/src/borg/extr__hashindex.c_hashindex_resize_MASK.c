
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int key_size; int min_empty; int upper_limit; int lower_limit; scalar_t__ num_entries; scalar_t__ num_buckets; scalar_t__ num_empty; int buckets; int value_size; } ;
typedef TYPE_1__ HashIndex ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int,int ) ;
 unsigned char* FUNC_4 (TYPE_1__*,unsigned char*) ;
 int FUNC_5 (TYPE_1__*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_6(HashIndex *VAR_0, int VAR_1)
{
    HashIndex *VAR_2;
    unsigned char *VAR_3 = ((void*)0);
    int32_t VAR_4 = VAR_0->key_size;

    if(!(VAR_2 = FUNC_3(VAR_1, VAR_4, VAR_0->value_size))) {
        return 0;
    }
    while((VAR_3 = FUNC_4(VAR_0, VAR_3))) {
        if(!FUNC_5(VAR_2, VAR_3, VAR_3 + VAR_4)) {

            FUNC_1(VAR_2);
            return 0;
        }
    }
    FUNC_2(VAR_0);
    VAR_0->buckets = VAR_2->buckets;
    VAR_0->num_buckets = VAR_2->num_buckets;
    VAR_0->num_empty = VAR_0->num_buckets - VAR_0->num_entries;
    VAR_0->lower_limit = VAR_2->lower_limit;
    VAR_0->upper_limit = VAR_2->upper_limit;
    VAR_0->min_empty = VAR_2->min_empty;
    FUNC_0(VAR_2);
    return 1;
}

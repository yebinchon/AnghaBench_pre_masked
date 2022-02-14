
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char const* buckets; int bucket_size; int num_buckets; } ;
typedef TYPE_1__ HashIndex ;


 unsigned char* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static unsigned char *
FUNC_3(HashIndex *VAR_0, const unsigned char *VAR_1)
{
    int VAR_2 = 0;
    if(VAR_1) {
        VAR_2 = 1 + (VAR_1 - VAR_0->buckets) / VAR_0->bucket_size;
    }
    if (VAR_2 == VAR_0->num_buckets) {
        return ((void*)0);
    }
    while(FUNC_2(VAR_0, VAR_2) || FUNC_1(VAR_0, VAR_2)) {
        VAR_2 ++;
        if (VAR_2 == VAR_0->num_buckets) {
            return ((void*)0);
        }
    }
    return FUNC_0(VAR_0, VAR_2);
}

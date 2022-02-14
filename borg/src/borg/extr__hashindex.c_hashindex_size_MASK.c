
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_buckets; int bucket_size; } ;
typedef TYPE_1__ HashIndex ;
typedef int HashHeader ;



__attribute__((used)) static int
FUNC_0(HashIndex *VAR_0)
{
    return sizeof(HashHeader) + VAR_0->num_buckets * VAR_0->bucket_size;
}

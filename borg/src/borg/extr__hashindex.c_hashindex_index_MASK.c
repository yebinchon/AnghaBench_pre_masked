
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_buckets; } ;
typedef TYPE_1__ HashIndex ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(HashIndex *VAR_0, const unsigned char *VAR_1)
{
    return FUNC_0(*((uint32_t *)VAR_1)) % VAR_0->num_buckets;
}

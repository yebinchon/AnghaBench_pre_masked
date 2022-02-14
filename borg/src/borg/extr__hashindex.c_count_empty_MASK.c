
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_buckets; } ;
typedef TYPE_1__ HashIndex ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1(HashIndex *VAR_0)
{


    int VAR_1, VAR_2 = 0, VAR_3 = VAR_0->num_buckets;
    for(VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
        if(FUNC_0(VAR_0, VAR_1))
            VAR_2++;
    }
    return VAR_2;
}

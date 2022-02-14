
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num_entries; scalar_t__ lower_limit; int num_buckets; } ;
typedef TYPE_1__ HashIndex ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(HashIndex *VAR_0, const unsigned char *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0, VAR_1, ((void*)0));
    if (VAR_2 < 0) {
        return -1;
    }
    FUNC_0(VAR_0, VAR_2);
    VAR_0->num_entries -= 1;
    if(VAR_0->num_entries < VAR_0->lower_limit) {
        if(!FUNC_2(VAR_0, FUNC_3(VAR_0->num_buckets))) {
            return 0;
        }
    }
    return 1;
}

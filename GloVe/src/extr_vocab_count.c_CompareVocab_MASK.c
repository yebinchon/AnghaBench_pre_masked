
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long count; } ;
typedef TYPE_1__ VOCAB ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
    long long VAR_2;
    if ( (VAR_2 = ((VOCAB *) VAR_1)->count - ((VOCAB *) VAR_0)->count) != 0) return ( VAR_2 > 0 ? 1 : -1 );
    else return 0;
}

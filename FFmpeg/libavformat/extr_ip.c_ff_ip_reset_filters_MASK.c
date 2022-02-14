
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nb_exclude_addrs; scalar_t__ nb_include_addrs; int include_addrs; int exclude_addrs; } ;
typedef TYPE_1__ IPSourceFilters ;


 int FUNC_0 (int *) ;

void FUNC_1(IPSourceFilters *VAR_0)
{
    FUNC_0(&VAR_0->exclude_addrs);
    FUNC_0(&VAR_0->include_addrs);
    VAR_0->nb_include_addrs = 0;
    VAR_0->nb_exclude_addrs = 0;
}

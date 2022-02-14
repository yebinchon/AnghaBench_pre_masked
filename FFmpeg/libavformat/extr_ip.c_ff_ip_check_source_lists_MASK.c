
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_3__ {int nb_exclude_addrs; int nb_include_addrs; int * include_addrs; int * exclude_addrs; } ;
typedef TYPE_1__ IPSourceFilters ;


 int FUNC_0 (struct sockaddr_storage*,int *) ;

int FUNC_1(struct sockaddr_storage *VAR_0, IPSourceFilters *VAR_1)
{
    int VAR_2;
    if (VAR_1->nb_exclude_addrs) {
        for (VAR_2 = 0; VAR_2 < VAR_1->nb_exclude_addrs; VAR_2++) {
            if (!FUNC_0(VAR_0, &VAR_1->exclude_addrs[VAR_2]))
                return 1;
        }
    }
    if (VAR_1->nb_include_addrs) {
        for (VAR_2 = 0; VAR_2 < VAR_1->nb_include_addrs; VAR_2++) {
            if (!FUNC_0(VAR_0, &VAR_1->include_addrs[VAR_2]))
                return 0;
        }
        return 1;
    }
    return 0;
}

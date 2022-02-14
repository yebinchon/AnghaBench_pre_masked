
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nb_exclude_addrs; scalar_t__ nb_include_addrs; int exclude_addrs; int include_addrs; } ;
typedef TYPE_1__ IPSourceFilters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,char*) ;
 int FUNC_2 (void*,char const*,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const char *VAR_3, IPSourceFilters *VAR_4, int VAR_5)
{
    int VAR_6;
    if (VAR_5)
        VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_4->include_addrs, &VAR_4->nb_include_addrs);
    else
        VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_4->exclude_addrs, &VAR_4->nb_exclude_addrs);

    if (VAR_6 >= 0 && VAR_4->nb_include_addrs && VAR_4->nb_exclude_addrs) {
        FUNC_1(VAR_2, VAR_0, "Simultaneously including and excluding sources is not supported.\n");
        return FUNC_0(VAR_1);
    }
    return VAR_6;
}

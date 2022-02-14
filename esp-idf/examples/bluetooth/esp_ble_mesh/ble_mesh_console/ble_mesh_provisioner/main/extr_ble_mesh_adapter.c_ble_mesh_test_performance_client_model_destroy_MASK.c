
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ statistics; scalar_t__ node_num; scalar_t__ ttl; scalar_t__ test_num; int * package_index; int * time; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{
    if (VAR_0.time != ((void*)0)) {
        FUNC_0(VAR_0.time);
    }

    if (VAR_0.package_index != ((void*)0)) {
        FUNC_0(VAR_0.package_index);
    }

    VAR_0.test_num = 0;
    VAR_0.ttl = 0;
    VAR_0.node_num = 0;
    VAR_0.statistics = 0;
}

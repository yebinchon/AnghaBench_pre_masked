
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * set_info; } ;
typedef TYPE_1__ example_fast_prov_server_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(example_fast_prov_server_t *VAR_0)
{
    if (VAR_0 && VAR_0->set_info) {
        FUNC_0(VAR_0->set_info);
        VAR_0->set_info = ((void*)0);
    }
}

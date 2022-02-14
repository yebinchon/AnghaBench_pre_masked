
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int x86_pkg_t ;
struct TYPE_4__ {int * package; } ;
struct TYPE_5__ {TYPE_1__ lcpu; } ;
typedef TYPE_2__ cpu_data_t ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static x86_pkg_t *
FUNC_1(void)
{
    cpu_data_t *VAR_0 = FUNC_0();

    return(VAR_0->lcpu.package);
}

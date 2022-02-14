
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* cores; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_6__ {TYPE_1__* package; struct TYPE_6__* next_in_pkg; } ;
typedef TYPE_2__ x86_core_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(x86_pkg_t *VAR_0, x86_core_t *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    VAR_1->next_in_pkg = VAR_0->cores;
    VAR_1->package = VAR_0;
    VAR_0->cores = VAR_1;
}

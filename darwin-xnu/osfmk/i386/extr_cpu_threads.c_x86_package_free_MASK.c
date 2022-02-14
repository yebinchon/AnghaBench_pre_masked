
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_6__ {int nPackages; } ;


 int FUNC_0 (long*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(x86_pkg_t *VAR_3)
{
    FUNC_1(&VAR_2);
    VAR_3->next = VAR_0;
    VAR_0 = VAR_3;
    FUNC_0((long *) &VAR_1.nPackages, 1);
    FUNC_2(&VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ppkg_num; int lpkg_num; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_8__ {int cpu_num; int pnum; int master; int primary; int lnum; TYPE_1__* package; TYPE_3__* die; TYPE_4__* core; } ;
typedef TYPE_2__ x86_lcpu_t ;
struct TYPE_9__ {int pdie_num; int ldie_num; } ;
typedef TYPE_3__ x86_die_t ;
struct TYPE_10__ {int pcore_num; int lcore_num; } ;
typedef TYPE_4__ x86_core_t ;
struct TYPE_11__ {int nLThreadsPerPackage; int nLThreadsPerCore; int nLCoresPerDie; int nLDiesPerPackage; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;

void
FUNC_1(x86_lcpu_t *VAR_2, int VAR_3, int VAR_4)
{
    x86_core_t *VAR_5 = VAR_2->core;
    x86_die_t *VAR_6 = VAR_2->die;
    x86_pkg_t *VAR_7 = VAR_2->package;

    FUNC_0(VAR_5 != ((void*)0));
    FUNC_0(VAR_6 != ((void*)0));
    FUNC_0(VAR_7 != ((void*)0));

    VAR_2->cpu_num = VAR_4;
    VAR_2->pnum = VAR_3;
    VAR_2->master = (VAR_4 == VAR_0);
    VAR_2->primary = (VAR_4 % VAR_1.nLThreadsPerPackage) == 0;

    VAR_2->lnum = VAR_4 % VAR_1.nLThreadsPerCore;

    VAR_5->pcore_num = VAR_4 / VAR_1.nLThreadsPerCore;
    VAR_5->lcore_num = VAR_5->pcore_num % VAR_1.nLCoresPerDie;

    VAR_6->pdie_num = VAR_4 / (VAR_1.nLThreadsPerCore*VAR_1.nLCoresPerDie);
    VAR_6->ldie_num = VAR_6->pdie_num % VAR_1.nLDiesPerPackage;

    VAR_7->ppkg_num = VAR_4 / VAR_1.nLThreadsPerPackage;
    VAR_7->lpkg_num = VAR_7->ppkg_num;

}

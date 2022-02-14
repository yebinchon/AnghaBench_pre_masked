
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; TYPE_3__* dies; int lpkg_num; int ppkg_num; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_7__ {struct TYPE_7__* next_in_core; scalar_t__ primary; scalar_t__ master; int lnum; int pnum; int cpu_num; } ;
typedef TYPE_2__ x86_lcpu_t ;
struct TYPE_8__ {struct TYPE_8__* next_in_pkg; TYPE_4__* cores; int ldie_num; int pdie_num; } ;
typedef TYPE_3__ x86_die_t ;
struct TYPE_9__ {struct TYPE_9__* next_in_die; TYPE_2__* lcpus; int lcore_num; int pcore_num; } ;
typedef TYPE_4__ x86_core_t ;


 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(void)
{
    x86_pkg_t *VAR_1;
    x86_die_t *VAR_2;
    x86_core_t *VAR_3;
    x86_lcpu_t *VAR_4;

    VAR_1 = VAR_0;
    while (VAR_1 != ((void*)0)) {
 FUNC_0("Package:\n");
 FUNC_0("    Physical: %d\n", VAR_1->ppkg_num);
 FUNC_0("    Logical:  %d\n", VAR_1->lpkg_num);

 VAR_2 = VAR_1->dies;
 while (VAR_2 != ((void*)0)) {
     FUNC_0("    Die:\n");
     FUNC_0("        Physical: %d\n", VAR_2->pdie_num);
     FUNC_0("        Logical:  %d\n", VAR_2->ldie_num);

     VAR_3 = VAR_2->cores;
     while (VAR_3 != ((void*)0)) {
  FUNC_0("        Core:\n");
  FUNC_0("            Physical: %d\n", VAR_3->pcore_num);
  FUNC_0("            Logical:  %d\n", VAR_3->lcore_num);

  VAR_4 = VAR_3->lcpus;
  while (VAR_4 != ((void*)0)) {
      FUNC_0("            LCPU:\n");
      FUNC_0("                CPU #:    %d\n", VAR_4->cpu_num);
      FUNC_0("                Physical: %d\n", VAR_4->pnum);
      FUNC_0("                Logical:  %d\n", VAR_4->lnum);
      FUNC_0("                Flags:    ");
      if (VAR_4->master)
   FUNC_0("MASTER ");
      if (VAR_4->primary)
   FUNC_0("PRIMARY");
      if (!VAR_4->master && !VAR_4->primary)
   FUNC_0("(NONE)");
      FUNC_0("\n");

      VAR_4 = VAR_4->next_in_core;
  }

  VAR_3 = VAR_3->next_in_die;
     }

     VAR_2 = VAR_2->next_in_pkg;
 }

 VAR_1 = VAR_1->next;
    }
}

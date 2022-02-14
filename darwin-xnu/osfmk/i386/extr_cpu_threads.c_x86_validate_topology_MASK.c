
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lpkg_num; struct TYPE_7__* next; TYPE_2__* lcpus; TYPE_4__* cores; TYPE_3__* dies; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_8__ {int cpu_num; struct TYPE_8__* next_in_pkg; TYPE_1__* package; struct TYPE_8__* next_in_core; TYPE_4__* core; struct TYPE_8__* next_in_die; TYPE_3__* die; } ;
typedef TYPE_2__ x86_lcpu_t ;
struct TYPE_9__ {int pdie_num; struct TYPE_9__* next_in_pkg; TYPE_2__* lcpus; TYPE_4__* cores; TYPE_1__* package; } ;
typedef TYPE_3__ x86_die_t ;
struct TYPE_10__ {int pcore_num; struct TYPE_10__* next_in_pkg; TYPE_2__* lcpus; TYPE_1__* package; struct TYPE_10__* next_in_die; TYPE_3__* die; } ;
typedef TYPE_4__ x86_core_t ;
typedef int uint32_t ;
struct TYPE_11__ {int nPackages; int nLThreadsPerPackage; int nLCoresPerDie; int nLThreadsPerDie; int nLDiesPerPackage; int nLThreadsPerCore; int nLCoresPerPackage; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_3(void)
{
    x86_pkg_t *VAR_4;
    x86_die_t *VAR_5;
    x86_core_t *VAR_6;
    x86_lcpu_t *VAR_7;
    uint32_t VAR_8;
    uint32_t VAR_9;
    uint32_t VAR_10;

    if (VAR_2)
 FUNC_1();







    VAR_10 = VAR_1.nPackages * VAR_1.nLThreadsPerPackage;
    if (VAR_10 != VAR_0)
 FUNC_2("x86_validate_topology() %d threads but %d registered from MADT",
       VAR_10, VAR_0);

    VAR_4 = VAR_3;
    while (VAR_4 != ((void*)0)) {



 VAR_8 = 0;
 VAR_5 = VAR_4->dies;
 while (VAR_5 != ((void*)0)) {
     if (VAR_5->package == ((void*)0))
  FUNC_2("Die(%d)->package is NULL",
        VAR_5->pdie_num);
     if (VAR_5->package != VAR_4)
  FUNC_2("Die %d points to package %d, should be %d",
        VAR_5->pdie_num, VAR_5->package->lpkg_num, VAR_4->lpkg_num);

     FUNC_0("Die(%d)->package %d\n",
  VAR_5->pdie_num, VAR_4->lpkg_num);




     FUNC_0("Die(%d)->cores: ", VAR_5->pdie_num);
     VAR_9 = 0;
     VAR_6 = VAR_5->cores;
     while (VAR_6 != ((void*)0)) {
  if (VAR_6->die == ((void*)0))
      FUNC_2("Core(%d)->die is NULL",
     VAR_6->pcore_num);
  if (VAR_6->die != VAR_5)
      FUNC_2("Core %d points to die %d, should be %d",
     VAR_6->pcore_num, VAR_6->die->pdie_num, VAR_5->pdie_num);
  VAR_9 += 1;
  FUNC_0("%d ", VAR_6->pcore_num);
  VAR_6 = VAR_6->next_in_die;
     }
     FUNC_0("\n");

     if (VAR_9 != VAR_1.nLCoresPerDie)
  FUNC_2("Should have %d Cores, but only found %d for Die %d",
        VAR_1.nLCoresPerDie, VAR_9, VAR_5->pdie_num);




     FUNC_0("Die(%d)->lcpus: ", VAR_5->pdie_num);
     VAR_10 = 0;
     VAR_7 = VAR_5->lcpus;
     while (VAR_7 != ((void*)0)) {
  if (VAR_7->die == ((void*)0))
      FUNC_2("CPU(%d)->die is NULL",
     VAR_7->cpu_num);
  if (VAR_7->die != VAR_5)
      FUNC_2("CPU %d points to die %d, should be %d",
     VAR_7->cpu_num, VAR_7->die->pdie_num, VAR_5->pdie_num);
  VAR_10 += 1;
  FUNC_0("%d ", VAR_7->cpu_num);
  VAR_7 = VAR_7->next_in_die;
     }
     FUNC_0("\n");

     if (VAR_10 != VAR_1.nLThreadsPerDie)
  FUNC_2("Should have %d Threads, but only found %d for Die %d",
        VAR_1.nLThreadsPerDie, VAR_10, VAR_5->pdie_num);

     VAR_8 += 1;
     VAR_5 = VAR_5->next_in_pkg;
 }

 if (VAR_8 != VAR_1.nLDiesPerPackage)
     FUNC_2("Should have %d Dies, but only found %d for package %d",
    VAR_1.nLDiesPerPackage, VAR_8, VAR_4->lpkg_num);




 VAR_9 = 0;
 VAR_6 = VAR_4->cores;
 while (VAR_6 != ((void*)0)) {
     if (VAR_6->package == ((void*)0))
  FUNC_2("Core(%d)->package is NULL",
        VAR_6->pcore_num);
     if (VAR_6->package != VAR_4)
  FUNC_2("Core %d points to package %d, should be %d",
        VAR_6->pcore_num, VAR_6->package->lpkg_num, VAR_4->lpkg_num);
     FUNC_0("Core(%d)->package %d\n",
  VAR_6->pcore_num, VAR_4->lpkg_num);




     VAR_10 = 0;
     VAR_7 = VAR_6->lcpus;
     FUNC_0("Core(%d)->lcpus: ", VAR_6->pcore_num);
     while (VAR_7 != ((void*)0)) {
  if (VAR_7->core == ((void*)0))
      FUNC_2("CPU(%d)->core is NULL",
     VAR_7->cpu_num);
  if (VAR_7->core != VAR_6)
      FUNC_2("CPU %d points to core %d, should be %d",
     VAR_7->cpu_num, VAR_7->core->pcore_num, VAR_6->pcore_num);
  FUNC_0("%d ", VAR_7->cpu_num);
  VAR_10 += 1;
  VAR_7 = VAR_7->next_in_core;
     }
     FUNC_0("\n");

     if (VAR_10 != VAR_1.nLThreadsPerCore)
  FUNC_2("Should have %d Threads, but only found %d for Core %d",
        VAR_1.nLThreadsPerCore, VAR_10, VAR_6->pcore_num);
     VAR_9 += 1;
     VAR_6 = VAR_6->next_in_pkg;
 }

 if (VAR_9 != VAR_1.nLCoresPerPackage)
     FUNC_2("Should have %d Cores, but only found %d for package %d",
    VAR_1.nLCoresPerPackage, VAR_9, VAR_4->lpkg_num);




 VAR_10 = 0;
 VAR_7 = VAR_4->lcpus;
 while (VAR_7 != ((void*)0)) {
     if (VAR_7->package == ((void*)0))
  FUNC_2("CPU(%d)->package is NULL",
        VAR_7->cpu_num);
     if (VAR_7->package != VAR_4)
  FUNC_2("CPU %d points to package %d, should be %d",
        VAR_7->cpu_num, VAR_7->package->lpkg_num, VAR_4->lpkg_num);
     FUNC_0("CPU(%d)->package %d\n",
  VAR_7->cpu_num, VAR_4->lpkg_num);
     VAR_10 += 1;
     VAR_7 = VAR_7->next_in_pkg;
 }

 if (VAR_10 != VAR_1.nLThreadsPerPackage)
     FUNC_2("Should have %d Threads, but only found %d for package %d",
    VAR_1.nLThreadsPerPackage, VAR_10, VAR_4->lpkg_num);

 VAR_4 = VAR_4->next;
    }
}

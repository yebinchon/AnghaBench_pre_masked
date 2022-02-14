
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_19__ {struct TYPE_19__* next; } ;
typedef TYPE_1__ x86_pkg_t ;
typedef int x86_die_t ;
struct TYPE_20__ {int package; int die; } ;
typedef TYPE_2__ x86_core_t ;
typedef int uint32_t ;
struct TYPE_21__ {int lcpu; int cpu_threadtype; int cpu_phys_number; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_18__ {int physical_cpu_max; int logical_cpu_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_16__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int ,int *) ;
 int * FUNC_11 (int) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (int ,int *) ;
 TYPE_1__* FUNC_19 (int) ;
 TYPE_1__* FUNC_20 (int) ;
 int FUNC_21 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void *
FUNC_22(int VAR_6)
{
    x86_core_t *VAR_7 = ((void*)0);
    x86_die_t *VAR_8 = ((void*)0);
    x86_pkg_t *VAR_9 = ((void*)0);
    cpu_data_t *VAR_10;
    uint32_t VAR_11;




    FUNC_3(&VAR_5);




    if (!VAR_3)
 FUNC_2();

    VAR_10 = FUNC_0(VAR_6);

    VAR_11 = VAR_10->cpu_phys_number;

    FUNC_15(VAR_6);




    if (FUNC_1()) {
 VAR_10->cpu_threadtype = VAR_0;
    } else {
 VAR_10->cpu_threadtype = VAR_1;
    }




    do {
 VAR_9 = FUNC_20(VAR_6);
 if (VAR_9 == ((void*)0)) {



     FUNC_4(&VAR_5);
     VAR_9 = FUNC_19(VAR_6);
     FUNC_3(&VAR_5);
     if (FUNC_20(VAR_6) != ((void*)0)) {
  FUNC_21(VAR_9);
  continue;
     }




     VAR_9->next = VAR_4;
     VAR_4 = VAR_9;
 }
    } while (VAR_9 == ((void*)0));




    do {
 VAR_8 = FUNC_12(VAR_6);
 if (VAR_8 == ((void*)0)) {



     FUNC_4(&VAR_5);
     VAR_8 = FUNC_11(VAR_6);
     FUNC_3(&VAR_5);
     if (FUNC_12(VAR_6) != ((void*)0)) {
  FUNC_13(VAR_8);
  continue;
     }




     FUNC_17(VAR_9, VAR_8);
 }
    } while (VAR_8 == ((void*)0));




    do {
 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 == ((void*)0)) {



     FUNC_4(&VAR_5);
     VAR_7 = FUNC_6(VAR_6);
     FUNC_3(&VAR_5);
     if (FUNC_7(VAR_6) != ((void*)0)) {
  FUNC_8(VAR_7);
  continue;
     }




     FUNC_9(VAR_8, VAR_7);
     FUNC_16(VAR_9, VAR_7);
     VAR_2.physical_cpu_max += 1;
 }
    } while (VAR_7 == ((void*)0));





    VAR_2.logical_cpu_max += 1;
    FUNC_4(&VAR_5);




    FUNC_5(VAR_7, &VAR_10->lcpu);
    FUNC_10(VAR_7->die, &VAR_10->lcpu);
    FUNC_18(VAR_7->package, &VAR_10->lcpu);
    FUNC_14(&VAR_10->lcpu);

    return (void *) VAR_7;
}

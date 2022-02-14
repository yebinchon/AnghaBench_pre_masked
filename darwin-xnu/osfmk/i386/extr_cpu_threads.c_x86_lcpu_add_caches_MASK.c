
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {struct TYPE_14__* next_in_die; int ** caches; TYPE_2__* die; struct TYPE_14__* next_in_core; TYPE_4__* core; } ;
typedef TYPE_1__ x86_lcpu_t ;
struct TYPE_15__ {TYPE_1__* lcpus; } ;
typedef TYPE_2__ x86_die_t ;
struct TYPE_16__ {size_t level; int maxcpus; struct TYPE_16__* next; } ;
typedef TYPE_3__ x86_cpu_cache_t ;
struct TYPE_17__ {TYPE_1__* lcpus; } ;
typedef TYPE_4__ x86_core_t ;
typedef size_t uint32_t ;
typedef int boolean_t ;
struct TYPE_13__ {size_t LLCDepth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_12__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 () ;
 TYPE_3__* FUNC_6 (int *,TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(x86_lcpu_t *VAR_4)
{
    x86_cpu_cache_t *VAR_5;
    x86_cpu_cache_t *VAR_6;
    x86_cpu_cache_t *VAR_7;
    x86_die_t *VAR_8;
    x86_core_t *VAR_9;
    x86_lcpu_t *VAR_10;
    uint32_t VAR_11;
    boolean_t VAR_12 = VAR_0;

    FUNC_0(VAR_4 != ((void*)0));




    VAR_5 = FUNC_5();

    FUNC_1(&VAR_3);

    while (VAR_5 != ((void*)0)) {



 VAR_6 = VAR_5;
 VAR_5 = VAR_6->next;
 VAR_6->next = ((void*)0);
 VAR_11 = VAR_6->level - 1;





 if (VAR_6->maxcpus == 1) {
     FUNC_3(VAR_6, VAR_4);
     continue;
 }






 if (VAR_4->caches[VAR_11] != ((void*)0)) {
     FUNC_4(VAR_6);
     continue;
 }
 if (VAR_11 < VAR_2.LLCDepth) {



     VAR_9 = VAR_4->core;
     VAR_10 = VAR_9->lcpus;
     while (VAR_10 != ((void*)0)) {



  if (VAR_10 == VAR_4) {
      VAR_10 = VAR_10->next_in_core;
      continue;
  }





  VAR_7 = FUNC_6(VAR_10->caches[VAR_11], VAR_6);
  if (VAR_7 != ((void*)0)) {
      FUNC_4(VAR_6);
      FUNC_3(VAR_7, VAR_4);
      VAR_12 = VAR_1;
      break;
  }

  VAR_10 = VAR_10->next_in_core;
     }
 } else {



     VAR_8 = VAR_4->die;
     VAR_10 = VAR_8->lcpus;
     while (VAR_10 != ((void*)0)) {



  if (VAR_10 == VAR_4) {
      VAR_10 = VAR_10->next_in_die;
      continue;
  }





  VAR_7 = FUNC_6(VAR_10->caches[VAR_11], VAR_6);
  if (VAR_7 != ((void*)0)) {
      FUNC_4(VAR_6);
      FUNC_3(VAR_7, VAR_4);
      VAR_12 = VAR_1;
      break;
  }

  VAR_10 = VAR_10->next_in_die;
     }
 }





 if (!VAR_12) {
     FUNC_3(VAR_6, VAR_4);
 }
    }

    FUNC_2(&VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int rip; } ;
struct TYPE_12__ {TYPE_1__ isf; scalar_t__ rbp; } ;
struct TYPE_13__ {TYPE_2__ ss_64; } ;
typedef TYPE_3__ x86_saved_state_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef TYPE_4__* thread_t ;
typedef TYPE_5__* task_t ;
typedef int pmap_t ;
struct TYPE_15__ {int thread_count; int threads; } ;
struct TYPE_14__ {int task_threads; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,char const*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

void
FUNC_7(task_t VAR_1)
{
 thread_t VAR_2 = FUNC_0();
 x86_saved_state_t *VAR_3;
 pmap_t VAR_4 = 0;
 uint64_t VAR_5;
 const char *VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0, VAR_2 = (thread_t) FUNC_5(&VAR_1->threads); VAR_7 < VAR_1->thread_count;
   ++VAR_7, VAR_2 = (thread_t) FUNC_6(&VAR_2->task_threads)) {

  FUNC_3("Thread %d: %p\n", VAR_7, VAR_2);
  VAR_4 = FUNC_1(VAR_1);
  VAR_3 = FUNC_2(VAR_2);
  VAR_5 = VAR_3->ss_64.rbp;
  FUNC_3("\t0x%016llx\n", VAR_3->ss_64.isf.rip);
  FUNC_4(VAR_4, (vm_offset_t)VAR_5, VAR_6, VAR_0);
  FUNC_3("\n");
 }
}

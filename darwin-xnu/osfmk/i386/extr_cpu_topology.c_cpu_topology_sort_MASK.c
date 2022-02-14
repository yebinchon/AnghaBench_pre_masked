
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ lnum; TYPE_1__* core; int cpu_num; TYPE_3__** caches; } ;
typedef TYPE_2__ x86_lcpu_t ;
struct TYPE_16__ {scalar_t__ type; } ;
typedef TYPE_3__ x86_cpu_cache_t ;
struct TYPE_17__ {scalar_t__ pset; int num; TYPE_3__* cache; struct TYPE_17__* next; } ;
typedef TYPE_4__ x86_affinity_set_t ;
typedef int * processor_t ;
struct TYPE_18__ {scalar_t__ cpu_number; int * cpu_processor; int cpu_phys_number; int lcpu; } ;
typedef TYPE_5__ cpu_data_t ;
typedef int boolean_t ;
struct TYPE_20__ {int physical_cpu; int logical_cpu; } ;
struct TYPE_19__ {int LLCDepth; int stable; } ;
struct TYPE_14__ {int num_lcpus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int * VAR_4 ;
 TYPE_5__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int) ;
 TYPE_4__* FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,int,TYPE_5__*,int ,int) ;
 int FUNC_9 (int ,int) ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (void*,int,int,int ) ;
 TYPE_7__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_4__* VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 () ;

void
FUNC_21(int VAR_13)
{
 int VAR_14;
 boolean_t VAR_15;
 processor_t VAR_16 = ((void*)0);

 FUNC_1(VAR_6.physical_cpu == 1);
 FUNC_1(VAR_6.logical_cpu == 1);
 FUNC_1(VAR_7 == 0);
 FUNC_1(FUNC_3() == 0);
 FUNC_1(FUNC_2(0)->cpu_number == 0);


 VAR_15 = FUNC_10(VAR_1);

 if (VAR_10) {
  FUNC_0("cpu_topology_start() %d cpu%s registered\n",
   VAR_13, (VAR_13 > 1) ? "s" : "");
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   cpu_data_t *VAR_17 = FUNC_2(VAR_14);
   FUNC_0("\tcpu_data[%d]:%p local apic 0x%x\n",
    VAR_14, (void *) VAR_17, VAR_17->cpu_phys_number);
  }
 }





 if (VAR_13 > 1) {
  FUNC_18((void *) &VAR_4[1],
   VAR_13 - 1,
   sizeof(cpu_data_t *),
   VAR_5);
 }
 if (VAR_10) {
  FUNC_0("cpu_topology_start() after sorting:\n");
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   cpu_data_t *VAR_18 = FUNC_2(VAR_14);
   FUNC_0("\tcpu_data[%d]:%p local apic 0x%x\n",
    VAR_14, (void *) VAR_18, VAR_18->cpu_phys_number);
  }
 }




 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  cpu_data_t *VAR_19 = FUNC_2(VAR_14);

  if (VAR_19->cpu_number != VAR_14) {
   FUNC_8("cpu_datap(%d):%p local apic id 0x%x "
    "remapped from %d\n",
    VAR_14, VAR_19, VAR_19->cpu_phys_number,
    VAR_19->cpu_number);
  }
  VAR_19->cpu_number = VAR_14;
  FUNC_9(VAR_19->cpu_phys_number, VAR_14);
  FUNC_19(&VAR_19->lcpu, VAR_19->cpu_phys_number, VAR_14);
 }

 FUNC_4(VAR_13);
 FUNC_20();

 FUNC_10(VAR_15);
 FUNC_0("cpu_topology_start() LLC is L%d\n", VAR_9.LLCDepth + 1);




 VAR_9.stable = VAR_3;
 FUNC_12();






 FUNC_0("cpu_topology_start() creating affinity sets:\n");
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  cpu_data_t *VAR_20 = FUNC_2(VAR_14);
  x86_lcpu_t *VAR_21 = FUNC_5(VAR_14);
  x86_cpu_cache_t *VAR_22;
  x86_affinity_set_t *VAR_23;

  VAR_22 = VAR_21->caches[VAR_9.LLCDepth];
  FUNC_1(VAR_22->type == VAR_0);
  VAR_23 = FUNC_6(VAR_22);
  if (VAR_23 == ((void*)0)) {
   VAR_23 = (x86_affinity_set_t *) FUNC_7(sizeof(*VAR_23));
   if (VAR_23 == ((void*)0))
    FUNC_11("cpu_topology_start() failed aset alloc");
   VAR_23->next = VAR_11;
   VAR_11 = VAR_23;
   VAR_23->num = VAR_12++;
   VAR_23->cache = VAR_22;
   VAR_23->pset = (VAR_14 == VAR_7) ?
     FUNC_14(VAR_8) :
     FUNC_16(FUNC_17());
   if (VAR_23->pset == VAR_2)
    FUNC_11("cpu_topology_start: pset_create");
   FUNC_0("\tnew set %p(%d) pset %p for cache %p\n",
    VAR_23, VAR_23->num, VAR_23->pset, VAR_23->cache);
  }

  FUNC_0("\tprocessor_init set %p(%d) lcpup %p(%d) cpu %p processor %p\n",
   VAR_23, VAR_23->num, VAR_21, VAR_21->cpu_num, VAR_20, VAR_20->cpu_processor);

  if (VAR_14 != VAR_7)
   FUNC_13(VAR_20->cpu_processor, VAR_14, VAR_23->pset);

  if (VAR_21->core->num_lcpus > 1) {
   if (VAR_21->lnum == 0)
    VAR_16 = VAR_20->cpu_processor;

   FUNC_15(VAR_20->cpu_processor, VAR_16);
  }
 }
}

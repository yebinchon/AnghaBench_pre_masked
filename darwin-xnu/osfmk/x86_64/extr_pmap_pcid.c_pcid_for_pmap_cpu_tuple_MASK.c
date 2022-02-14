
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef TYPE_3__* pmap_t ;
typedef int pcid_t ;
struct TYPE_9__ {int * pmap_pcid_cpus; int pagezero_accessible; } ;
struct TYPE_7__ {int specFlags; } ;
struct TYPE_8__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* VAR_1 ;

pcid_t FUNC_1(pmap_t VAR_2, thread_t VAR_3, int VAR_4) {
 pmap_t VAR_5 = VAR_2;

 if (FUNC_0(VAR_2->pagezero_accessible)) {
  if ((VAR_3->machine.specFlags & VAR_0) == 0) {
   VAR_5 = VAR_1;
  }
 }

 return VAR_5->pmap_pcid_cpus[VAR_4];
}

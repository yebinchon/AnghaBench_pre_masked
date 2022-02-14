
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int pcid_t ;
struct TYPE_3__ {scalar_t__* pmap_pcid_cpus; } ;



void FUNC_0(pmap_t VAR_0) {
 unsigned VAR_1;
 unsigned VAR_2 = sizeof(VAR_0->pmap_pcid_cpus)/sizeof(pcid_t);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  VAR_0->pmap_pcid_cpus[VAR_1] = 0;



 }
}

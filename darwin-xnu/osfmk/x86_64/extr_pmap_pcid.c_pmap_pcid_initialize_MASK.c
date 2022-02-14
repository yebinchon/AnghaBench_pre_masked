
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int pcid_t ;
struct TYPE_3__ {int * pmap_pcid_cpus; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;

void FUNC_1(pmap_t VAR_2) {
 unsigned VAR_3;
 unsigned VAR_4 = sizeof(VAR_2->pmap_pcid_cpus)/sizeof(pcid_t);

 FUNC_0(VAR_4 >= VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2->pmap_pcid_cpus[VAR_3] = VAR_0;



 }
}

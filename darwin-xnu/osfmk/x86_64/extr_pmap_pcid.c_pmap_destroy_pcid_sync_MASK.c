
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {scalar_t__* pmap_pcid_cpus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_1__*) ;

void FUNC_4(pmap_t VAR_3) {
 int VAR_4;
 FUNC_2(FUNC_1() == VAR_0 || FUNC_0() !=0);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_3->pmap_pcid_cpus[VAR_4] != VAR_1)
   FUNC_3(VAR_4, VAR_3);
}

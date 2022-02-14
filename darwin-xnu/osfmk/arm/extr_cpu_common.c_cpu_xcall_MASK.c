
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kern_return_t ;
typedef int cpu_data_t ;
typedef scalar_t__ broadcastFunc ;
struct TYPE_2__ {scalar_t__ cpu_data_vaddr; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,void*,void*) ;
 int FUNC_1 () ;

kern_return_t
FUNC_2(int VAR_3, broadcastFunc VAR_4, void *VAR_5)
{
 cpu_data_t *VAR_6;

 if ((VAR_3 < 0) || (VAR_3 > FUNC_1()))
  return VAR_1;

 VAR_6 = (cpu_data_t*)VAR_0[VAR_3].cpu_data_vaddr;
 if (VAR_6 == ((void*)0))
  return VAR_1;

 return FUNC_0(VAR_6, VAR_2, (void*)VAR_4, VAR_5);
}

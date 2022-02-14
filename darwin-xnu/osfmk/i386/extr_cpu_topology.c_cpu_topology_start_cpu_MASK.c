
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_4__ {int cpu_processor; int cpu_number; } ;
struct TYPE_3__ {int max_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ) ;

kern_return_t
FUNC_3( int VAR_3 )
{
 int VAR_4 = VAR_2.max_cpus;
 int VAR_5 = VAR_3;


 FUNC_0("cpu_topology_start() processor_start():\n");
 if( VAR_5 < VAR_4)
 {
  FUNC_0("\tlcpu %d\n", FUNC_1(VAR_5)->cpu_number);
  FUNC_2(FUNC_1(VAR_5)->cpu_processor);
  return VAR_1;
 }
 else
     return VAR_0;
}

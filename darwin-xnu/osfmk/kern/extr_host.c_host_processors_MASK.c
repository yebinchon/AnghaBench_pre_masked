
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* processor_t ;
typedef scalar_t__ processor_array_t ;
typedef scalar_t__ mach_port_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int * host_priv_t ;
struct TYPE_4__ {struct TYPE_4__* processor_list; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int ) ;
 unsigned int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

kern_return_t
FUNC_5(host_priv_t VAR_8, processor_array_t * VAR_9, mach_msg_type_number_t * VAR_10)
{
 processor_t VAR_11, *VAR_12;
 void * VAR_13;
 unsigned int VAR_14, VAR_15;

 if (VAR_8 == VAR_0)
  return (VAR_1);

 FUNC_0(VAR_8 == &VAR_7);

 VAR_14 = VAR_4;
 FUNC_0(VAR_14 != 0);

 VAR_13 = FUNC_2((vm_size_t)(VAR_14 * sizeof(mach_port_t)));
 if (VAR_13 == 0)
  return (VAR_2);

 VAR_12 = (processor_t *)VAR_13;
 *VAR_12++ = VAR_11 = VAR_5;

 if (VAR_14 > 1) {
  FUNC_3(&VAR_6);

  for (VAR_15 = 1; VAR_15 < VAR_14; VAR_15++)
   *VAR_12++ = VAR_11 = VAR_11->processor_list;

  FUNC_4(&VAR_6);
 }

 *VAR_10 = VAR_14;
 *VAR_9 = (processor_array_t)VAR_13;


 VAR_12 = (processor_t *)VAR_13;
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  ((mach_port_t *)VAR_12)[VAR_15] = (mach_port_t)FUNC_1(VAR_12[VAR_15]);

 return (VAR_3);
}

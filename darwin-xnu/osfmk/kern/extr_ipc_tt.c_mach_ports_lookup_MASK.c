
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* task_t ;
typedef scalar_t__ mach_port_array_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_6__ {scalar_t__ itk_self; int * itk_registered; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*,scalar_t__) ;

kern_return_t
FUNC_5(
 task_t VAR_6,
 mach_port_array_t *VAR_7,
 mach_msg_type_number_t *VAR_8)
{
 void *VAR_9;
 vm_size_t VAR_10;
 ipc_port_t *VAR_11;
 int VAR_12;

 if (VAR_6 == VAR_4)
  return VAR_1;

 VAR_10 = (vm_size_t) (VAR_5 * sizeof(ipc_port_t));

 VAR_9 = FUNC_3(VAR_10);
 if (VAR_9 == 0)
  return VAR_2;

 FUNC_1(VAR_6);
 if (VAR_6->itk_self == VAR_0) {
  FUNC_2(VAR_6);

  FUNC_4(VAR_9, VAR_10);
  return VAR_1;
 }

 VAR_11 = (ipc_port_t *) VAR_9;






 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  VAR_11[VAR_12] = FUNC_0(VAR_6->itk_registered[VAR_12]);

 FUNC_2(VAR_6);

 *VAR_7 = (mach_port_array_t) VAR_11;
 *VAR_8 = VAR_5;
 return VAR_3;
}

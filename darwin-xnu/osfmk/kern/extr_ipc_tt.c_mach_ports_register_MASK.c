
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* task_t ;
typedef int mach_port_t ;
typedef scalar_t__* mach_port_array_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_6__ {scalar_t__ itk_self; scalar_t__* itk_registered; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,int ) ;

kern_return_t
FUNC_5(
 task_t VAR_5,
 mach_port_array_t VAR_6,
 mach_msg_type_number_t VAR_7)
{
 ipc_port_t VAR_8[VAR_4];
 unsigned int VAR_9;

 if ((VAR_5 == VAR_3) ||
     (VAR_7 > VAR_4) ||
     (VAR_7 && VAR_6 == ((void*)0)))
  return VAR_1;





 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_8[VAR_9] = VAR_6[VAR_9];
 for (; VAR_9 < VAR_4; VAR_9++)
  VAR_8[VAR_9] = VAR_0;

 FUNC_2(VAR_5);
 if (VAR_5->itk_self == VAR_0) {
  FUNC_3(VAR_5);
  return VAR_1;
 }






 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  ipc_port_t VAR_10;

  VAR_10 = VAR_5->itk_registered[VAR_9];
  VAR_5->itk_registered[VAR_9] = VAR_8[VAR_9];
  VAR_8[VAR_9] = VAR_10;
 }

 FUNC_3(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  if (FUNC_0(VAR_8[VAR_9]))
   FUNC_1(VAR_8[VAR_9]);






 if (VAR_7 != 0)
  FUNC_4(VAR_6,
        (vm_size_t) (VAR_7 * sizeof(mach_port_t)));

 return VAR_2;
}

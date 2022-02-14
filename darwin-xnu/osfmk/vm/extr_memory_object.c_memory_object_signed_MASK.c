
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_6__ {int code_signed; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(
 memory_object_control_t VAR_3,
 boolean_t VAR_4)
{
 vm_object_t VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == VAR_2)
  return VAR_0;

 FUNC_1(VAR_5);
 VAR_5->code_signed = VAR_4;
 FUNC_2(VAR_5);

 return VAR_1;
}

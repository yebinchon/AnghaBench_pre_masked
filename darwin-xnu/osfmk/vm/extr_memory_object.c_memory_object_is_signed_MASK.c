
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int memory_object_control_t ;
typedef int boolean_t ;
struct TYPE_6__ {int code_signed; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

boolean_t
FUNC_3(
 memory_object_control_t VAR_2)
{
 boolean_t VAR_3;
 vm_object_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == VAR_1)
  return VAR_0;

 FUNC_1(VAR_4);
 VAR_3 = VAR_4->code_signed;
 FUNC_2(VAR_4);

 return VAR_3;
}

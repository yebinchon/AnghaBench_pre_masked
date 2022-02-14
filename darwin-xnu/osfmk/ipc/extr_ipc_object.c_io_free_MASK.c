
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ipc_port_t ;
typedef scalar_t__ ipc_object_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

void
FUNC_3(
 unsigned int VAR_2,
 ipc_object_t VAR_3)
{
 ipc_port_t VAR_4;

 if (VAR_2 == VAR_0) {
  VAR_4 = (ipc_port_t) VAR_3;
  FUNC_1(VAR_4);
 }
 FUNC_0(VAR_3);
 FUNC_2(VAR_1[VAR_2], VAR_3);
}

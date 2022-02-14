
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int processor_set_t ;
typedef int processor_set_name_t ;
typedef int ipc_port_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;

processor_set_name_t
FUNC_3(
 ipc_port_t VAR_3)
{
 boolean_t VAR_4;
 processor_set_t VAR_5 = VAR_1;

 VAR_4 = VAR_0;
 while (!VAR_4 && FUNC_0(VAR_3)) {
  FUNC_1(VAR_3);
  VAR_4 = FUNC_2(VAR_3, VAR_2, &VAR_5);

 }
 return VAR_5;
}

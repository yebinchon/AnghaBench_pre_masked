
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_name_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_6__ {scalar_t__ itk_nself; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

ipc_port_t
FUNC_4(
 task_name_t VAR_1)
{
 ipc_port_t VAR_2;

 FUNC_1(VAR_1);
 if (VAR_1->itk_nself != VAR_0)
  VAR_2 = FUNC_0(VAR_1->itk_nself);
 else
  VAR_2 = VAR_0;
 FUNC_2(VAR_1);

 FUNC_3(VAR_1);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int ipc_space_t ;
typedef int ipc_port_t ;
struct TYPE_5__ {int itk_space; int active; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

ipc_space_t
FUNC_3(
 ipc_port_t VAR_2)
{
 ipc_space_t VAR_3;
 task_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4 == VAR_1)
  return VAR_0;

 if (!VAR_4->active) {
  FUNC_2(VAR_4);
  return VAR_0;
 }

 VAR_3 = VAR_4->itk_space;
 FUNC_1(VAR_3);
 FUNC_2(VAR_4);
 return (VAR_3);
}

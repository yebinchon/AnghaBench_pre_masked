
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct exception_action {TYPE_2__* port; } ;
typedef int lck_mtx_t ;
typedef int kern_return_t ;
typedef TYPE_2__* ipc_port_t ;
typedef size_t exception_type_t ;
struct TYPE_7__ {scalar_t__ ip_receiver; } ;
struct TYPE_6__ {scalar_t__ itk_space; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

kern_return_t
FUNC_5(
 exception_type_t VAR_3,
 struct exception_action *VAR_4,
 lck_mtx_t *VAR_5)
{
 kern_return_t VAR_6 = VAR_2;

 if (VAR_4 == ((void*)0) || VAR_3 != VAR_0)
  return VAR_6;

 task_t VAR_7 = FUNC_1();
 FUNC_3(VAR_5);
 ipc_port_t VAR_8 = VAR_4[VAR_3].port;
 if ( FUNC_0(VAR_8)
       && FUNC_2(VAR_8)
       && VAR_7->itk_space == VAR_8->ip_receiver)
  VAR_6 = VAR_1;
 FUNC_4(VAR_5);
 return VAR_6;
}

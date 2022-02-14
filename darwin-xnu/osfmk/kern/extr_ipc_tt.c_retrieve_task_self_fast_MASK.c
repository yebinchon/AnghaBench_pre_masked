
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_15__ {int ip_srights; } ;
struct TYPE_14__ {scalar_t__ itk_self; TYPE_2__* itk_sself; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

ipc_port_t
FUNC_9(
 task_t VAR_1)
{
 ipc_port_t VAR_2;

 FUNC_0(VAR_1 == FUNC_1());

 FUNC_7(VAR_1);
 FUNC_0(VAR_1->itk_self != VAR_0);

 if ((VAR_2 = VAR_1->itk_sself) == VAR_1->itk_self) {


  FUNC_3(VAR_2);
  FUNC_0(FUNC_2(VAR_2));
  FUNC_4(VAR_2);
  VAR_2->ip_srights++;
  FUNC_5(VAR_2);
 } else
  VAR_2 = FUNC_6(VAR_2);
 FUNC_8(VAR_1);

 return VAR_2;
}

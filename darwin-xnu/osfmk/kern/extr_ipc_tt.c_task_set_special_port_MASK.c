
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_6__ {scalar_t__ itk_self; int itk_debug_control; int itk_task_access; int itk_seatbelt; int itk_bootstrap; int itk_host; int itk_sself; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 TYPE_1__* VAR_5 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(
 task_t VAR_6,
 int VAR_7,
 ipc_port_t VAR_8)
{
 ipc_port_t *VAR_9;
 ipc_port_t VAR_10;

 if (VAR_6 == VAR_5)
  return VAR_2;

 switch (VAR_7) {
 case 129:
     VAR_9 = &VAR_6->itk_sself;
     break;

 case 130:
     VAR_9 = &VAR_6->itk_host;
     break;

 case 132:
     VAR_9 = &VAR_6->itk_bootstrap;
     break;

 case 128:
     VAR_9 = &VAR_6->itk_seatbelt;
     break;

 case 133:
     VAR_9 = &VAR_6->itk_task_access;
     break;

 case 131:
     VAR_9 = &VAR_6->itk_debug_control;
     break;

 default:
     return VAR_2;
 }

 FUNC_2(VAR_6);
 if (VAR_6->itk_self == VAR_0) {
  FUNC_3(VAR_6);
  return VAR_1;
 }


 if ((128 == VAR_7 || 133 == VAR_7)
  && FUNC_0(*VAR_9)) {
   FUNC_3(VAR_6);
   return VAR_3;
 }

 VAR_10 = *VAR_9;
 *VAR_9 = VAR_8;
 FUNC_3(VAR_6);

 if (FUNC_0(VAR_10))
  FUNC_1(VAR_10);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_6__ {scalar_t__ itk_self; int itk_debug_control; int itk_task_access; int itk_seatbelt; int itk_bootstrap; int itk_host; int itk_nself; int itk_sself; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 TYPE_1__* VAR_4 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(
 task_t VAR_5,
 int VAR_6,
 ipc_port_t *VAR_7)
{
 ipc_port_t VAR_8;

 if (VAR_5 == VAR_4)
  return VAR_2;

 FUNC_2(VAR_5);
 if (VAR_5->itk_self == VAR_0) {
  FUNC_3(VAR_5);
  return VAR_1;
 }

 switch (VAR_6) {
 case 130:
  VAR_8 = FUNC_0(VAR_5->itk_sself);
  break;

 case 129:
  VAR_8 = FUNC_1(VAR_5->itk_nself);
  break;

 case 131:
  VAR_8 = FUNC_0(VAR_5->itk_host);
  break;

 case 133:
  VAR_8 = FUNC_0(VAR_5->itk_bootstrap);
  break;

 case 128:
  VAR_8 = FUNC_0(VAR_5->itk_seatbelt);
  break;

 case 134:
  VAR_8 = FUNC_0(VAR_5->itk_task_access);
  break;

 case 132:
  VAR_8 = FUNC_0(VAR_5->itk_debug_control);
  break;

 default:
     FUNC_3(VAR_5);
  return VAR_2;
 }
 FUNC_3(VAR_5);

 *VAR_7 = VAR_8;
 return VAR_3;
}

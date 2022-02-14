
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_6__ {scalar_t__ active; int ith_sself; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(
 thread_t VAR_4,
 int VAR_5,
 ipc_port_t *VAR_6)
{
 kern_return_t VAR_7 = VAR_2;
 ipc_port_t *VAR_8;

 if (VAR_4 == VAR_3)
  return (VAR_1);

 switch (VAR_5) {

 case 128:
  VAR_8 = &VAR_4->ith_sself;
  break;

 default:
  return (VAR_1);
 }

  FUNC_1(VAR_4);

 if (VAR_4->active)
  *VAR_6 = FUNC_0(*VAR_8);
 else
  VAR_7 = VAR_0;

 FUNC_2(VAR_4);

 return (VAR_7);
}

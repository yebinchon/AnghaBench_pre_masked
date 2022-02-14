
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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(
 thread_t VAR_5,
 int VAR_6,
 ipc_port_t VAR_7)
{
 kern_return_t VAR_8 = VAR_3;
 ipc_port_t *VAR_9, VAR_10 = VAR_0;

 if (VAR_5 == VAR_4)
  return (VAR_2);

 switch (VAR_6) {

 case 128:
  VAR_9 = &VAR_5->ith_sself;
  break;

 default:
  return (VAR_2);
 }

 FUNC_2(VAR_5);

 if (VAR_5->active) {
  VAR_10 = *VAR_9;
  *VAR_9 = VAR_7;
 }
 else
  VAR_8 = VAR_1;

 FUNC_3(VAR_5);

 if (FUNC_0(VAR_10))
  FUNC_1(VAR_10);

 return (VAR_8);
}

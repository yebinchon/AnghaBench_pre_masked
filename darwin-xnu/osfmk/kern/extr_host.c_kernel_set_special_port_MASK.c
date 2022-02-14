
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef TYPE_1__* host_priv_t ;
struct TYPE_5__ {int * special; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int) ;

kern_return_t
FUNC_7(host_priv_t VAR_3, int VAR_4, ipc_port_t VAR_5)
{
 ipc_port_t VAR_6;

 if (!FUNC_4(VAR_4))
  FUNC_6("attempted to set invalid special port %d", VAR_4);


 if (VAR_4 == VAR_0)
  return (VAR_1);


 FUNC_1(VAR_3);
 VAR_6 = VAR_3->special[VAR_4];
 VAR_3->special[VAR_4] = VAR_5;
 FUNC_2(VAR_3);






 if (FUNC_0(VAR_6))
  FUNC_3(VAR_6);
 return (VAR_2);
}

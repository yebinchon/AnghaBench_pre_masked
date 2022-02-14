
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

kern_return_t
FUNC_4(host_priv_t VAR_1, int VAR_2, ipc_port_t * VAR_3)
{
 if (!FUNC_2(VAR_2))
  FUNC_3("attempted to get invalid special port %d", VAR_2);

 FUNC_0(VAR_1);
 *VAR_3 = VAR_1->special[VAR_2];
 FUNC_1(VAR_1);
 return (VAR_0);
}

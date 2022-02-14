
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ipc_port_t ;
typedef TYPE_1__* clock_t ;
struct TYPE_3__ {scalar_t__ cl_control; scalar_t__ cl_service; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;

void
FUNC_2(
 clock_t VAR_1)
{
 ipc_port_t VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2 == VAR_0)
  FUNC_1("ipc_clock_init");
 VAR_1->cl_service = VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2 == VAR_0)
  FUNC_1("ipc_clock_init");
 VAR_1->cl_control = VAR_2;
}

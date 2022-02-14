
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;

void
FUNC_5(void)
{
 ipc_port_t VAR_6 = FUNC_3(VAR_5);

 if (!FUNC_0(VAR_6))
  FUNC_4("Couldn't allocate send right for ux_handler_port!\n");

 kern_return_t VAR_7 = VAR_3;






 VAR_7 = FUNC_2(FUNC_1(),
                               VAR_1 & ~(VAR_2),
                               VAR_6,
                               VAR_0 | VAR_4,
                               0);

 if (VAR_7 != VAR_3)
  FUNC_4("host_set_exception_ports failed to set ux_handler! %d", VAR_7);
}

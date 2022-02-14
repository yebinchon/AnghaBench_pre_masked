
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef scalar_t__ host_priv_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;

kern_return_t
FUNC_3(host_priv_t VAR_5, int VAR_6, ipc_port_t VAR_7)
{
 if (VAR_5 == VAR_2 || VAR_6 <= VAR_0 || VAR_6 > VAR_1)
  return (VAR_3);






 return (FUNC_1(VAR_5, VAR_6, VAR_7));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef int ipc_kobject_type_t ;
typedef int ipc_kobject_t ;
typedef scalar_t__ io_object_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

kern_return_t
FUNC_3( ipc_port_t VAR_1, io_object_t VAR_2, ipc_kobject_type_t VAR_3 )
{
    FUNC_0(VAR_1);
    FUNC_2( VAR_1, (ipc_kobject_t) VAR_2, VAR_3);
    FUNC_1(VAR_1);

    return( VAR_0);
}

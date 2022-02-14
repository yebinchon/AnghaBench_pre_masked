
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_type_t ;
typedef int * io_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static ipc_port_t
FUNC_4(io_object_t VAR_1, ipc_kobject_type_t VAR_2)
{
    ipc_port_t VAR_3;
    ipc_port_t VAR_4;

    if( VAR_1 == ((void*)0))
        return VAR_0;

    VAR_3 = FUNC_0( VAR_1, VAR_2 );
    if( VAR_3) {
 VAR_4 = FUNC_3( VAR_3);
 FUNC_1( VAR_3 );
    } else
 VAR_4 = VAR_0;

    FUNC_2( VAR_1 );

    return( VAR_4);
}

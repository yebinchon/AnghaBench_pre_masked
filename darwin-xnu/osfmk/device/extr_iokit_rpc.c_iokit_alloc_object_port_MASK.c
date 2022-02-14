
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_type_t ;
typedef int ipc_kobject_t ;
typedef scalar_t__ io_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,scalar_t__,scalar_t__*) ;

ipc_port_t
FUNC_6( io_object_t VAR_3, ipc_kobject_type_t VAR_4 )
{
    ipc_port_t VAR_5;
    ipc_port_t VAR_6;

    do {


        VAR_6 = FUNC_3();
        if( VAR_6 == VAR_1)
            continue;


 FUNC_2( VAR_6, (ipc_kobject_t) VAR_3, VAR_4);


        FUNC_1( VAR_6);
        VAR_5 = FUNC_4( VAR_6);
        FUNC_5( VAR_6, 1, VAR_5, &VAR_5);

        FUNC_0( VAR_5 == VAR_1);
 VAR_2++;

    } while( VAR_0);

    return( VAR_6 );
}
